#include<iostream>
#include<string>
using namespace std;
int main(){
 string str;
 cin>>str;
 int i,n=str.size();
 int one,two,three;
 one=two=three=0;
for(i=0;i<n;i+=2){
if(str[i]=='1')one++;
else if(str[i]=='2')two++;
else three++;
}
string ans="";
for(i=0;i<one;i++)ans+="1+";
for(i=0;i<two;i++)ans+="2+";
for(i=0;i<three;i++)ans+="3+";
ans.pop_back();
cout<<ans<<endl;
}
