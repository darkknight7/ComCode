#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cin>>str;
//std::transform(data.begin(), data.end(), data.begin(), ::tolower);
int l=str.size();
int i;
for(i=0;i<l;i++){
if(str[i]<'a')str[i]+=32;
}
//delete vowels
int new_size=0;
string new_str="";
for(i=0;i<l;i++){
if(str[i]=='y'||str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u')continue;
else new_str+=str[i];
}
new_size=new_str.size();
string ans="";
for(i=0;i<new_size;i++){
ans=ans + "." + new_str[i];
}
cout<<ans<<endl;
}
