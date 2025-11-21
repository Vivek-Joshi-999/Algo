#include <iostream>
#include<vector>
using namespace std;

int binarSearch(vector<int>arr, int size, int key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if(key>arr[mid]){
            left=mid+1;
        }

        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int size=arr.size();
  int result= binarSearch(arr,size,5);

  if(result!=-1){
    cout<<"\nKey found at Position:  "<<result+1;
  }
else{
    cout<<"\nkey not found!";
}

}