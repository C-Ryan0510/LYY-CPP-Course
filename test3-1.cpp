#include <iostream>
using namespace std;

void Swap(int *, int *);
void list(int[],int);
const int MaxSIZE = 10;

int main(void)
{
    int number[MaxSIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    for (int i = 0; i < MaxSIZE; i++)
        Swap(&number[i], &number[MaxSIZE - 1 - i]);
    
    return 0;
}
void Swap(int *a, int *b)
{
   *a = *a + *b;
   *b = *a - *b;
   *a = *a - *b;
}
void list(int[] a, int size){
    for(int i =0;i<size;i++)
        cout<<a[i]<<endl;
}