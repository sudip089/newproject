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
   int pos,i=1;
   printf("Enter the pos where you want to insert");
    scanf("%d",&pos);
    struct node *nextnode;
   temp=head;
   while (i<pos-1)
   {
    temp=temp->next;
    i++;
   }
   nextnode=temp->next;
   temp->next=nextnode->next;
   free(nextnode);
   temp=head;
   while (temp != NULL)
   {
      printf("%d", temp->data);
      temp = temp->next;
   }
   
}