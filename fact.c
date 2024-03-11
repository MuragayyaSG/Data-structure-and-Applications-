#include<stdio.h>
int read(int n);
main()
{
    int num,count;
    printf("entre a number of persons \n");
    scanf("%d",&num);
    count=read(num);
    printf("The number of people between thw age of 50 to 60 is %d",count);
}
int read(int n)
{
    int c=0,age;
    while (n>0)
    {
        printf("enter the age of the person\n");
        scanf("%d",&age);
        if(age>=50 && age<=60)
            c++;
            n--;
    }
    return c;
}
