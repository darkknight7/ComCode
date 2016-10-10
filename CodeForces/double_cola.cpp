#include<iostream>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main(){

    string a[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    int n;
    cin>>n;
    vector<int> v;
    int previous=0;
    int next = 5;
    int d=5;
    while(next<n){
    d = d*2;
    previous = next;
    next = next + d;
    }
    int diff = next - previous;
    int ans = diff / 5;
    if(n<=5)cout<<a[n-1]<<endl;
    else 
    {
        int temp = (n-previous);
    cout<<a[(((temp)%ans)==0) ?(temp-1)/ans:temp/ans]<<endl;

    }
}

