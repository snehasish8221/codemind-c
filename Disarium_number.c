#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    int temp = num;
    int i = 0;
    while (num != 0)
    {
        i++;
        num = num / 10;
    }
    num = temp;
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + pow(digit, i);
        num = num / 10;
        i--;
    }

    if (sum == temp)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    return 0;
}
