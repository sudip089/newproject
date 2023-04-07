#include <stdio.h>
#define f(x, y) x + y
int main()
{
    float x0, y0, xn, yn, slope, h;
    int i, n;
    printf("Enter the enetial condition");
    printf("x0=");
    scanf("%f", &x0);
    printf("y0= ");
    scanf("%f", &y0);
    printf("Enter the calculation point");
    scanf("%f", &xn);
    printf("Enter the number of step");
    scanf("%d", &n);
    h=(xn-x0)/n;
    for(i=0;i<n;i++){
        slope=f(x0,y0);
        yn=y0+h*slope;
        printf("%.4f\t%.4f\t%0.4f\t%0.4f\n");
        y0=yn;
        x0=x0+h;

    }
printf("value of y at x=%0.2f is %0.3f",xn,yn);
}