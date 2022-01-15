#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
//Global Vairable
int Array[SIZE],Looper, Limiter,Target,Option;
void Input();
void Output();
void Delete();
int main()
{
    Input();
    Output();
}
void Input()
{
    printf("Input Limiter");
    scanf("%d",&Limiter);
    for(Looper = 0; Looper < Limiter; Looper++)
    {
    printf("Input Num %d",Looper + 1);
    scanf("%d",&Array[Looper]);
    }
}
void Output()
{
    for(Looper = 0; Looper < Limiter; Looper++)
    {
        printf("%d",Array[Looper]);
    }
    printf("1.Delete\n2.Exit");
    scanf("%d\n",&Option);
    if(Option == 1)
    {
        Delete();
    }
    else
    {
        exit(0);
    }
}
void Delete()
{
    printf("Input Delete number\n");
    scanf("%d",&Target);
    for(Looper = Target; Looper < Limiter - 1;Looper++)
    {
        Array[Looper] = Array[Looper+ 1];

    }
    Limiter -=1;
    for(Looper = 0; Looper < Limiter; Looper++)
    {
        printf("%d",Array[Looper]);
    }
}e