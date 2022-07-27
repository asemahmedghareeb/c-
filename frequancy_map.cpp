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
int arr[]{1,2,2,2,4,5,6,6,7,7};
map<int,int>m;
for(int i=0;i<10;i++){
if(m[arr[i]])m[arr[i]]++;
else m[arr[i]]=1;    
}
cout<<m[6];
}
