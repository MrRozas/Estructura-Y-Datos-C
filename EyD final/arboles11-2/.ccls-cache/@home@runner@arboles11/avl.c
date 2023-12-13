#include "avl.h"
#define COUNT 10

// muestra los nodos inorder (I, R, D)
void show_nodes_inorder(struct node *root)
{
    if (root == NULL) {
        return;
    }
    show_nodes_inorder(root->left);
    printf("%d ", root->data);
    show_nodes_inorder(root->right);

}

// muestra los nodos preorder (R, I, D)
void show_nodes_preorder(struct node *root)
{
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    show_nodes_preorder(root->left);
    show_nodes_preorder(root->right);

}

// muestra los nodos postorder (I, D, R)
void show_nodes_postorder(struct node *root)
{
    if (root == NULL) {
        return;
    }
    show_nodes_postorder(root->left);
    show_nodes_postorder(root->right);
    printf("%d ", root->data);

}

// funcion auxiliar maximo
int max(int a, int b)
{
    return (a > b)? a : b;
}

// funcion auxiliar height
// entrega la altura del nodo node
// OJO: node puede ser NULL en cuyo caso la altura es 0
// OJO: cuando node es una hoja la altura es 1
int height(struct node *node)
{
    if (node == NULL) {
        return 0;
    }
    return 1 + max(height(node->left), height(node->right));
}

// funcion auxiliar balance
// retorna el height del hijo izquierdo menos el height del hijo derecho
// Si node == NULL, entregamos 0
int balance(struct node *node)
{
    if (node == NULL) {
        return 0;
    }
    return height(node->left) - height(node->right);
}

// rota hacia la derecha el arbol con raiz y
// asume que la raiz y junto al pivote y->left no son NULL
// retorna la nueva raiz del arbol
struct node *rightRotate(struct node *y)
{
    // x es el pivote (nueva raiz)
    struct node *x = y->left;
    // OJO: z podria ser NULL (lo cual no es un problema)
    struct node *z = x->right;

    // rotamos a la derecha
    x->right = y;
    y->left = z;

    // actualizamos el height de y e x 
    // (height de los otros nodos no cambia; no hay que actualizar)
    y->height = height(y);
    x->height = height(x);

    return x;
}

// rota hacia la izquiera el arbol con raiz x
// asume que la raiz x junto al pivote x->right no son NULL
// retorna la nueva raiz del arbol
struct node *leftRotate(struct node *x)
{
    // y es el pivote (nueva raiz)
    struct node *y = x->right;
    // OJO: z podria ser NULL (lo cual no es un problema)
    struct node *z = y->left;

    // rotamos a la izquierda
    y->left = x;
    x->right = z;

    // actualizamos el height de y e x 
    // (height de los otros nodos no cambia; no hay que actualizar)
    y->height = height(y);
    x->height = height(x);

    return y;
}


// inserta el dato data al arbol AVL
// retorna la nueva raiz del arbol
struct node *insert(struct node *node, int data)
{
    if (node == NULL) { // caso arbol vacio
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = data;
        tmp->left = NULL;
        tmp->right = NULL;
        tmp->height = 1; // en este caso las hojas tienen altura 1
        return tmp;
    }

    // caso en que el arbol es no vacio
    // en este caso la raiz es la misma, por eso hacemos "return node;" al final
    // llamamos recursivamente al metodo insert ya sea al lado izquierdo o derecho
    // actualizamos el hijo correpondiente con la nueva raiz obtenida
    if (data < node->data) {
        node->left = insert(node->left, data);
    }
    else {
        node->right = insert(node->right, data);
    }

    // actualizamos height de node
    node->height = height(node);
    // calculamos balance de node
    // si balance > 1 o balance < -1, el nodo esta desbalanceado
    int node_balance = balance(node);

    // caso left left
    if (node_balance > 1 && data < node->left->data) {
        return rightRotate(node);
    }
    // caso right right
    if (node_balance < -1 && data >= node->right->data) {
        return leftRotate(node);
    }
    // caso left right
    if (node_balance > 1 && data >= node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // caso right left
    if (node_balance < -1 && data < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// busca el dato data en el arbol AVL
// retorna el primer nodo que se encuentra con el dato, o
// si el dato no esta se retorna NULL
struct node *search(struct node *root, int data)
{
    // caso base: ya sea root es NULL, es decir, el dato no esta, o
    // el dato esta en root. En cualquier caso hay que retornar root
    if(root == NULL || root->data == data) {
        return root;
    }

    // hacemos la busqueda ya sea a la izquierda o a la derecha, 
    // y retornamos lo obtenido
    if(data < root->data) {
        return search(root->left, data);
    }
    return search(root->right, data);
}

void print2DUtil(struct node *raiz, int space){
  if (raiz == NULL){ //Si es nulo, no imprime nada
    return;
  }
  space += COUNT; // Incrementar la distancia entre los nodos
  print2DUtil(raiz->right, space); // Se muestra el lado derecho primero
  printf("\n");
  for (int i = COUNT; i < space; i++) //Ciclo que imprime los datos del nodo.
    printf(" ");
    printf("(%d)\n", raiz->data);
  print2DUtil(raiz->left, space); //Se repite el proceso para el lado izquierdo.
}
