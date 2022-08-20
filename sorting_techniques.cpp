#include<bits/stdc++.h>
typedef long long ll;
using namespace std;



// bool preceed_abs(int x,int y){
    
//     return abs(x)<abs(y);
// }


struct item
{
    int weight, val;

};

bool preceed(item x,item y){
    return (x.val > y.val);
}
int main(){

    int w[] = {6, 10, 3, 5, 7, 3};
    int v[] = {6, 2, 1, 8,3, 5};
    int n = sizeof(w) / sizeof(w[0]);
    item a[n];

    for(int i=0;i<n;i++){
        a[i].val = v[i];
        a[i].weight = w[i];
    }
    sort(a, a + n, preceed);

    int remweight = 20;
    int totalVal = 0;

    for (int i = 0; i < n;i++){
        int grams = min(a[i].weight, remweight);
        totalVal += grams * a[i].val;
        remweight -= grams;
    }
    cout << totalVal;
    return 0;


    // int arr[] = {2, 7, -3, 10, -2, 5, -99};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr,arr + n,preceed_abs);

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

}