#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode;
void creat()
{
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to add : ");
        scanf("%d", &choice);
    }
}
void display()
{
    printf("The linklist is ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
void insertBeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    display();
}
int length()
{
    temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertEnd()
{
    int l=length();
    int i=1;
    printf("the length is %d ",l);
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert: ");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    temp = head;
  //  while (temp->next!=NULL)
  while(i<(l-1))
    {
        temp = temp->next;
        i++;
    }
    temp->next = newnode;
    display();
}
int main()
{
    creat();
    // display();
    //insertBeg();
    insertEnd();
    
}