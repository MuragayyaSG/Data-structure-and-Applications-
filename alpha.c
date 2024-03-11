//c program to print N number of alphabets
void print(int n);
main()
{
int N;
printf("Enter the number of alphabets u wanna print\n");
scanf("%d",&N);
print(N);

}
void print(int n)
{
    char c,ch;
    int i=1;
    printf("Enter the case of letters u wanna print , U for upper case and L for lower case\n");
    scanf("%c",&c);
    if(c=='U')
{

    while(i<=n)
    {
    printf("%c",ch);
    printf("\n");
    ch++;
    i++;
    }
        }
    else
    {

    while(i<=n)
    {
    printf("%c",ch);
    printf("\n");
    ch++;
    i++;
    }

}
