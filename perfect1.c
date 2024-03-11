#include<stdio.h>
void perfect(int l,int k);
main()
{

int l,k;
scanf("%d%d",&l,&k);
perfect(l,k);

}
void perfect(int l,int k)
{
int n;
for(n=l;n<=k;n++)
 {
     int i=1,sum=0;
    while(i<=n/2)
    {
        if(n%i==0)
        {
        sum=sum+i;
        }
        i++;
    }
    if(sum==n)
        printf("%d\n",n);


}
}
