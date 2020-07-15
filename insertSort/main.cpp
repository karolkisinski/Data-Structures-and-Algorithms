#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

void insertSort(int* arr, int n)
{
    int i = n - 2, j, temp;
    while (i >= 0)
    {
        j = i;
        temp = arr[j];
        while(temp > arr[j+1] && j <= n - 1)
        {
            arr[j] = arr[j+1];
            j++;
        }
        arr[j] = temp;
        i--;
    }
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
    insertSort(arr, 100);
    displayArray(arr,100);
    free(tab);
}
