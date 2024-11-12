#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int arr[] , int size , int key){

    int start = 0;
    int end = size-1;

    while (start <= end)
    {
        int mid = (start + end)/2;

        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
    }
}

int main(){
    int arr[6] = {3,4,5,6,7,8};
    int key = 8;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = binary_search(arr , size , key);

    cout << ans;


}
