#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str,rev_str;
    cin>>str>>rev_str;
    reverse(rev_str.begin(),rev_str.end());
    if(str==rev_str)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

