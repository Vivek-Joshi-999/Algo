#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &arr, int left, int right)
{
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
}

void BubbleSort(vector<int> &arr)
{
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j+1]){  
                swap(arr, j, j+1);
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 5, 3, 4};
    BubbleSort(arr);

    for(int x : arr){
        cout << x << " ";
    }
}
