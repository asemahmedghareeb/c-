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

pair<int,string>p=make_pair(10,"asem");
cout<<p.first<<" "<<p.second<<endl;


pair<int,pair<int,string> >p2=make_pair(4,p);
pair<int,pair<int,string> >p3=make_pair(4,make_pair(2,"two"));

if(p2>p3)cout<<"yes";
else cout<<"no";






return 0;
}