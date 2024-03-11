//Program to print N terms of Fibbonacci series
#include<stdio.h>
#include<stdlib.h>
void main()
{
int prev=0,cur=1,i,n,temp;
float gold;
printf("Enter the number of terms you want to print \n");
scanf("%d",&n);
switch(n)
{
case 0 :printf("0 terms ");
        exit(0);
case 1 :printf("%d",prev);
        exit(0);
case 2 : printf("%d   %d ",prev,cur);
        exit(0);
 default : break;
}
 printf("%d %d ",prev,cur);
for(i=3;i<=n;i++)
{
    temp=prev;
    prev=cur;
     cur=prev+temp;

    printf(" %d  ",cur);

}
gold=(float)cur/prev;
printf("\nThe golden ratio = %f",gold);

}
