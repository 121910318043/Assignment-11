#include<stdio.h>
//function to print first N terms of Fibonacci series
void fibonacci(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int s=0,i=0,j=1;
    while(i<n)
    {
        s=i+j;
        i=j;
        j=s;
        printf("%d ",i);
    }
}
