//C program to find an element in an array with binary search technique

#include<stdio.h>
#include<stdlib.h>
int binary(int a[100],int n,int key);
void read(int a[100],int n);
main()
{
int N,a[100],k,loc;
printf("enter the number of elements\n");
scanf("%d",&N);
read(a,N);
printf("Enter the element to be searched\n");
scanf("%d",&k);
loc=binary(a,N,k);
printf("The element is found at loc = %d",loc);

}
int binary(int a[100],int n,int key)
{
    int low=0,high=n-1,mid,loc=-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            loc=mid;
            return loc;
            }
        else if(key<a[mid])
            high=mid;
        else
            low=mid;
    }

}
void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

}
