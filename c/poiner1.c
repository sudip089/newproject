#include<stdio.h>
struct point{
    int x;
    int y;
};
struct point edit(struct point p){
    (p.x)++;
    (p.y)=(p.y)+5;
return p;
}
void print(struct point p){
    printf("%d %d\n",p.x,p.y);
}
int main(){
    struct point p1={20,25};
    struct point p2={27,30};
    p1 = edit(p1);
    p2=edit(p2);
    print(p1);
    print(p2);
}