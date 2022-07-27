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

int arr[7]={0,0,0,0,0,0,0};

//2 to 6  1
//4 to 5  3
arr[1]=1;
arr[7]-1;
arr[3]=3;
arr[6]=-3;
int prefix[7]{};
prefix[0]=arr[0];
for(int i=1;i<7;i++){
    prefix[i]=prefix[i-1]+arr[i];
}

for(int i=0;i<7;i++)cout<<prefix[i]<<" ";




cout<<prefix[5]-prefix[2]<<endl;

int pre_of_5[7]{};
for(int i=1;i<7;i++){
    if(arr[i]==5)
    pre_of_5[i]=pre_of_5[i-1]+1;
    else{
        pre_of_5[i]=pre_of_5[i-1];
    }
}

cout<<pre_of_5[6];

return 0;
}