#include <stdio.h>
#include <stdlib.h>

// A node structure for linked list
struct node
{
  int data;
  struct node *next;
};

void print_linked_list(struct node *node)
{
    int i=0;
    while(node!=NULL)
    {
      printf("Linked list %d: %d", i, node->data);
      i++;
      node = node->next;
    }
}

int main(){

  char input[5];
  int intInput;
  struct node *start=NULL, *current;

  while(1)
  {
    // struct node new_node; will fail becoz its memory location is the same each and everytime in this whil..loop scope, we have to use malloc
    struct node *new_node = malloc( sizeof(struct node) );; // assign a new node for each iteration
    printf("\nPlease enter an integer to be stored (enter 'x' to exit): ");
    scanf("%s", input);

    if(strcmp(input,"x")==0) // Exit if x is entered
    {
      if(start!=NULL)
        print_linked_list(start);  // print the content of linked list
      break;
    }

    intInput = atoi(input);

    if(start==NULL)
    {
      start = new_node;
      current = new_node;
      start->data = intInput;
      //printf("start->data: %d", start->data);
      start->next = NULL;
    }
    else
    {
      if(current->next==NULL)
      {
        //printf("Inside");
        current->next = new_node;
        current = current->next;
      }
      current->data = intInput;
      current->next = NULL;
      //printf("current->data: %d", current->data);
    }
  }

  return 0;

}
