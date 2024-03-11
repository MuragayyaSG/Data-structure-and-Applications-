
#include<stdio.h>
#include<stdlib.h>
float reim(float od1,float od2,);
main()
{
float odm1,odm2,re;
printf("MILEAGE REIMBURSHMENT CALUCULATOR\n");
printf("Enter the begining odometer redaing\n");
scanf("%f",&odm1);
printf("Enter the ending odometer redaing\n");
scanf("%f",&odm2);

re=reim(odm1,odm2,);
printf("your Reimburshment id Rs %f",re);
}
float reim(float od1,float od2,)
{
    float rm;
    diff=odm2-odm1;
    printf("You travelled %f kms for 18rs per KM\n",diff);
    rm=dif*18;
    return rm;
}
