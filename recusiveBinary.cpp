#include <iostream>
#include <vector>
using namespace std;

int binarSearch(vector<int> arr, int left, int right, int key)
{
    if (left > right)
    {
        return -1;
    }
    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    else if (key > arr[mid])
    {
        return binarSearch(arr, mid + 1, right, key);
    }

    else
    {
       return  binarSearch(arr, left, mid-1, key);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = arr.size();
    int result = binarSearch(arr, 0, size - 1, 10);

    if (result != -1)
    {
        cout << "\nKey found at Position:  " << result + 1;
    }
    else
    {
        cout << "\nkey not found!";
    }
}