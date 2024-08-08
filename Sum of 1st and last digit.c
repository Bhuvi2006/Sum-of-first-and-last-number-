
//Sum of a first and last digit no.
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,sum=0;//1234
    printf("Enter a four digit number: ");
    scanf("%d",&a);
    b=a/10;//123
    c=a%10;//4
    d=b/10;//12
    e=b%10;//3
    f=d/10;//1
    g=d%10;//2
    sum=f+c;
    printf(" Sum = %d ",sum);
}
