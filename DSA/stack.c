
#include <stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push(){
    int x;
    printf("Enter data ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("over flow");
    }
    else{
        top++;
        stack[top]=x;
    }

}
void pop(){
   int item;
   if(top==-1){
    printf("under flow");
   }
   else{
    item=stack[top];
    top--;
    printf("%d",item);
   }
}
void display(){
int i;
for(i=top;i>0;i--){
    printf("%d",stack[i]);
}
}
int main(){
    while(1){
        int ch;
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("Invalid choice\n");
        }
    }
}
 