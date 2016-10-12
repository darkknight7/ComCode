#include<iostream>
using namespace std;
int is_prime(int n){
    int i=0,flag=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){flag=1;break;}
    }
    if(flag)return 0;
    else return 1;
}

int main(){
    int n;
    cin>>n;
    int one,two;
    one =3;
    while(true){
        one++;
        two = n-one;
        if(is_prime(one)||is_prime(two))continue;
        else {cout<<one<<" "<<two<<endl;break;}
    }
}
