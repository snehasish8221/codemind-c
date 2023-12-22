#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    int i;
    for(i=a;i<=b;i++)
    {
        if(i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}