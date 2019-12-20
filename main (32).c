/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    long long int n,r,sum=0;
    printf("enter a number");
    scanf("%d",n);
    a:
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum>9)
    {
        n=sum;
        sum=0;
        goto a;
    }
    printf("%ld",sum);
}
    }
    }