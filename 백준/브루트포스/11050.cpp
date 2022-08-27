#include<iostream>
using namespace std;
int solv(int n,int k){
    if(k==0 || k==n)return 1;
    return solv(n-1,k)+solv(n-1,k-1);
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<solv(n,k);
}