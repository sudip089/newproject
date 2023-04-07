#include<stdio.h>
struct point{
    int x;
    int y;
};
void print(struct point *ptr){
    printf("%d %d\n",ptr->x,ptr->y);
}
int main(){
    struct point p1={20,25};
    struct point p2={27,30};
    print(&p1);
    print(&p2);
}