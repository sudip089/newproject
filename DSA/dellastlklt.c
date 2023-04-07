 #include<stdio.h>
#include<stdlib.h>
 
void main()
{
     struct node
   {
      int data;
      struct node *next;
   };
   struct node *head, *newnode, *temp;
   head = NULL, newnode = NULL, temp = NULL;
   int choice = 1;

   while (choice == 1)
   {
      newnode = (struct node *)malloc(sizeof(struct node));
      printf("Enter data");
      scanf("%d", &newnode->data);
      newnode->next = NULL;
      if (head == NULL)
      {
         head = newnode;
         temp = newnode;
      }
      else
      {
         temp->next = newnode;
         temp = newnode;
      }
      printf("Do u want to cont(0,1)?");
      scanf("%d", &choice);
   }
   struct node *del;
   temp=head;
   while (temp->next !=NULL)
   {
    del=temp;
    temp=temp->next;
   }
   del->next=NULL;
   
   temp=head;
   while (temp != NULL)
   {
      printf("%d", temp->data);
      temp = temp->next;
   }
   
}