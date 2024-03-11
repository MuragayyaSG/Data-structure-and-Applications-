#include<stdio.h>
main()
{
    float temp,cel;
    printf("enter the temperature in Farenheit\n");
    scanf("%f",&temp);
    cel=((5.0/9.0)*(temp-32));
    if(cel<0)
    {
      printf("the temperature is %f\n",cel);

        printf("freezing\n");

    }
    else if(cel>=0&&cel<10)
    {
       printf("the temperature is %f\n",cel);
        printf("very cold");

    }
    else if(cel>=10&&cel<20)
    {
printf("the temperature is %f\n",cel);

        printf("cold");

    }
    else if(cel>=20&&cel<30)
    {

      printf("the temperature is %f\n",cel);

        printf("normal");

    }
    else if(cel>=30&&cel<40)
    {
      printf("the temperature is %f\n",cel);

        printf("Hot");

    }
    else
        {
            printf("the temperature is %f\n",cel);
        printf("Very hot\n");
    }

}
