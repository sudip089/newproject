#include<stdio.h>
#define N 5
int queue[N];
int front =-1;
int rear =-1;
void enqueue(int x){
    if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front){
   printf("The queue is full");
    }
   else{
    rear=(rear+1)%N;
    queue[rear]=x;
   }
}
void dequeue(){
    if(front==-1&&rear==-1){
    printf("The queue is full");
    }
    else if(front==rear){
       front=rear=-1;  
    }
    else{
       // printf("%d",queue[front]);
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("\n The queue is ");
        while(i!=rear)
        {
            printf("%d", queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[i]);
    }
}

void main(){
    enqueue(4);
    enqueue(3);
    enqueue(7);
    display();
    dequeue();
    printf("\n");
    display();
    enqueue(9);
    printf("\n");
     display();
     dequeue();
     dequeue();
     dequeue();
     display();
}