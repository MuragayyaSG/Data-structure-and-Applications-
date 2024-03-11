//C code to merge two 1D arrays

#include<stdio.h>
#include<stdlib.h>
void read(int a[100],int n);
void disp(int a[100],int n);
int merge(int a[100],int c[100],int m,int k);
main()
{
int a[100],b[100],c[100],m,n,t,k=0,s;
printf("enter the size of set 1\n");
scanf("%d",&m);
read(a,m);
printf("enter the size of set 2\n");
scanf("%d",&n);
read(b,n);
t=merge(a,c,m,k);
t=merge(b,c,n,t);
printf("After merging\n");
disp(c,t);
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
int merge(int a[100],int c[100],int m,int n)
{int i,k;
    for(i=0;i<m;i++)
    {
        c[k]=a[i];
        k++;
    }
    return k;
}

