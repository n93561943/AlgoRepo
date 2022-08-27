#include<bits/stdc++.h>

using namespace std;

int cnt=0;
void bfs(int start,int n,int m, vector<int> v[],bool cnt[]){
    //cout<<start<<" : ";
    bool visit[n+m+1]={0,};
    queue<int> q;
    q.push(start);
    visit[start] = true;
    while(!q.empty()){
        // 큐에 값이 있을경우 계속 반복 실행
        // 큐에 값이 있다. => 아직 방문하지 않은 노드가 존재 한다. 
        int x = q.front();
        q.pop();
        //cout<<x<<" ";
        for(int i=0; i<v[x].size(); i++){
            int y = v[x][i];
            if(!visit[y]){
                // 방문하지 않았다면..
                q.push(y);
                if(y<5)cnt[y]=true;
                visit[y] = true; 
            }
        }
    }
}

int main(){
    int n,m,e,q;
    cin>>n>>m>>e;
    vector<int> v[n+m+1];
    vector<pair<int,int>> v2;
    
    for(int i=0;i<e;i++){
        int t1,t2;
        cin>>t1>>t2;
        v2.push_back({t1,t2});
        v[t1].push_back(t2);
        v[t2].push_back(t1);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        bool cnt[n]={};
        int tmp;
        cin>>tmp;
        int t1,t2;
        t1 = v2[tmp-1].first;
        t2 = v2[tmp-1].second;
    //    cout<<"*"<<t1<<"*"<<t2<<'\n';
        for(int i=0;i<v[t1].size();i++){
            for(auto iter = v[t1].begin();iter != v[t1].end();iter++){
                //cout<<"*"<<*iter<<'\n';
                if(*iter==t2){
                //    cout<<"*";
                    iter = v[t1].erase(iter);
                    break;
                }
            }
        }
        
        for(int i=0;i<v[t2].size();i++){
            auto iter = v[t2].begin();
            while(iter != v[t2].end()){
                if(*iter==t1){
                    v[t2].erase(iter);
                }
                else ++iter;
            }
        }
        int max=0,c=0;
        for(int j=5;j<n+m;j++){
            bfs(j,n,m,v,cnt);
        }
        for(int i=0;i<n;i++){
            if(cnt[i])c++;
        }
        cout<<c<<'\n';
    }

}