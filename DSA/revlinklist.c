#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *reverse(struct node *head)
{
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next;
    while (curr != NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
    struct node *head;
    struct node *newnode;
    struct node *temp;
    head = NULL;
    int choice = 1, count = 0;
    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data:\n");
        scanf("%d", &newnode->data);
        newnode->link = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = newnode;
        }
        printf("Do you want to continue (0,1)?\n");
        scanf("%d", &choice);
    }
    printf("--------------------------------\n");
    temp = reverse(head);
    // temp = head;
    while (temp != 0)
    {
        printf("\n%d\n", temp->data);
        temp = temp->link;
        count++;
    }
    {
        printf("\nCount=%d", count);
    }
}