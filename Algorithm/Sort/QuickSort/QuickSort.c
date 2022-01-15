#include<stdio.h>
#include<string.h>
//Global vairable
int TimeOFLoop, Limter,Array[100],Sorter;
int i, j,pivot;
int ArraySize;

void Input();
void Output();
void QuickSort();
void Swaper();
int main()
{
    Input();
    Output();
}
void Input()
{
    printf("Input the limiter");
    scanf("%d",&Limter);
    for(TimeOFLoop = 0; TimeOFLoop < Limter; TimeOFLoop++)
    {
        scanf("%d",&Array[TimeOFLoop]);
    }
    QuickSort(Array,0,Limter-1);
    QuickSort(Array,Limter+1,high);
}
void QuickSort(int *Array,int low, int high)
{
    if(low < high)
    {
        TimeOFLoop = low;
        Limter = high;
        pivot = low;
        while(TimeOFLoop < Limter)
        {
            while(Array[TimeOFLoop] <= Array[pivot] && TimeOFLoop <= high)
            {
                TimeOFLoop++;
            }
            while(Array[Limter] > Array[pivot] && Limter >= low)    
            {
                Limter--;
            }
            if(TimeOFLoop < Limter)
            {
                Swaper(Array[TimeOFLoop],Array[Limter]);
            }

            
        }
    }
}
void Output()
{
    printf("sorted\n");
    for(TimeOFLoop = 0; TimeOFLoop < Limter; TimeOFLoop++)
    {
        printf("\n%d\n",Array[TimeOFLoop]);
    }
}
void Swaper(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}