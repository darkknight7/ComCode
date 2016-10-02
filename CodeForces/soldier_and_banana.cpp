#include<iostream>
using namespace std;
int main(){
    int a,c,n;
    cin>>a>>c>>n;
    int total=((a+n*a)*(n))/2;
    cout<<((total-c>0)?(total-c):0)<<endl;

}
