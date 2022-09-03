#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(m==1){
        return 0;
    }
    vector<bool> prime(m+1,1);
    prime[1]=false;
    for(int i=2;i<=sqrt(m);i++){
        if(prime[i]){
            for(int j=i*2;j<=m;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=n;i<=m;i++){
        if(prime[i])cout<<i<<'\n';
    }
}