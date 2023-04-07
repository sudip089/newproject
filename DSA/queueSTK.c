#include <stdio.h>
#define N 5
int top1 = -1;
int top2 = -1;
int s1[N], s2[N];
int count = 0;
void push1(int data)
{
    if (top1 == N - 1)
    {
        printf("queue is empty");
    }
    else
    {
        top1++;
        s1[top1] = data;
    }
}
void push2(int data)
{
    if (top2== N - 1)
    {
        printf("queue is empty");
    }
    else
    {
        top2++;
        s2[top2] = data;
    }
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    int i, a, b;
    if (top1 == -1 && top2 == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
        pop2();
        count--;
        for(i=0;i<count;i++){
            a=pop2();
            push1(a);
        }
    }
}
void display(){
    printf("The queue is ");
   int i;
   for(i=0;i<=top1;i++){
    printf("%d",s1[i]);
   } 
}
void main(){
    enqueue(4);
    enqueue(3);
    enqueue(7);
    dequeue();
    display();
}