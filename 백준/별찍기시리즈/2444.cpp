#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++)cout<<" ";
        for(int j=1;j<2*i;j++)cout<<"*";
        cout<<'\n';
    }
    for(int i=2;i<=n;i++){
        for(int j=i;j<n;j++)cout<<" ";
        for(int j=1;j<2*i;j++)cout<<"*";
        cout<<'\n';
    }
    
}