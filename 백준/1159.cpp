#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        mp[tmp[0]]++;
    }
    vector<char> v;
    for(auto i:mp){
        if(i.second>=5)v.push_back(i.first);
    }
    if(v.empty()){
        cout<<"PREDAJA";
    }
    else {
        for(auto i:v)cout<<i;
    }
}