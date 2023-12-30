#include <stdio.h>
int main()
{
    int cd,ld;
    scanf("%d", &cd);
    int bd = 0;
    while (cd != 0)
    {
        ld= cd % 10;
        if (bd < ld)
        {
            bd = ld;
        }
        cd = cd / 10;
    }
    printf("%d",bd);
    return 0;
}
