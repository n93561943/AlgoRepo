#include<bits/stdc++.h>

using namespace std;

void solv(int i,int j, int n){
    if(i/n%3==1&&j/n%3==1){
        cout<<" ";
    }
    else if(n==1)cout<<"*";
    else solv(i,j,n/3);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            solv(i,j,n);
        }
        cout<<'\n';
    }

}