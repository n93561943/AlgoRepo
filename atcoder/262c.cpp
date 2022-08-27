#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,result=0;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;i<=n;j++){
            if(i==j)continue;
            if(i==v[j]||v[i]==j)result++;
        }
    }
    cout<<result;
}