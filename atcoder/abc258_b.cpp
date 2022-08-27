//해결 못함
#include<bits/stdc++.h>
using namespace std;

int x[8]={1,1,0,-1,-1,-1,0,1};
int y[8]={0,1,1,1,0,-1,-1,-1};
int n;
long long arr[11][11];
bool visited[11][11];
vector<long long> v[100];
int cnt;

long long bfs(int xx,int yy){
    int cx=xx;
    int cy=yy;
    long long ans=arr[xx][yy];
    for(int i=0;i<n-1;i++){
        ans*=10;
        long long max=0,maxx=0,maxy=0;
        for(int j=0;j<8;j++){
            int nx = cx+x[j];
            int ny = cy + y[j];
            nx%=n;
            nx+=n;
            ny%=n;
            ny+=n;
            nx%=n;
            ny%=n;
            if(arr[nx][ny]>max){
                max=arr[nx][ny];
                maxx=nx;
                maxy=ny;
            }
        }
        cx=maxx;
        cy=maxy;
        ans+=arr[cx][cy];
    }
    for(int i = 0; i<n; i++) //초기화
		memset(visited[i], 0, sizeof(visited[i]));
    return(ans);

}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1lld",&arr[i][j]);
        }
    }
    long long result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result=max(result,bfs(i,j));  
        }
    }
    cout<<result;
}