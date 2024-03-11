

#include<stdio.h>
void read(int a[10][10],int m,int n);
void main()
{
int a1[10][10],a2[10][10],a3[10][10],i,j,m,n;
printf("Enter the number of rows and column\n");
scanf("%d%d",&m,&n);
read(a1,m,n);
printf("The first array is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",a1[i][j]);
}
printf("\n");
}

read( a2,m,n);
printf("The second array is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",a2[i][j]);
}
printf("\n");
}
//addition
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
a3[i][j]=a1[i][j] + a2[i][j];
}
}

printf("The Sum of two arrays is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",a3[i][j]);
}
printf("\n");
}

//subtraction

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
a3[i][j]=a1[i][j] - a2[i][j];
}
}

printf("The subtraction of two arrays is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",a3[i][j]);
}
printf("\n");
}

}
void read(int a[10][10],int m,int n)
{
int i,j;
printf("Enter the elements of the Array\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

}
