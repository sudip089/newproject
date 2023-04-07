#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*newnode,*rear=0,*temp;

void enqueue(int x){
     newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = NULL;
        if(front==0&&rear==0){
            front=rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
}
void dequeue(){
    temp=front;
    if(front ==0&&rear==0){
    printf("queue is empty");
    }
    else{
    front=front->next;
    free(temp);
    }
}
void display()
{
    temp = front;
    if (front ==0&&rear==0)
    {
        printf("queue is empty");
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

int main(){
    enqueue(4);
    enqueue(3);
    enqueue(7);
    display();
    dequeue();
    printf("\n");
    display();
}