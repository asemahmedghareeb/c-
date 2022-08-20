#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

struct item{
    ll weight, val;
};

bool preceed(item x, item y)
{
    return (x.val > y.val);
}


int main(){
    ll n, w;
    cin>> n >> w;
    ll weight[1000];
    ll value[10001];
    for (ll i = 0; i < n;i++)
        cin >> weight[i] >> value[i];





    item a[1000];
    for (ll i = 0; i < n;i++){
        a[i].weight = weight[i];
        a[i].val = value[i];
    }

    sort(a, a + n, preceed);

    ll totalVal = 0;
    ll current_weight = 0;
    for (ll i = 0; i < n; i++)
    {
        ll grams =a[i].weight;
        if((current_weight+grams)>w)continue;
        current_weight+= a[i].weight;

        totalVal += a[i].val;

    }
    cout << totalVal << endl;
    return 0;
}