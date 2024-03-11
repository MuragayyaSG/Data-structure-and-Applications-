#include<stdio.h>
void read(int a[10],int n);
void print(int a[10],int n);
int merge(int a[10],int c[30],int m,int k);
void sorting(int c[10],int t);
int removerepeated(int c[3],int t);
main()
{
    int a[10],b[10],c[30],m,n,k=0,t,s;
    printf("enter size of set 1\n");
    scanf("%d",&m);
    read(a,m);
    printf("enter size of set 2\n");
    scanf("%d",&n);
    read(b,n);
    t=merge(a,c,m,k);
    t=merge(b,c,n,t);
    printf("after merging\n");
    print(c,t);
    sorting(c,t);
    printf("\nafter sorting\n");
    print(c,t);
    s=removerepeated(c,t);
    printf("\nafter removing duplicate elements");

    print(c,s);

}
void read(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++){
        scanf("%d\t",&a[i]);
    }
}
void print(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int merge(int a[10],int c[30],int m,int k)
{
    int i;
    for(i=0;i<m;i++)
    {
        c[k]=a[i];
        k++;
    }
    return k;
}

void sorting(int c[30],int t)
{
    int i,j,t1;
    for(i=0;i<=t-2;i++)
    {
    for(j=0;j<=t-2-i;j++)
    {
        if(c[j]>c[j+1])
           {

            t1=c[j];
        c[j]=c[j+1];
        c[j+1]=t1;
        }}}}

  int removerepeated(int c[3],int t)
  {
      int i,j,k;
      for(i=0;i<t;i++)
      {
          for(j=i+1;j<t;)
          {
              if(c[i]==c[j])
              {
                  for(k=j;k<t;k++)
                  {
                      c[k]=c[k+1];
                  }t--;
              }
              else j++;
          }
      }
      return t;

  }
