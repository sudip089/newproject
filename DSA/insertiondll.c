#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *newnode, *temp, *tail;
void creat()
{
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
            tail = temp;
        }
        printf("Do you want to add");
        scanf("%d", &choice);
    }
}
int length()
{
    int count = 0;
    temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    // printf("the length is %d",count);
    return count;
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
void reverse()
{
    temp = tail;
    while (temp)
    {
        printf("%d\t", temp->data);
        temp = temp->prev;
    }
}
void insertfirst()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data  for insert");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    display();
}
void insertlast()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data  for insert");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    display();
}
void insertpos()
{
    int pos, len, i = 1;
    len = length();
    printf("Enter the pos where you want to insert");
    scanf("%d", &pos);
    if (pos < 1 || pos > len)
    {
        printf("Invalid position");
    }
    else if (pos == 1)
    {
        insertfirst();
    }
    else if(pos=len){
        insertlast();
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data  for insert");
        scanf("%d", &newnode->data);
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = NULL;
        newnode->next = NULL;
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
        display();
    }
}
int main()
{
    creat();
    printf("\n");
    display();
    printf("\n");
    reverse();
    printf("\n");
    // insertfirst();
    //  printf("\n");
    // insertlast();
    printf("\n");
    insertpos();
    return 0;
}