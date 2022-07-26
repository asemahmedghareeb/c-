#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void code(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
void print(const map<string,int>&mp){


    for(const pair<string,int>&item:mp)
    cout<<item.first<<" "<<item.second<<" "<<endl;
}
int main(){
code();


map<string,int>mp;
mp["one"]=1;
mp["two"]=2;

print(mp);












}