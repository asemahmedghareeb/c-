#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

// int fib(int x)
// {
//     if ((x <=1))return (x);  
//     return (fib(x - 1) + fib(x - 2));
// }
// long long  fac(long long n){
//     if (n==0)
//         return 1;
//     return fac(n - 1) * n;
// }

// ll sum(ll arr[1000],ll size){
//     if(size<0)return 0;
//     return sum(arr, size - 1)+arr[size];
// }

// ll sum_last_m(ll arr[1000],ll size,ll m){
//     if(m==0)return 0;

//     return sum_last_m(arr, size - 1, m - 1) + arr[size];
// }

// void print_even_indices( int arr[1000],int size){
//     if(size <0)
//         return;
//     if(size%2==0)cout << arr[size] << " ";
//     print_even_indices(arr, size - 1);
// }

// void loop(ll arr[1000000], ll size, ll t=-1000000000){
//     if(size<0){
//         cout << t << endl;
//         return;
//     }
//     if(arr[size]>t)t = arr[size];
//     loop(arr, size - 1,t);
// }

// unsigned long long log1(unsigned long long n, unsigned long long t = 2, unsigned long long counter = 0){
//     if(n==1)
//         return counter;
//     else if(t>n)
//         return 0;
//     n /= 2;
//     counter++;
//     return log1(n, t,counter);
// }

void convert(int num, vector<int>&vec){
    if(num==1){
        vec.push_back(1);
        return;
    }
    vec.push_back(num % 2);
    return convert(num / 2, vec);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin >> num;
        vector<int> vec{};
        convert(num, vec);
        for (int i = vec.size()-1; i >=0; i--)
            cout << vec[i];
        cout << endl;
    }
        return 0;
}
