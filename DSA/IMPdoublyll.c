#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head,*newnode,*temp;
void creat(){
    int choice = 1;
    while(choice==1){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("Do you want to add");
    scanf("%d",&choice);
    }
}
void display(){
    temp=head;
   while (temp != NULL)
   {
      printf("%d\t", temp->data);
      temp = temp->next;
   }
}
int main()
{
creat();
display();
return 0;
}