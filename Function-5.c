// Sum of 2 numbers

#include<stdio.h>

int sum(int n1, int n2)
{
    return n1 + n2 ;
}
int main()
{
    int num1, num2;

    printf("Enter num1 & num2 : ");
    scanf("%d %d", &num1, &num2);

    printf("The sum is : %d\n", sum(num1, num2));

    return 0;
}

