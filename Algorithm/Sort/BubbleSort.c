#include<string.h>
#include<stdio.h>
#include"Swaper.h"
//Global Variable
int TimeOfLoop, Limiter,Sorter,Array[100];
void Input();
void Output();
int main(void)
{

    Input();
    Output();
}
void Input()
{
    printf("Input The Limter:");
    scanf("%d",&Limiter);
    for(TimeOfLoop = 0; TimeOfLoop < Limiter; TimeOfLoop++)
    {
        printf("Input Number %d",(TimeOfLoop + 1));
        scanf("%d",&Array[TimeOfLoop]);

    }
    for(TimeOfLoop = 0; TimeOfLoop < Limiter-1; TimeOfLoop++)
    {
        for(Sorter = 0; Sorter < Limiter - TimeOfLoop - 1; Sorter++)
        {
            if(Array[Sorter] > Array[Sorter+1])
            {
                // Swaper(Array[Sorter],Array[Sorter+1]);
                //Swaper.h is my custom header file
                int temp;
                temp = Array[Sorter];
                Array[Sorter] = Array[Sorter +1];
                Array[Sorter+1] = temp;
                
            }
        }
    }
}
void Output()
{
    for(TimeOfLoop = 0; TimeOfLoop < Limiter; TimeOfLoop++)
    {
        printf("\n%d\n",Array[TimeOfLoop]);
    }
}
