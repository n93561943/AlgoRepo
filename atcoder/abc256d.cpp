#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int t1,t2;
        t1=v[i].first;
        t2=v[i].second;
        if(pq.size()==0){
            pq.push({t1,t2});
        }
        else {
            while(pq.size()>0 && pq.top().second<t1){
                cout<<pq.top().first<<" "<<pq.top().second<<'\n';
                pq.pop();
            }
            if(pq.size()>0 && pq.top().second>=t1 &&pq.top().second>t2)continue;
            else if(pq.size()>0 && pq.top().second>=t1){
                pair<int, int> t;
                t=pq.top();
                pq.pop();
                t.second = t2;
                pq.push(t);
            }
            else pq.push({t1,t2});
        }
        
    }
    while(pq.size()>0){
        cout<<pq.top().first<<" "<<pq.top().second<<'\n';
        pq.pop();
    }
}