#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void code(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(){
code();
//set
set<string>strset;
strset.insert("asem");
strset.insert("ahemd");

for(auto val:strset)cout<<val<<" ";


auto it =strset.count("asem");
auto a=strset.find("asem");


//multiset
multiset<string>mset;
mset.insert("asem");
mset.insert("asem");
mset.insert("asem");
cout<<mset.count("asem");
cout<<endl;


//unordered set

unordered_set<int>unset;
unset.insert(1);
unset.insert(2);
unset.insert(1);

for(auto val:unset)cout<<val<<" ";
cout<<endl;


//this is the best find funcution
auto x=unset.find(2);
cout<<*x<<endl;



//this is bad performance
auto y=find(unset.begin(),unset.end(),2);



int arr[]{1,2,3,4,5,6};
unordered_set<int>f(arr,arr+6);
for(auto val:f)cout<<val<<" ";
return 0;
}