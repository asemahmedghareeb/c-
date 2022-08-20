#include<bits/stdc++.h>
using namespace std;

int fibonacci(int num){
    if(num==1||num==2)
        return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}


int fibonacci2(int num,int memo[]){
    if(memo[num]!=0)
        return memo[num];
    int result=0;
    if (num == 1 || num == 2)
        return 1;

    else {
        int result= fibonacci2(num - 1,memo) + fibonacci2(num - 2,memo);
    }
    memo[num] = result;
    return result;
}



// 0 1 2 3 4 5
// 0 1 1 2 3 5
//                           // fib(5)
//                                ||
//                                ||
//                ////////////   (5) /////////////////                                                
//              (3)                                  (2)
// //         fib(4)       +                        fib(3)
//             |                                               
//             |                                               
//             |                           fib(2)      +       fib(1)
//             |                               |                   |
//             |                         fib(1)+fib(0)            1 
// //    fib(3)  +  fib(2)                  1     0
//         |           |         
//         |       fib(1)+fib(0)
//         |          1    0
//         |
//   fib(2) + f ib(1)
//     |          1
//     |       
// fib(1)+fib(0)
//    1      0

int factorial(int num){
    if(num==0)
        return 1;
    return num*factorial(num-1);
}

int sum(int n){
    if(n==1)
        return 1;
    return n+sum(n-1);
}

// sum(3)
//     3 + sum(2)
//             2+sum(1)
//                     (1)   
int sum_range(int n1,int n2){
    if(n1>n2)
        return 0;
    return n1+sum_range(n1+1,n2);
}

int sum_range2(int n1, int n2) {
    // if(n1>n2)return 0;
    if (n1 == n2)
        return n2;

    return n2 + sum_range2(n1, n2 - 1);
}






void f(int n){
    if (n == 0)
        return;
    f(n / 10);
    cout << n % 10<<endl;
}
// 100
//     10

void f2(int n){
    if (n == 0)
        return;
    cout << n % 10<<endl;
    f(n / 10);
}

// void pyramid2(int n,int x=1){
//     if(x>n)return;
//     for (int i = x; i < n;i++)
//         cout << " ";
//     for (int i = 0; i < x; i++)
//         cout << "*";
//     for (int i = 1; i < x; i++)
//         cout << "*";
//     cout << endl;
//     return pyramid2(n ,x+1);
// }

void pyramid(int n,int x=0){
    if(n<0)return;
    for (int i = 0; i < x;i++)
        cout << " ";
    for (int i = 0; i < n; i++)
        cout << "*";
    for (int i = 1; i < n; i++)
        cout << "*";

    cout << endl;
    return pyramid(n - 1,x+1);
}
int main(){

    int x;
    cin >> x;
    pyramid(x);

    return 0;
}
