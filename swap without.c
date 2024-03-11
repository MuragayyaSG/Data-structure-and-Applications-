#include<stdio.h>
void main()
{
    int a,b;
     printf("Enter the numbers a and b\n");
     scanf("%d%d",&a,&b);
    printf("before swapping  a=%d  and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("After swapping  a=%d  and b=%d\n",a,b);
}
