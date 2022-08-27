#include<bits/stdc++.h>

using namespace std;

void solv(int a,int b,int n){
    if(n==1){
        cout<<a<<" "<<b<<'\n';
        return;
    }
    solv(a,6-a-b,n-1);
    cout<<a<<" "<<b<<'\n';
    solv(6-a-b,b,n-1);

}

int main(){
    int n;
    cin>>n;
    solv((1,3,n);)
}