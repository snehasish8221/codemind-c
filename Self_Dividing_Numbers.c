#include<stdio.h>
int main()
{
    int low,high,i;
    scanf("%d %d",&low,&high);
    for(i=low;i<=high;i++)
    {
        int n=i;
        int c=0;
        int temp=n;
        while(n)
        {
            int reverse=n%10;
            if(reverse==0)
            {
                c=1;
                break;
            }
            else if(temp%reverse!=0)
            {
                c=1;
                break;
            }
            n=n/10;
        }
        if(c==0)
        {
            printf("%d ",i);
        }
    }
return 0;
}