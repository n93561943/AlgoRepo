/*
x축이 오른쪽으로 향하고 Y축이 위쪽으로 향하는 2차원 좌표
4개의 좌표가 주어질 때 볼록사각형인지 여부를 판단해라
4개의 내부 각이 모두 180도 미만인 경우에만 볼록
*/
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    vector<pair<int,int>> v;
    for(int i=0;i<4;i++){
        int t1,t2;
        cin>>t1>>t2;
        v.push_back({t1,t2});
    }
    for(int i=0;i<4;i++){
        if((v[(i+1)%4].first>v[i].first)||((v[(i+3)%4].first>v[i].first)&&v[i].first>v[(i+2)%4].first&&v[(i+3)%4].second+v[(i+3)%4].first+v[(i+1)%4].second+v[(i+1)%4].first>0)){
            cout<<"No";
            return 0;
        }
        if((v[(i+1)%4].first>v[i].second)||((v[(i+3)%4].second>v[i].second)&&v[i].second>v[(i+2)%4].second&&(v[(i+3)%4].second+v[(i+3)%4].first+v[(i+1)%4].second+v[(i+1)%4].first)>0)){
            cout<<"No";
            return 0;
        }
        if((v[(i+1)%4].first<v[i].first)||((v[(i+3)%4].first<v[i].first)&&v[i].first<v[(i+2)%4].first&&v[(i+3)%4].second+v[(i+3)%4].first+v[(i+1)%4].second+v[(i+1)%4].first>0)){
            cout<<"No";
            return 0;
        }
        if((v[(i+1)%4].first<v[i].second)||((v[(i+3)%4].second<v[i].second)&&v[i].second<v[(i+2)%4].second&&(v[(i+3)%4].second+v[(i+3)%4].first+v[(i+1)%4].second+v[(i+1)%4].first)>0)){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";

}