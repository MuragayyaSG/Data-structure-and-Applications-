//Program to find weather the given number is special number 

#include<stdio.h>
#include<stdlib.h>
int special(int n);
main()
{
int n,s;
scanf("%d",&n);
if(n>0 && n<pow(10,9))
{
    s=special(n);
if(s==1)
    printf("Yes");
else
    printf("no");
}
else
printf("Invalid");


}
int special(int n)
{
    int i,ld,f=1,x=n,sum=0;
    while(n<0)
    {
        ld=n%10;
        for(i=1;i<ld;i++)
        f=f*i;
        sum=sum+f;
        printf("%d",sum);
        n=n/10;
    }
if(x==sum);
return 1;

}
