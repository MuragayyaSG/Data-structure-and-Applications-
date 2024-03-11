//Program to print Star series with N rows
//This Programs Prints 4 special star patterns 
#include<stdio.h>
void main()
{
int i,j,n,k;
printf("Enter the number of ROWs you want\n");
scanf("%d",&n);
printf("Top to bottom\n\n");
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
printf("*");

printf("\n");
}

printf("\n");
printf("Bottom to Top\n\n");
for(i=0;i<n;i++)
{
for(j=n;j>=i+1;j--)
printf("*");

printf("\n");
}


printf("\nMirrored Top to bottom\n\n");
for(i=0;i<n;i++)
{
for(k=n;k>i+1;k--)
        printf(" ");

for(j=0;j<=i;j++)
printf("*");

printf("\n");
}

printf("\nMirrored Bottom to Top\n\n");
for(i=0;i<n;i++)
{
for(k=0;k<=i-1;k++)
printf(" ");

for(j=n;j>=i+1;j--)
printf("*");

printf("\n");
}
}
