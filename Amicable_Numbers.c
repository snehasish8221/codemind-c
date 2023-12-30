#include <stdio.h>
int sumOfDivisors(int n)
{
    int sum = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}
int areAmicable(int num1, int num2)
{
    return (sumOfDivisors(num1) == num2 && sumOfDivisors(num2) == num1);
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1,&num2);
    if (areAmicable(num1, num2))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return 0;
}
