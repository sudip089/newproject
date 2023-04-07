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
        printf("Enter data:- ");
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
        printf("Do you want to add ->");
        scanf("%d", &choice);
    }
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
void delBeg()
{
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        display();
    }
}
void delEnd()
{
    temp = tail;
    tail->prev->next = NULL;
    tail = tail->prev;
    free(temp);
    display();
}
void delPos()
{
    int pos, i = 1;
    int len = length();
    printf("Enter the pos for del:- ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        delBeg();
    }
    else if (pos == len)
    {
        delEnd();
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        display();
    }
}
int main()
{
    creat();
    // delBeg();
    // delEnd();
    delPos();
}