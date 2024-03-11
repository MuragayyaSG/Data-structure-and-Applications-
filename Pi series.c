//This code gives the sum of n terms of the Pi series

#include <stdio.h>
#include <stdlib.h>
float pisum(int n);
int main()
{
    int N;
    float sum;
scanf("%d",&N);
    if(N<100)
    {
        printf("Cannot compute pi series.");
        exit(0);
    }
    sum=pisum(N);
    printf("Pi series = %0.4f",sum);// here %0.4f is used to display only four digits after the decimal point if you want to print only two points after decimal use %0.2f//
    return 0;
}
float pisum(int n)
{
    float sum=0,i,t=1,m=1;
    for(i=1;i<=n;i++)
    {
        sum=sum+t*(4.0/m);
        m=m+2;
        t=t*(-1);

    }
    return sum;
}
