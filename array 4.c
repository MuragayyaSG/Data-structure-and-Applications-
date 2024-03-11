
#include<stdio.h>
void read(int A[100],int n);
void print(int A[100],int n);
void expo(int A[100],int n);
int max(int A[100],int n);
main()
{
    int A[100],n,m;
    printf("Entre the Months \n");
    scanf("%d",&n);
    if(n==12)
    {
    read(A,n);
    print(A,n);
    expo(A,n);
    m=max(A,n);
     printf("The month in which highest expenditure is done is the %d th month",m);
    }
    exit(0);
}

void read(int A[100],int n)
{
    int i;
    printf("Enter the every months expenditure from JAN to dec\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}

void print(int A[100],int n)
{
    int i;
    printf("the  elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}
void expo(int A[100],int n)
{
    int sum=0,i;
    int asum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    asum=sum/12;

    printf("\n The total expenditure is %d\n",sum);
    printf("\n The avarage expenditure is %d\n",asum);

}
int max(int A[100],int n)
{
    int i,max=A[0],j=0;
    for(i=1;i<n;i++)
    {
        if(A[i]>max)
            {
            max=A[i];j=i+1;
    }}
    return j;

}

