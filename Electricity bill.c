//Program to calculate the electricity bill
#include<stdio.h>
#include<stdlib.h>
main()
{
float units,bill;
printf("Enter the units used\n");
scanf("%f",&units);
if(units<=0)
    printf("invalid input\n");
else if(units>0&&units<=50)
{
  bill=units*3.5;
}
else if(units>50&&units<=150)
{
    bill=(50*3.5)+(units-50)*4.0;
}
else if(units>150&&units<=250)
{
    bill=(50*3.5)+(100*4.0)+(units-150)*5.20;
}
else if(units>250)
{
bill=(50*3.5)+(100*4.0)+(150*5.20)+(units-250)*6.5;
}
printf("the bill amount is %f",bill);

}


