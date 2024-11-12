#include<iostream>
#include<vector>
using namespace std;

int main(){ 

    vector<int> v;
    cout << "capacity - " << v.capacity() <<endl;

    v.push_back(1);
    cout << "capacity - " << v.capacity() <<endl;

    v.push_back(2);
    cout << "capacity - " << v.capacity() <<endl;

    v.push_back(3);
    cout << "capacity - " << v.capacity() <<endl;
    cout << "size - " << v.size() <<endl;

    vector<int> a(5,1); // all the elemensts are initialised by 1 and vector size id 5

    for (int i:a)
    {
        cout<<i<<" ";
    }
}