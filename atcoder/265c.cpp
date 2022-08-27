#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h,w;
    pair<int,int> p;
    p=make_pair(0,0);
    cin>>h>>w;
    vector<string> v(h);

    for(int i=0;i<h;i++){
        cin>>v[i];
    }
    int cnt=0;
    while(1){
        switch(v[p.first][p.second]){            
            case 'U' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.first==0){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.first -= 1; 
                break;
                }
            case 'D' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.first==h-1){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.first += 1; 
                break;
                }
            case 'L' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.second==0){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.second -= 1; 
                break;
                }

            case 'R' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.second==w-1){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.second += 1; 
                break;
                }
            }
            if(cnt++>h*w){
                break;
            }
    }
    cout<<-1;
}


/*
h*w 행렬이 있다. 
(i,j)는 상단과 왼쪽부터 i행, j열이고 Gi,j로 표현된다.
(1,1)로 초기화 되어 있고 움직이지 못할 때까지 다음 작업을 한다.

U : i가 1이 아닐때 (i-1,j)로 움직이다.
D : i가 H가 아닐때 (i+1,j)로 움직인다.
L : j가 1이 아닐때 (i,j-1)로 움직인다.
R : j가 w가 아닐때 (i,j+1)로 움직인다.
이 외에는 움직일 수 없다.

움직일 수 없을 때 마지막 좌표를 출력하고 무한정 반복 시 -1를 대신 인쇄하라

*/