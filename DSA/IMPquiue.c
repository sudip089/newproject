#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enque(int x)
{
    if (rear == N - 1)
    {
        printf("over flow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("under flow");
    }
    else if (front == rear)
    {

        // printf("\n The dequeue element is %d",queue[front]);
        front = rear = -1;
    }
    else
    {
        // printf("\n The dequeue element is %d",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("\n The queue is ");
        for (i = front; i <= rear; i++)
        {
            printf("%d", queue[i]);
        }
    }
}
void peak()
{
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("The peak is %d", queue[front]);
    }
}
int main()
{
    enque(2);
    enque(5);
    enque(7);
    display();
    //  dequeue();
    //  dequeue();
    dequeue();
    dequeue();
    display();
}