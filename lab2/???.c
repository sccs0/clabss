#include<stdio.h>
int main()
{
    int count=0;
    int m=0;
    int n=0;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%2;
        n=n/2;
        if(m==1)
        count++;
    }
    printf("%d\n",count);
    return 0;
}