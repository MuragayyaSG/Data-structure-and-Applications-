#include<stdio.h>
#include<stdlib.h>
int usum(int a[10][10],int m,int n);
int lsum(int a[10][10],int m,int n);
void u_l_s(int a[10][10],int m,int n);
void read(int a[10][10],int m,int n);
void disp(int a[10][10],int m,int n);
void add(int a[10][10],int b[10][10],int c[10][10]int m,int n );
main()
{
int m,n,sum,a[10][10],upsum,lpsum;
printf("enter the order\n");
scanf("%d%d",&m,&n);
if(m!=n)
{
    printf("Inavlid input for square matrix\n");
    exit(0);
}
printf("Enter the array elements\n");
read(a,m,n);
disp(a,m,n);
upsum=usum(a,m,n);
printf("\nthe sum of upper triangular elemets of array is %d\n",upsum);
lpsum=lsum(a,m,n);
printf("\nthe sum of lower triangular elemets of array is %d\n",lpsum);
u_l_s(a,m,n);

}
int usum(int a[10][10],int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(i<j)
        {
          s=s+a[i][j];
        }
        return s;
}
void read(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}
void disp(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
         printf("\n");
        for(j=0;j<n;j++)
    printf("%d  ",a[i][j]);
       }

}
int lsum(int a[10][10],int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(i>j)
        {
          s=s+a[i][j];
        }
        return s;
}
void u_l_s(int a[10][10],int m,int n)
{
    int i,j,ssum=0,usum=0,lsum=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(i+j==m-1)
                ssum=ssum+a[i][j];
            else if(i+j<n-1)
                usum=usum+a[i][j];
            else
                lsum=lsum+a[i][j];
        }

        printf("With respect to secodary diagonal \n");
        printf("\nsum of secondary diagonal elements = %d  \nsum of upper triangular = %d  \nsum of lower triangular = %d ",ssum,usum,lsum);

}
