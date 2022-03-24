#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
struct node {
   int data;
   struct node *leftChild;
   struct node *rightChild;
};
void insert(int data)
{
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;
   struct node *root;
   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty, create root node
   if(root == NULL)
   {
      root = tempNode;
   }
   else
   {
      current = root;
      parent  = NULL;

      while(1)
      {
	 parent = current;
	 if(data < parent->data)
	 {
	    current = current->leftChild;
	    if(current == NULL)
	    {
	       parent->leftChild = tempNode;
	       return;
	    }
	 }
	 else
	 {
	    current = current->rightChild;
	    if(current == NULL)
	    {
	       parent->rightChild = tempNode;
	       return;
	    }
	 }
      }
   }
}
struct node* search
{
   struct node *root;
   struct node *current = root;
   printf("Enter the search value:- ");
   scanf("%d",current->data);
   while(current->data != data)
   {
      if(current != NULL)
      printf("%d ",current->data);
      if(current->data > data)
      {
	 current = current->leftChild;
      }
      else
      {
	 current = current->rightChild;
      }
      if(current == NULL)
      {
	 return NULL;
      }
      return current;
   }
   getch();
}
