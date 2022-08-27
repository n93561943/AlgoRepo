#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v,result;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    int eraseNum=0;
    while(v.size()>0){
        eraseNum=(eraseNum+k-1)%v.size();
        result.push_back(v[eraseNum]);
        v.erase(v.begin()+eraseNum);
    }
    cout<<"<";
    for(int i=0;i<result.size()-1;i++){
        cout<<result[i]<<", ";
    }
    cout<<result[n-1]<<">";
}