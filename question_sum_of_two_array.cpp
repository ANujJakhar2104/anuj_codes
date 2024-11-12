#include<iostream>
#include<vector>
using namespace std;

int array_to_num(int arr[] , int n){
    int num=0;
    for (int i = 0; i < n; i++)
    {
        num = num *10 + arr[i];
    }
    return num;
}

vector<int> num_to_array(int sum){
    vector<int> arr;
    while (sum > 0) {
        arr.insert(arr.begin(), sum % 10);
        sum /= 10;
    }
    return arr;
}
int main(){
    int arr[3] = {4,5,1};
    int brr[3] = {3,4,5};
    int n = sizeof(arr)/sizeof(int);

    int sum = array_to_num(arr , n) + array_to_num(brr , n);

    vector<int> ans = num_to_array(sum);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    
}