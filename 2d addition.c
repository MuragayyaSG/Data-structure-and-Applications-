#include<stdio.h>
#include<stdlib.h>

void read(int a[10][10],int m,int n);
void disp(int a[10][10],int m,int n);
void add(int a[10][10],int b[10][10],int c[10][10]int m,int n );
main()
{

int a[10][10],b[10][10],c[10][10]m,n;
printf("Enter the order \n");
scanf("%d%d",&m,&n);
if(m!=n)
{
    printf("This is not a square matrix\n");
    exit(0);
}
read(a,m,n);
disp(a,m,n);
