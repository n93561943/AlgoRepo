#include<bits/stdc++.h>

using namespace std;

int solv(int n,int m){
    if(m==0)return n;
    return solv(m,n%m);
}

int main(){
    int n,m,gcd;
    cin>>n>>m;
    gcd=solv(n,m);
    cout<<gcd<<'\n';
    cout<<(n*m)/gcd;
}