#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    int target = 12;

    vector<int> array;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array.push_back(arr[i][j]);
        }
    }

    /// binary search in vector
    int start = 0;
    int end = array.size();
    int mid = start + (end-start)/2 ;
    int yes= 0;

    while (start <= end)
    {
        mid = start + (end-start)/2;

        if (mid == target)
        {
            yes = 1;
            break;
        }
        else if (mid < target){
            start += 1;
        }
        else{
            end-=1;
        }
    }

    if (yes == 1) cout << "target found " <<endl;
    else cout << " target nnot found " << endl;
     

}