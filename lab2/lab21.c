#include<stdio.h>
int main()
{
    unsigned int m,a;
    m=1;
    a=0-1;
    unsigned int number=0;
    while(m !=0) {
        m=m<<1;
        number=number+1;
    }
    printf("%d\n%u\n",number,a);
    return 0;
}