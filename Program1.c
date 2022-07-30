#include<stdio.h>
int LCM(int,int);
int main()
{
    int a,b,k;
    printf("Enter a and b value: ");
    scanf("%d%d",&a,&b);
    k=LCM(a,b);
    printf("%d",k);
    return 0;
}
int LCM(int a,int b)
{
    int i,L;
    for(i=1;i<=a*b;i++)
        if(i%a==0 && i%b==0)
        {
            L=i;
            break;
        }
    return L;
}
