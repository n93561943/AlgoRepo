#include<bits/stdc++.h>

using namespace std;

int result;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> graph[n+1];
    vector<vector<int>> graph2;
    for(int i=0;i<m;i++){
        int t1,t2;
        cin>>t1>>t2;

        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    for(int i=1; i<=n; i++){
		sort(graph[i].begin(), graph[i].end());
	}
    int z=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<graph[i].size();j++){
            int tmp=graph[i][j];
            for(int k=0;k<graph[tmp].size();k++){
                int tmp2=graph[tmp][k];
                if(tmp2==i)continue;
                for(int z=0;z<graph[tmp2].size();z++){
                    int tmp3=graph[tmp2][z];
                    if(i==tmp3){
                        vector<int> tmp4;
                        tmp4.push_back(i);
                        tmp4.push_back(tmp);
                        tmp4.push_back(tmp2);
                        sort(tmp4.begin(),tmp4.end());
                        graph2.push_back(tmp4);
                    }
                }
            }
        }
		//dfs(i,graph,check,i,3);
	}
    sort(graph2.begin(),graph2.end());
    graph2.erase(unique(graph2.begin(), graph2.end()),graph2.end()); 
    cout<<graph2.size();
}