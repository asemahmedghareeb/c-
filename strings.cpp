#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "asem ahmed", y="essam";
    // 1 assign 
    // y.assign(str);


    //2  getline(cin,y);

    // // cin.ignore();
    // cout << y << endl;
    

    //3 at funcution
    cout << str.at(0) << endl;

    //4  length
    cout << str.length() << endl;

    //5 size
    cout << str.size() << endl;

    //6 substring
    cout << str.substr(1,  3) << endl;

    cout << str.substr(2) << endl;

    //7 swap
    // str.swap(y);
    // cout<< str <<" "<<y<<endl;


    //8 find
    cout<<str.find("a")<<endl;

    //9 rfind
    cout << str.rfind("a")<<endl;


    // //10 erase
    // cout << str.erase(1, 3);
    // // deleting from  index 3 to the end 
    // cout << str.erase(3) << endl;


    //11 replace
    // cout<<str.replace(1, 3, "bbb");
    // cout << str.replace(str.find("s"), 3, "lll");


    // 12 insert
    // cout << str.insert(3,"aabb")<<endl;

    return 0;
}