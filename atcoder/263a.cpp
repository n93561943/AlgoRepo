#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    for(int i=0;i<5;i++){
        int t;
        cin>>t;
        mp[t]++;
    }
    bool a=false,b=false;
    for(auto i:mp){
        if(i.second == 3)a=true;
        if(i.second == 2)b=true;
    }
    if(a&&b)cout<<"Yes";
    else cout<<"No";
}