#include <iostream>
#include <vector>
using namespace std;

void Selection(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    vector<int> arr = {1, 2, -1, 4, 0, 3};

    Selection(arr);

    for (int x : arr)
    {
        cout << " " << x;
    }
}
