#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int a = 0, b = 1;
    int sum = 1;
    for (int i = 1; sum <= n; i++)
    {
        if (sum == n)
        {
            printf("True
");
            return 0;
        }
        sum = a+b;
        a = b;
        b = sum;
    }
    printf("False
");
    return 0;
}
