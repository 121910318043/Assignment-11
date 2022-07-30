#include<stdio.h>
int nextprime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",nextprime(n));
    return 0;
}
int nextprime(int n)
{
    int count=0,i;
    while(count!=2)
    {
        n=n+1;
        count=0;
        for(i=1;i<=n;i++)
            if(n%i==0)
            {
               count++;
               if(count==3)
                break;
            }
    }
    return i-1;
}
