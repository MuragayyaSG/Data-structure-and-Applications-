#include<stdio.h>
void read(int A[100],int n);
void print(int A[100],int n);
void osum_esum(int A[100],int n);
main()
{
    int A[100],n;
    printf("Entre the limit\n");
    scanf("%d",&n);
    read(A,n);
    print(A,n);
    osum_esum(A,n);
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
void osum_esum(int A[100],int n)
{
    int i,osum=0,esum=0;
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            esum=esum+A[i];
        }
        else
        osum=osum+A[i];
    }

    printf("\nThe odd summ of the elements is %d\n",osum);
    printf("The even summ of the elements is %d\n",esum);


}

