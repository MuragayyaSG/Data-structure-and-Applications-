//Program to perform linear search

#include<stdio.h>
void read(int A[100],int n);
void print(int A[100],int n);
void linear(int A[100],int n);
main()
{
    int A[100],n;
    printf("Entre the limit\n");
    scanf("%d",&n);
    read(A,n);
    print(A,n);
    linear(A,n);
    linear(A,n);
}
void read(int A[100],int n)
{
    int i;
    printf("Enter the %d elements\n",n);
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
void linear(int A[100],int n)
{
    int c1=0,ele1,ele2,i,c2=0;
    printf("\nEnter the element to be searched\n");
    scanf("%d %d",&ele1,ele2);
    for(i=0;i<n;i++)
    {
        if(A[i]==ele1)
            c=c+1;

    }

    if(c==0)
        printf("\nthe element is not present\n");
    else
        printf("the element is present %d times\n",c);
}
