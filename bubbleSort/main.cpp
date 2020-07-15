#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

void bubbleSort(int* arr, int n)
{
    do
    {
        for(int i = 0; i < n-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
        n -= 1;
    }while(n>1);
}
void displayArray(int* arr, int r)
{
    for(int i=0; i<r; i++)
    {

        cout<< arr[i] << endl;
    }
}
int main()
{
    srand (time(NULL));
    int arr[100];
    for(int i = 0; i<=100; i++)
    {
        arr[i] = rand() % 300 + 1;
    }
    bubbleSort(arr, 100);
    displayArray(arr,100);
    free(arr)
}
