#include<iostream>
using namespace std;

int swap(int &a , int &b){
    int temp=0;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cin >> n;

    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int j = 0;
        
    for (int i = n + 1, j = size - 1; i < j; i++, j--) {
        if (i < size && j >= 0) {
            swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
}