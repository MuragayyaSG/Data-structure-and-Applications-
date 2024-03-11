/*program to find the largest element , to check the smallest element
just change the ">" symbol to "<"*/
/*Addditional max in each roew and each column*/
/*Addditional min in each roew and each column*/
//Sum of each row and to make sum of columns change m to n
// sum of rows and column another method
//intrechanging of rows and columns



#include<stdio.h>
void read(int a[10][10],int m,int n);
int max(int a[10][10],int m,int n);
void disp(int a[10][10],int m,int n);
void row_max(int a[10][10],int m,int n);
void row_min(int a[10][10],int m,int n);
void column_max(int a[10][10],int m,int n);
void column_min(int a[10][10],int m,int n);
void rowsum(int a[10][10],int m,int n);
void columnsum(int a[10][10],int m,int n);
void interchange_rows(int a[10][10],int m,int n);
void interchange_columns(int a[10][10],int m,int n);
main()
{

int a[10][10],m,n,m1;
printf("Enter the order \n");
scanf("%d%d",&m,&n);
if(m!=n)
{
    printf("This is not a square matrix\n");
    exit(0);
}
read(a,m,n);
disp(a,m,n);
m1=max(a,m,n);
printf("The largest element in the array is %d\n",m1);
row_max(a,m,n);
row_min(a,m,n);
column_max(a,m,n);
column_min(a,m,n);
rowsum(a,m,n);
columnsum(a,m,n);
interchange_rows(a,m,n);

interchange_columns(a,m,n);

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
int max(int a[10][10],int m,int n)
{
    int i,j,large=a[0][0];
     for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j]>large)
            large=a[i][j];

        return large;
}
void row_max(int a[10][10],int m,int n)
{
    int i,j,max;
    for(i=0;i<m;i++)
    {
        max=0;

        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];

        }
        printf("max = %d\n",max);
    }
}

void rowsum(int a[10][10],int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
    {
        s=0;

        for(j=0;j<n;j++)
        {
            s=s+a[i][j];

        }
        printf("row sum = %d\n",s);
    }

}

/*void rowsum(int a[10][10],int m,int n)
{
    int i,j,rs[10]=0;
    for(i=0;i<m;i++)
    {
        rs[i]=0;

        for(j=0;j<n;j++)
        {
            rs[i]=rs[i]+a[i][j];

        }
        printf("row sum = %d\n",rs[i]);
    }
}

*/
void columnsum(int a[10][10],int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
    {
        s=0;

        for(j=0;j<n;j++)
        {
            s=s+a[j][i];

        }
        printf("column sum = %d\n",s);
    }

}

void interchange_rows(int a[10][10],int m,int n)
{
    int i,j,c,p,q;
    printf("\nEnter the number of two rows to be interchanged\n");
    scanf("%d%d",&p,&q);
    for(i=0;i<m;i++)
    {
        c=a[p-1][i];
        a[p-1][i]=a[q-1][i];
        a[q-1][i]=c;
    }
    disp(a,m,n);

}

void interchange_columns(int a[10][10],int m,int n)
{
    int i,j,c,p,q;
    printf("\nEnter the number of two columns to be interchanged\n");
    scanf("%d%d",&p,&q);
    for(i=0;i<m;i++)
    {
        c=a[i][p-1];
        a[i][p-1]=a[i][q-1];
        a[i][q-1]=c;
    }
    printf("after exchange\n");
    disp(a,m,n);
}

void row_min(int a[10][10],int m,int n)
{
    int i,j,min;
    for(i=0;i<m;i++)
    {
        min=a[i][j];

        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
            min=a[i][j];

        }
        printf("row min = %d\n",min);
    }
}
void column_max(int a[10][10],int m,int n)
{
    int i,j,max;
    for(i=0;i<m;i++)
    {
        max=0;

        for(j=0;j<n;j++)
        {
            if(a[j][i]>max)
            max=a[j][i];

        }
        printf("column max = %d\n",max);
    }
}
void column_min(int a[10][10],int m,int n)
{
    int i,j,min;
    for(i=0;i<m;i++)
    {
        min=a[i][j];

        for(j=0;j<n;j++)
        {
            if(a[j][i]<min)
            min=a[j][i];

        }
        printf("column min = %d\n",min);
    }
}

