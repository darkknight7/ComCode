#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    string a;
    cin>>a;
    int l=a.size();
    string b =a[0]+std::to_string(l-2)+a[l-1];
    if(l<=10)cout<<a<<endl;
    else cout<<b<<endl;
    }
}
