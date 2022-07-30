#include<stdio.h>
int prime(int);
int main()
{
    int n,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    k=prime(n);
    if(k==1)
        printf("Not a Prime");
    else
        printf("Prime");
    return 0;
}
int prime(int n1)
{
    int i,flag=0;
    for(i=2;i<=n1/2;i++)
        if(n1%i==0)
        {
          flag=1;
          break;
        }
    return flag;
}
