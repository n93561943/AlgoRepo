#include<iostream>
#include<vector>
#include<set>
using namespace std;

set<pair<int,int>> st;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int t1,t2;
        cin>>t1>>t2;
        if(pq.size()>0 && pq.top().second>=t1 && pq.top()){
            pair<int, int> t;
            t=pq.top();
            pq.pop();
            t.second = t2;
            pq.push(t);
        }
        st.insert({t1,t2});

        
    }
    while(pq.size()>0){
        cout<<pq.top().first<<" "<<pq.top().second<<'\n';
        pq.pop();
    }
}