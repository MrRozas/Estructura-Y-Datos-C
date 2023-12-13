#include <stdio.h>
#include "avl.h"

int main()
{
  // creamos un AVL vacio
  struct node *root = NULL;

  // en el caso del AVL al insertar el root siempre puede cambiar (por las rotaciones)
  // importante siempre escribir root = insert(root, data)
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 12);
  root = insert(root, 25);
  root = insert(root, 3);
  root = insert(root, 14);
  root = insert(root, 21);
  root = insert(root, 1);

  printf("PREORDER (R, I, D):\n");
  show_nodes_preorder(root); // notar que el arbol queda balanceado
  printf("\n");
  printf("INORDER (I, R, D):\n");
  show_nodes_inorder(root);
  printf("\n");
  printf("POSTORDER (I, D, R):\n");
  show_nodes_postorder(root);
  // la altura queda 4 en vez de 8 (caso no balanceado)
  printf("\nHeight: %d\n", root->height); 
  print2DUtil(root, 0);

  return 0;
}

