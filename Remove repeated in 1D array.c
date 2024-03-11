// C code to remove an repeated elements in an array

#include<stdio.h>
#include<stdlib.h>
void read(int a[100],int n);
void disp(int a[100],int n);
int removerepeated(int c[100],int m);
main()
{
int a[100],n,s;
printf("enter the size of array\n");
scanf("%d",&n);
read(a,n);
 disp(a,n);
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
