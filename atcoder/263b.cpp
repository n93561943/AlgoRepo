#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    // bool visited[n]={0,};
    cin>>n;
    vector<int> v[n+1];

    for(int i=2;i<=n;i++){
        int t;
        cin>>t;
        v[i].push_back(t);
    }
    int cnt=1;
    int next = v[n][0];
    while(next!=1){
        cnt++;
        next=v[next][0];
    }
    cout<<cnt;
    //     }
    // }
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<v[i].size();j++){
    //         cout<<v[i][j]<<" ";
    //         if(v[i][j]==n){
    //             cout<<cnt;
    //             return 0;
    //          }
    //     }
    //     cout<<'\n';
    // }
}