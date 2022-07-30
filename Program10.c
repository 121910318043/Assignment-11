#include<stdio.h>
//series program 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5.
int series();
int main()
{
    printf("%d",series());
    return 0;
}
int series()
{
    int s,i,se=5,val=0;
    while(se>0)
    {
        i=se,s=1;
        while(i>0)
        {
            s=s*i;
            i--;
        }
        val=val+(s/se);
        se--;
    }
    return val;
}
