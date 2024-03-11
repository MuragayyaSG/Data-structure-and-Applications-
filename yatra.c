#include<stdio.h>
main()
{
    char yatra,pack;
     float n,amt;

    printf("Enter the type of yatra\n");
    scanf("%c",&yatra);
    //getchar();
    printf("Enter the type of package\n");
    scanf("%*c%c",&pack);
    printf("Enter Number of persons travelling\n");
    scanf("%f",&n);

    if(yatra=='K')
    {
        if(pack=='P')
        {
            printf(" KArnataka special premium\n");
            amt=n*10000;
            printf(" total Amount is %f\n",amt);


            printf(" Amount per coustamer is Rs.10000\n");

        }
       else if(pack=='C')
        {
            printf(" KArnataka special classic\n");
            amt=n*8000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.8000\n");

        }
        else if(pack=='B')
        {
            printf(" KArnataka special Basic\n");
            amt=n*5000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.5000\n");

        }
    }

    else if(yatra=='M')
    {
        if(pack=='P')
        {
            printf(" Manasa sarovara premium\n");
            amt=n*20000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.20000\n");

        }
       else if(pack=='C')
        {
            printf(" Manasa sarovara classic\n");
            amt=n*15000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.15000\n");

        }
        else if(pack=='B')
        {
            printf(" Manasa sarovara Basic\n");
            amt=n*10000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.10000\n");

        }
    }

    else if(yatra=='V')
    {
        if(pack=='P')
        {
            printf(" Vaishnodevi Economy premium\n");
            amt=n*20000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.20000\n");

        }
       else if(pack=='C')
        {
            printf(" Vaishnodevi Economy classic\n");
            amt=n*15000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.15000\n");

        }
        else if(pack=='B')
        {
            printf(" Vaishnodevi Economy Basic\n");
            amt=n*10000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.10000\n");

        }
    }

        else if(yatra=='G')
    {
        if(pack=='P')
        {
            printf(" Gujarat Rann Utsav premium\n");
            amt=n*25000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.25000\n");

        }
       else if(pack=='C')
        {
            printf(" Gujarat Rann Utsav classic\n");
            amt=n*10000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.10000\n");

        }
        else if(pack=='B')
        {
            printf(" Gujarat Rann Utsav Basic\n");
            amt=n*7000;
            printf(" total Amount is %f\n",amt);

            printf(" Amount per coustamer is Rs.7000\n");

        }
    }
else {
    printf("invalid yatra\n");
    exit(0);
}

}
