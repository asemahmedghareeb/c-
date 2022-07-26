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

    tuple<int ,string ,char> t;
    t=make_tuple(3 ,"asem",'a');
    cout<<get<0>(t)<<endl;
    get<0>(t)=33;
    cout<<get<0>(t)<<endl;
    //you can comparae between to tuples
    cout<<(t<t)<<endl;
    int n;
    string str;
    char s;
    //you can break int variables
    tie(n , str , s)=t;

    //you can concatinate 2 tuples
    auto t2 =tuple_cat(t,make_tuple(10.6));
  


return 0;
} 




