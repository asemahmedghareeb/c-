#include<bits/stdc++.h>
using namespace std;


// vector<vector<int>> prem(int n, vector<int>p,vector<vector<int>>&vec, int ind = 0){
//     if(ind==n-1)
//         return vec;

//     for (int i = ind; i < n; i++)
//     {
//         vec[i].push_back(p[i]);
//         for (int j = ind; j < n; j++)
//         {
        
//                 if (p[j]== p[i])continue;
//                 vec[i].push_back(p[j]);
//         }
//             return prem(n, vec[i], vec, ind + 1);
        
//     }
//         // return prem(n, p,vec, ind + 1);
// }


// vector<string> prem(int n, int arr[1000],vector<string>&vec, int ind = 0)
// {
//     if(ind==n-1)
//         return vec;

//     for (int i = ind; i < n; i++)
//     {
//         string str = "";
//         str += to_string(arr[i]);
//         for (int j = ind; j < n; j++)
//         {
//             {
//                 if (arr[j]== arr[i])continue;
                
//                 str += to_string(arr[j]);
//             }
//         }
//         vec.push_back(str);
        
//     }
//     return prem(n, arr,vec, ind + 1);
// }



vector<string> prem(int n, string arr,vector<string>&vec, int ind = 0)
{
    if(ind==n-1)
        return vec;

    for (int i = ind; i < n; i++)
    {
        string str = "";
        str += (arr[i]);
        for (int j = ind; j < n; j++)
        {
            {
                if (arr[j]== arr[i])continue;
                
                str +=(arr[j]);
            }
        }
        vec.push_back(str);
        
    }
    return prem(n, arr,vec, ind + 1);
}


int main(){

    vector<string> vec;
    int arr[]{1, 2, 3, 4};

    for (int i = 0; i < 4;i++){
        string str = "";
        str+= to_string(arr[i]);
        for (int j = 0; j< 4;j++){
            if(arr[j]==arr[i])continue;
            else str += to_string(arr[j]);
        }
        vec.push_back(str);
    }

    
    vector<string> v;
    for (auto t : vec)
    {
        prem(t.size(), t, v);
        for(auto x:v){
            cout << x << " ";
            cout << endl;
        }
        cout << endl;
    }
}