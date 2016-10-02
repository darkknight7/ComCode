#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int l=str1.size();
    for(int i=0;i<l;i++){
        if(str1[i]<'a')str1[i]+=32;
        if(str2[i]<'a')str2[i]+=32;
    }
    if(str1<str2)cout<<-1<<endl;
    else if(str1==str2)cout<<0<<endl;
    else cout<<1<<endl;
}
