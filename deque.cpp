// deque is doubly ended queue and we can insert and delete elements at front and back

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for (int i:d)
    {
        cout<< i<<" ";
    }
    cout<<endl;
    
    d.pop_front();
    for (int i:d)
    {
        cout<< i<<" ";
    }
    
    cout<<endl;

    cout<<"first elements " << d.at(1);

    cout<< d.back()<<endl;
    cout<< d.front()<<endl;

    cout << "before erase" <<d.size()<<endl;
    // d.erase(d.begin() , d.begin()+1);

    cout << "after erase" << d.size() << endl;
}