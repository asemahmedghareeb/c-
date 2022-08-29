#include <bits/stdc++.h>
using namespace std;
int main(){
    // int val = 3;
    // cout << &val << endl;
    // int *ptr = &val;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    // *ptr = 100;
    // cout << *ptr << endl;
    // cout << val << endl;

    // int x;
    // float y=5.0;
    // void *ptr;
    // ptr = &x;
    // ptr = &y;
    // float *f = static_cast<float*>(ptr);
    // cout << *f << endl;

    // pointers and arrays/////////////////////
    // int arr[7] = {11, 22, 33,44,55,66,77};
    // cout << *(arr + 1) << endl;
    // for (int i = 0; i < 7; i++){
    //     cout << *(arr + i) << " ";
    // }

    // int arr[7] = {11, 22, 33,44,55,66,77};
    // int *ptr;
    // ptr = arr;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << *(ptr++) << " ";
    // }


    // dynamic array
    int n;
    int *arr = new int[n];

    delete[] arr;
    return 0;
}
