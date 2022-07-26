#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void code(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(){code();

//for vector
vector<int>arr{2,3,3,5,35};
cout<<binary_search(arr.begin(),arr.end(),1)<<endl;

//for array
int arr2[]{1,2,3,4,5};
cout<<binary_search(arr2,arr2+5,77);



    return 0;
}