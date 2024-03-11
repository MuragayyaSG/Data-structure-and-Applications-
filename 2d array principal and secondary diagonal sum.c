//C program to find the sum of principle diagonal elements and secondary diagonal elements

#include<stdio.h>
#include<stdlib.h>
int psum(int a[10][10],int m,int n);//principal diagonal sum
int sdiasum(int a[10][10],int m,int n);//secondary diagonal sum
void read(int a[10][10],int m,int n);
void disp(int a[10][10],int m,int n);
main()
{
int m,n,pdiasum,sdsum,a[10][10];
printf("enter the row size and column size\n");
scanf("%d%d",&m,&n);
if(m!=n)
{
    printf("Inavlid input for square matrix\n");
    exit(0);
}
printf("Enter the array elements\n");
read(a,m,n);
disp(a,m,n);
pdiasum=psum(a,m,n);
sdsum=sdiasum(a,m,n);
printf("the sum of principle diagonal elemets of array is %d\n",pdiasum);
printf("the sum of secondary diagonal elemets of array is %d\n",sdsum);
}
int psum(int a[10][10],int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(i==j)
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

int sdiasum(int a[10][10],int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if((i+j)==(m-1))
        {
          s=s+a[i][j];
        }
        return s;
}
