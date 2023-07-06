#include <stdio.h>
#include <cs50.h>

int main(void)
{
int num1= get_int ("enter the first number");
int num2 = get_int("enter the second number");
int result = num1 + num2;
printf("%d\n", result);
}
