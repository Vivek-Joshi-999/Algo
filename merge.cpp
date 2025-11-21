#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{

    int i = lb;
    int j = mid + 1;
    int k = lb;
    int temp[6];

    while (i <= mid && j <= ub)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= ub)
    {
        temp[k++] = arr[j++];
    }

    for (int i = lb; i <= ub; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int lb, int ub)
{

    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main()
{
    int n = 6;
    int arr[n] = {5, 4, 3, 2, 1, 0};

    mergeSort(arr, 0, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }
}