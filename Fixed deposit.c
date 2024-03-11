//Program to calculate the final ammount given to customer from the bank
#include<stdio.h>
#include<stdlib.h>
main()
{
char bank;
int days,amt;
float famt;
printf("enter the type of bank I or H\n");
scanf("%c",&bank);
printf("enter the number of days \n");
scanf("%d",&days);
printf("Enter the amount to be deposited\n",&amt);
scanf("%d",&amt);
if (bank=='I' || bank=='i')

{
    printf("The selected bank is ICICI Bank\n");
    switch(days)
    {
        case 0 ... 30:printf("not valid days \n");
        exit(0);
        case 31 ... 60:famt=amt+(amt*0.65);
        break;
        case 61 ... 90:famt=amt+(amt*0.7);
        break;
        case 91 ... 180:famt=amt+(amt*0.75);
        break;
        case 181 ... 365:famt=amt+(amt*0.8);
        break;
        default:famt=amt+(amt*0.9);

    }

}

else if (bank=='H' || bank=='h')
{
    printf("The selected bank is HDFC Bank\n");
    switch(days)
    {
        case 0 ... 30:printf("not valid days \n");
        exit(0);
        case 31 ... 60:famt=amt+(amt*0.6);
        break;
        case 61 ... 90:famt=amt+(amt*0.65);
        break;
        case 91 ... 180:famt=amt+(amt*0.7);
        break;
        case 181 ... 365:famt=amt+(amt*0.8);
        break;
        default:famt=amt+(amt*0.85);

    }

}
if(famt>50000)
{
    famt=famt+(0.01*amt);
}
else
{
famt=famt;
}

printf("The amount to be given to the coustmer is %f\n",famt);
}
