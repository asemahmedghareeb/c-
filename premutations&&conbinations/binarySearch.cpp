#include <iostream>
using namespace std;
int binarySearch(int arr[100], int num, int low, int high, int mid ){

    // base case
    if (num == arr[mid])
        return mid;
    if(high<=low)
        return  - 1;
    if (num > arr[mid])
        low = mid;
    if (num < arr[mid])
        high = mid;
    mid = (low + high) / 2;
    return binarySearch(arr, num, low, high, mid);
}
int main()
{

    int arr[]{1, 2, 3, 4,5};
    int low = 0;
    int high = 5;
    int mid = (low + high) / 2;
    cout << binarySearch(arr, 5, low, high,mid) << endl;
    return 0;
}
