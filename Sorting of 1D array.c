//C code to sort 1 D array

#include<stdio.h>
#include<stdlib.h>
void read(int a[100],int n);
void disp(int a[100],int n);
void sort(int c[100],int n);
main()
{
int a[100],n,i,k;
printf("enter the size of array\n");
scanf("%d",&n);
read(a,m);
sort(a,m);
printf("After sorting\n");
disp(a,m);

}
void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void disp(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}

void sort(int c[100],int n)
{
    int i,j,t1;
    for(i=0;i<=n-2;i++)
    {
    for(j=0;j<=n-2-i;j++)
    {
        if(c[j]>c[j+1])
           {

            t1=c[j];
        c[j]=c[j+1];
        c[j+1]=t1;
        }}}
}

