#include<stdio.h>
struct node{
    int data;
    struct node *next;
};

struct node* push(struct node *head,int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        while(temp == NULL){
            temp = temp->next;
        }
        temp->next = temp;
    }
    return head;

}

int main(){
    return 0;
}