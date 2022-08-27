#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,m,t;
    cin>>n>>m>>t;
    vector<ll> timeLimit(n+1,0);
    vector<ll> bonusTime(n+1,0);
    for(int i=2;i<=n;i++){
        cin>>timeLimit[i];
    }
    for(int i=0;i<m;i++){
        ll t1,t2;
        cin>>t1>>t2;
        bonusTime[t1]=t2;
    }
    for(int i=2;i<=n;i++){
        t-=timeLimit[i];
        if(t<=0){
            cout<<"No";
            return 0;
        }
        t+=bonusTime[i];
    }
    cout<<"Yes";
}

/*
b. 
타카하시는 게임에서 동굴을 탐험하는 중이다.
동굴을 n개의 방이 한줄로 구성되어 있다. 방은 1,2,...,n번까지 번호가 매겨져 있다.
타카하시는 1번방에 있고 시간 제한은 T이다.
Ai의 시간으로 i번방에서 i+1번방으로 이동할 수 있다. 
동굴에는 M개의 보너스 방이 있고, i번째 보너스방은 Xi이다. 
보너스방에 도착하면 시간이 Yi만큼 늘어난다.
다카하시가 N번방에 도착할 수 있나?

*/