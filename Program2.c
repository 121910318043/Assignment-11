#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b,k;
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);
    k=HCF(a,b);
    printf("%d",k);
    return 0;
}
int HCF(int a,int b)
{
    int H,i,small;
    small=a<b?a:b;
    for(i=1;i<=small;i++)
    {
        if(a%i==0 && b%i==0)
          H=i;
    }
        return H;
}
