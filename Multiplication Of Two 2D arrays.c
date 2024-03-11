//This Program shows How to Multiply Two 2D arrays and store them in an new array

#include<stdio.h>
void mul(int a[10][10],int b[10][10],int n);
void main()
{
    int i,j,a[10][10],b[10][10],c[10][10],n;
    printf("Enter the order of matrix\n");
    scanf("%d",&n);
    printf("Enter the elements of the first matrix\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

            printf("Enter the elements of the second matrix\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);

            printf("The elements of the first matirix\n");
 for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
        printf("%d  ",a[i][j]);

  printf("\n");
 }
    printf("The elements of the second matrix\n");
        for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
        printf("%d  ",b[i][j]);

  printf("\n");
 }

        mul(a,b,n);


}
void mul(int a[10][10],int b[10][10],int n)
{
    int i,j,k,sum,c[10][10];
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {

            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);

        }
        }
    }

printf("The elements of the solved matrix\n");
        for(i=0;i<n;i++)
 {
    for(j=0;j<n;j++)
        printf("%d  ",c[i][j]);

  printf("\n");
 }
}
