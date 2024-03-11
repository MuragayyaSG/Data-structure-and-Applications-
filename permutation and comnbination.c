
/* Permutation and Combination using the
concept of code or function reusability;*/
#include<stdio.h>
#include<stdlib.h>
int fact(int N);
main()
{
    int n,r,npr,ncr;
    printf("Entre the two numbers \n");
    scanf("%d %d",&n,&r);
    npr=fact(n)/fact(n-r);
    ncr=npr/fact(r);
    printf("nPr = %d and nCr = %d",npr,ncr);

}

int fact(int N)
{
    int i,f=1;

    for(i=1;i<=N;i++)
    {
        f=f*i;
    }

    return f;
}
