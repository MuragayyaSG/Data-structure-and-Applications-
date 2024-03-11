
#include<stdio.h>
int gcdlcm(int a,int b);
main()
{
    int n1,n2,g,lcm;
    printf("Enter the two integer numbers :\n");
    scanf("%d%d",&n1,&n2);
g=gcdlcm(n1,n2);
lcm=(n1+n2)/g;

}
int gcdlcm(int a,int b)
{
    int gcd,rem;
    while(b>0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    gcd=b;
    printf("The GCD of %d and %d is %d\n",a,b,gcd);
    return gcd;

}
