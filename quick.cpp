#include <iostream>
using namespace std;

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[(lb + ub) / 2];
    int i = lb - 1;
    int j = ub + 1;

    while (true)
    {
       
        do {
            i++;
        } while (arr[i] < pivot);

      
        do {
            j--;
        } while (arr[j] > pivot);

       
        if (i >= j)
            return j;

        
        swap(arr[i], arr[j]);
    }
}

void quick(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int p = partition(arr, lb, ub);
        quick(arr, lb, p);
        quick(arr, p + 1, ub);
    }
}

int main()
{
    int arr[] = {1, 2, 993, 6, 5, 4, 5, 8, 54};
    int size = sizeof(arr) / sizeof(arr[0]);

    quick(arr, 0, size - 1);

    for (int x : arr)
        cout << x << " ";
}
