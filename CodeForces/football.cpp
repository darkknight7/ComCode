#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cin>>str;
string zero="0000000";
string one="1111111";
size_t first_string_occ=str.find(zero);
size_t second_string_occ=str.find(one);
if(first_string_occ==std::string::npos && second_string_occ==std::string::npos)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}
