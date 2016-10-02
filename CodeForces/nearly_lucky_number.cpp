#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int ans=0;
    for(int i=0;i<str.size();i++)if(str[i]=='4'||str[i]=='7')ans++;
    if(ans==4||ans==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
