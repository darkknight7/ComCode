#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int a[30]={0};
    int i;
    for(i=0;i<str.size();i++)
        a[str[i]-'a']=1;
    int ans=0;
    for(i=0;i<30;i++)if(a[i]==1)ans++;
    if(ans%2!=0)cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
}
