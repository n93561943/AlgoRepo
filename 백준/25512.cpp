#include<bits/stdc++.h>
using namespace std;

int sum;
bool flag;
int n;
vector<bool> visited;
vector<vector<int>> tree;
vector<pair<int,int>> nodeValue;
void dfs(int start,bool color){
    visited[start]=true;
//    cout<<start;
    if(!color)sum+=nodeValue[start].first;
    else sum+=nodeValue[start].second;
//    cout<<"sum : "<<sum<<'\n';
    for(int i=0;i<tree[start].size();i++){
        int next = tree[start][i];
        if(!visited[next]){
            dfs(next,!color);
        }
    }
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>n;
    visited.resize(n);
    tree.resize(n);
    nodeValue.resize(n);
    for(int i=0;i<n-1;i++){
        int n1,n2;
        cin>>n1>>n2;
        tree[n1].push_back(n2);
        tree[n2].push_back(n1);
    }
    for(int i=0;i<n;i++){
        cin>>nodeValue[i].first>>nodeValue[i].second;
    }
    dfs(0,0);
//    cout<<'\n'<<sum;
    int sum1 = sum;
    sum=0;
    fill(visited.begin(),visited.end(),0);
    dfs(0,1);
//    cout<<'\n'<<sum;
    cout<<min(sum1,sum);
}