#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, m, x;
    cin >> n >> m;
    ll arr[m]{};

    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        if (x <= m)
            arr[x - 1]++;
    }
    for (ll i = 0; i < m; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}