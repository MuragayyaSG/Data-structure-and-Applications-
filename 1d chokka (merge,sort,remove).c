#include<stdio.h>
#include<stdlib.h>
void read(int a[100],int n);
void disp(int a[100],int n);
int merge(int a[100],int c[100],int m,int k);
void sort(int c[100],int n);
int removerepeated(int c[100],int m);
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
sort(c,t);
printf("After sorting\n");
disp(c,t);
s=removerepeated(c,t);
 printf("\nafter removing duplicate elements");

    disp(c,s);

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
int removerepeated(int c[100],int m)
{
      int i,j,k;
      for(i=0;i<m;i++)
      {
          for(j=i+1;j<m;)
          {
              if(c[i]==c[j])
              {
                  for(k=j;k<m;k++)
                  {
                      c[k]=c[k+1];
                  }m--;
              }
              else j++;
          }
      }
      return m;

}
