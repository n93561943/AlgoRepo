#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        mp[tmp]++;
        if(mp[tmp]==1){
            cout<<tmp<<'\n';
        }
        else cout<<tmp<<"("<<mp[tmp]-1<<")"<<'\n';
    }

}