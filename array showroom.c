#include<stdio.h>
void read(int A[100]);
void print(int A[100]);
void assend(int A[100]);
int key(int A[100]);
main()
{
    int A[100],k;
    read(A);

    assend(A);
    print(A);
        k=key(A);
     if(k==1)
        {
            printf("Key is found\n");
        }
        else
            {
                printf("key is not found");
        }


    exit(0);
}

void read(int A[100])
{
    int i;
    printf("Enter the values\n");
    for(i=0;i<4;i++)
        scanf("%d",&A[i]);
}
int key(int A[100])
{
int i,ele;
printf("\nenter the key to be searched\n");
scanf("%d",&ele);
for(i=0;i<4;i++)
{
    if(A[i]==ele)
        return 1;
}

}
void assend(int A[100])
{
    int i;
    for(i=0;i<4;i++)
    {
        if(A[i]>A[i+1])
            A[i+1]=A[i];
    }
}
void print(int A[100])
{
    int i;
    printf("the  elements are\n");
    for(i=0;i<4;i++)
        printf("%d\t",A[i]);
}
