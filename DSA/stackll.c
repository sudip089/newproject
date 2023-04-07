#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0, *newnode, *temp;
void push()
{
    int ch = 1;
    while (ch == 1)
    {
        int x;
        printf("Enter data : ");
        scanf("%d", &x);
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = top;
        top = newnode;
        printf("Do you want to continue");
        scanf("%d", &ch);
    }
}
void pop()
{
    temp = top;
    top = top->next;
    free(temp);
}
void display()
{
    temp = top;
    if (top == 0)
    {
        printf("stack is empty");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    push();
    display();
    pop();
    display();
}