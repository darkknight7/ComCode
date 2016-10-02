#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    string pat="hello";
    int i=0;
    int j=0;
    for(i=0;i<str.size();i++){
        if(str[i]==pat[j]){j++;if(j==5)break;}
    }
    if(j==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
