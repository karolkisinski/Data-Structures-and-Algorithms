#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

void quickSort(int* arr, int a, int b)
{
    int center, leftLimit, rightLimit, i, pivot, limit;
    leftLimit = a;
    rightLimit = b-1;
    center = (leftLimit + rightLimit)/2;
    pivot = arr[center];
    arr[center] = arr[rightLimit];
    limit = leftLimit;
    i = leftLimit;

    while(i<rightLimit)
    {
        if(arr[i] < pivot)
        {
            swap(arr[limit], arr[i]);
            limit++;
        }
    i++;
    }
    arr[rightLimit] = arr[limit];
    arr[limit] = pivot;

    if(leftLimit < limit - 1)
    {
        quickSort(arr, a, limit-1);
    }
    if(limit+1 < rightLimit)
    {
        quickSort(arr, limit+1, rightLimit)
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
    quickSort(arr, 0, 100);
    displayArray(arr,100);
    free(tab);
}
