#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *creat(){
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d",x);
    newnode->left=creat();
    printf("Enter right child of %d",x);
    newnode->right=creat();
    return newnode;
}
void preorder(struct node *root){
    if(root==0){
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root){
    if(root==0){
        return;
    }
    
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void postorder(struct node *root){
    if(root==0){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
int bst(struct node *root){
    
}
void main(){
    struct node *root;
    root=0;
    root=creat();
    preorder(root);
    inorder(root);;
    postorder(root);
}