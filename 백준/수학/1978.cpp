#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        bool flag = true;
        int t;
        cin>>t;
        if(t==1)continue;
        for(int j=2;j<t;j++){
            if(t%j==0){
                flag = false;
                break;
            }
        }
        if(flag)cnt++;
    }
    cout<<cnt;
}