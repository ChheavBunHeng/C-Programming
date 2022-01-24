/*
    the method:
    N! = 1*2*3*4*5*.....%n;
    by multipli odd with odd number and even with even number
    Ex: 5! = 1*2*3*4*5
    even = 2*4
    odd = 3*5
    sum = 120
*/

#include<stdio.h>
int main()
{
    int Limiter;
    int odd = 1,even = 1;
    int sum;
    printf("Input the n!:");
    scanf("%d",&Limiter);

    for(int i = 1; i <= Limiter; i ++)
    {
        if(i & 2)
        {
            even = even * i;
        }
        else
        {
            odd = odd * i;
        }
        sum = odd * even;
    }

    printf("%d",sum);


}