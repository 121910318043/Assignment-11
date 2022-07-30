#include<stdio.h>
//Prime numbers between two given number
void primenum(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    primenum(a,b);
    return 0;
}
void primenum(int s,int l)
{
    int i,count;
    s=s+1;
    while(s<l)
    {
        count=0;
        for(i=1;i<=s;i++)
        {
            if(s%i==0)
                count++;
            if(count==3)
                break;
        }
        if(count==2)
            printf("%d ",s);
        s++;
    }
}
