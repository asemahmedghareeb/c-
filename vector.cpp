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

vector<int>vec{1,2,3,4,5};


cout<<vec[0];
cout<<endl;
vector<int>vi(10,11);

//printing 1d vector
for(auto val:vi)cout<<val<<" ";

  cout<<endl;


vector<int>row(5,1);
vector<vector<int >>vec_2d(7,row);

//printing 2d vector
for(auto row:vec_2d){
    for(auto col:row){
        cout<<col<<" ";
    }
    cout<<endl;
}

//number of rows
cout<<vec_2d.size()<<endl;
//number of columns
cout<<vec_2d[0].size()<<endl;

vec_2d[0].push_back(22);
vec_2d[0][0]=33;
vec_2d[3].erase(vec_2d[2].begin());

for(auto row:vec_2d){
    for(auto col:row){
        cout<<col<<" ";
    }
    cout<<endl;
}

//3d vector
vector<vector < vector<int> > >a;



return 0;
}