#include<stdio.h>
#define N 5
int dequeue[N];
int f=-1,r=-1;
void enqueuefront(int x){
    if((f==0 &&r==N-1)||(f==r+1)){
    printf("queue is full");
    }
    else if (f==-1&& r==-1){
        f=r=0;
       dequeue[f]=x;
    }
    else if(f==0){
        f=N-1;
        dequeue[f]=x;
    }
    else {
        f--;
        dequeue[f]=x;
    }
}
void enqueuerear(int x){
    if((f==0 &&r==N-1)||(f==r+1)){
    printf("queue is full");
    }
    else if (f==-1&& r==-1){
        f=r=0;
       dequeue[r]=x;
    }
    else if(r==N-1){
        r=0;
        dequeue[r]=x;
    }
    else {
        r++;
        dequeue[r]=x;
    } 
}
void display1(){
    int i=f;
    printf("The deque is");
    while(i!=r){
     printf("%d",dequeue[i]);
        i=(i+1)%N;   
    }
    printf("%d",dequeue[i]);
}
void display(){
    int i=f;
    printf("The deque is ");
    do{
        printf("%d",dequeue[i]);
        i=(i+1)%N;
    }while(i!=r);
}
void dequefront(){
    if (f==-1&& r==-1){
        printf("The queue is empty ");
    }
    else if (f==r){
        f=r=-1;
    }
    else if(f==N-1){
        f=0;
    }
    else{
        f++;
    }
}
void dequerear(){
    if (f==-1&& r==-1){
        printf("The queue is empty ");
    }
    else if (f==r){
        f=r=-1;
    }
    else if(r==0){
        r=N-1;
    }
    else{
        r--;
    }
}
void main(){
  enqueuefront(2);
  enqueuefront(5);
  enqueuerear(-1);
  enqueuerear(0);
  enqueuefront(7);
  display1();
  printf("\n");
  dequefront();
  dequerear();
  dequefront();
  display1();
}