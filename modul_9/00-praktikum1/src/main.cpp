#include <iostream>
#include <stdio.h>
using namespace std;

void f1 (int arr_b[], int n)
{
    int j;
    for (j = 0; j < n; j++)
    {
        printf("Arr_b[%d] = %d\n", j, arr_b[j]);
    }
    
}
int main()
{
    int arr_a[5] = {1, 3, 5, 9}, i;
    for (i = 0; i < 5; i++)
    {
        
        printf("Arr_a[%d] = %d\n", i, arr_a[i]);
    }
    f1(arr_a, 3);
    return 0;
}