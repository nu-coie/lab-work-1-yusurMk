#include <stdio.h>
#include <cs50.h>


int main(void)
{
// Accept Input From user (char), where (a) stands for "Addition", (m) for "Multiplications," and (d) for "Division,"
 int num1= get_int("enter the first number");
 int num2=get_int("enter the second number");
 char method=get_char("choose the method");
 method=("Addition,Multiplications,Division");
if(method==A || method==a )
{
    printf("%i\n", num1+num2);
}
{
    if(method==M || method==m)
    printf("%i\n", num1*num2");
}
{
    if(method==D || methode==d)
printf("%i\n",num1%num2");
}
}
