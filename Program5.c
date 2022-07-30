#include<stdio.h>
//First n prime numbers
void FFP(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    FFP(n);
    return 0;
}
void FFP(int n1)
{
    int count,p=0,i;
    while(p<=n1)
    {
        p++,count=0;
        for(i=1;i<=n1;i++)
        {
            if(p%i==0)
            {
            count++;
            }
            if(count==3)
                break;
        }
        if(count==2)
        printf("%d ",p);
    }
}
