#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int update(int *p){
  *p += 1;
}

int main()
{
    /*
    int num = 7;
    int *ptr = &num;

    cout << "address of num : " << &num <<endl;
    cout << "value in ptr : " << ptr << endl;
    cout << "value at the address stored in ptr : " << *ptr << endl;

    double num1 = 2.4;
    double *ptr1 = &num1;

    cout << "address of num : " << &num1 <<endl;
    cout << "value in ptr : " << ptr1 << endl;
    cout << "value at the address stored in ptr : " << *ptr1 << endl;

    cout << "size of integer : " << sizeof(num) << endl;
    cout << " size of pointer : " << sizeof(ptr) << endl;
    cout << " size of double : " << sizeof(num1) << endl;
    */

    /*
    int num = 5;
    int *p = &num ;
    cout<< "number before = " << num << endl;

    *p /= 2;

    cout<< "number after = " << num << endl;
     */

    // coping a pointer

    /*
       int num = 5;
       int *p = &num ;

       int *q = &p;
       cout <<"original pointer :"<< *p << endl;
       cout<< "copied pointer : " << *q << endl;
    */

    // best example to understand pointer in array
    /*
      int numbers[5];
      int * p;
      p = numbers;
      *p = 10;
      p = &numbers[2];
      *p = 20;
      p--;
      *p = 30;
      p = numbers + 3;
      *p = 40;
      p = numbers;
      *(p+4) = 50;
      for (int n=0; n<5; n++) {
         cout << numbers[n] << ",";
      }
    */
    /*char st[] = "ABCD";
    for (int i = 0; i < strlen(st) ; i++)
    {
        cout << st[i] << *(st) + i << *(i + st) << i[st] << endl;
    }
    */

  // int arr[10] = {1,2,3};
  // int *p = &arr[0];
  // cout << "p before : " << p << endl;
  // p += 1;
  // cout << "p after  : "<< p << endl;

  /*
  int arr[10] = {1,2,3,4,5};
  int *a = &arr[0];

  char ch[6] = "abcde";
  char *c = &ch[0];

  cout << c << endl ;
  cout << a << endl ;
  */

  int num = 5;
  int *p = &num;

  cout << p << endl;
  cout << *p << endl;
  
  update(p);

  cout << p << endl;
  cout << *p << endl;
  
 
}