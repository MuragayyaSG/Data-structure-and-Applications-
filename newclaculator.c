#include<stdio.h>
void main()
{
    int op1, op2;
    char ch;
    float ans;

    printf("Simple calculator \n");
    printf("Enter the operands \n");
    scanf("%d%d",&op1,&op2);
    getchar();
    printf("Enter the operator\n");
    scanf("%c", &ch);

    switch(ch)
    {
        case '+' : ans = op1 + op2;
            break;
        case '-' : ans = op1 - op2;
            break;
        case '*' : ans = op1 * op2;
            break;
        case '/' : ans = op1 / op2;
            break;
        case '%' : ans = op1 % op2;
            break;
        default  : printf("Invalid operation\n");
    }
    printf("The operation is %d %c %d \n", op1, ch, op2);
    printf("The answer is %f\n", ans);
}










