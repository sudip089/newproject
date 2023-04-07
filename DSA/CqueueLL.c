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
            rear->next=front;
        }
}
void dequeue(){
    temp=front;
    if(front==0&&rear==0){
        printf("The queue is empty");
    }
    else if(front==rear){
        front=rear=0;
        free(temp);
    }
    else{
        front=front->next;
        rear->next=front;
        free(temp);
    }

}
void peak(){
    if(front==0&&rear==0){
    printf("The queue is empty");
 }
 else{
    printf("The peak is %d",front->data);
 }
}
void display(){
  temp=front;
  if(front==0&&rear==0){
  printf("The queue is empty");
    }
 else{
    printf("The queue is ");
    do{
        printf("%d",temp->data);
        temp=temp->next;
    }
    while(temp!=front);
 }   
}
void display2(){
  temp=front;
  if(front==0&&rear==0){
  printf("The queue is empty");
    }
 else{
    printf("The queue is ");
    while(temp->next!=front){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
 }   
}
 void main(){
    enqueue(4);
    enqueue(3);
    enqueue(7);
    enqueue(8);
    display();
    dequeue();
    dequeue();
    display2();
    peak();
 }