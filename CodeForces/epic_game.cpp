#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main(){

    int a,b,n;
    cin>>a>>b>>n;
    int move = 0;
    int move_number = a;
    int required = gcd(move_number,n);
    
    while(n!=0 && required <= n){
    n-=required;
    move = move ^ 1;
    if(move)move_number = b;
    else move_number = a;

    required = gcd(move_number,n);
    }

    cout<<(move^1)<<endl;
}
