#include<stdio.h>
void pascal(int);
int fact(int);
int combination(int,int);
int main()
{
    int n;
    printf("Enter size of PASCAL triangle: ");
    scanf("%d",&n);
    pascal(n);
    return 0;
}
int fact(int i)
{
    int s=1;
    while(i>0)
    {
        s=s*i;
        i--;
    }
    return s;
}
int combination(int i,int j)
{
    return fact(i)/(fact(i-j)*fact(j));
}
void pascal(int n)
{
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        k=0;
        for(j=0;j<=n;j++)
        {
            if(j>=n-i)
            {
            printf("%d ",combination(i,k));
            k++;
            }
            else
                printf(" ");
         }
     printf("\n");
    }
}
