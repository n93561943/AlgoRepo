#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll N,P,Q,R;
bool flag1=0,flag2=0,flag3=0;
vector<ll> v;
void check3(ll n){
    if(n>v.size()){
        return;
    }
    ll sum=0;
    for(ll i=n;i<v.size();i++){
        sum+=v[i];
        if(sum==R){
            cout<<"Yes";
            flag3=true;
            return;
        }
        else if(sum>R){
            check3(n+1);
            break;
        }
    }
    return;
}
void check2(ll n){
    if(n>v.size()){
        return;
    }
    ll sum=0;
    for(ll i=n;i<v.size();i++){
        sum+=v[i];
        if(sum==Q){
            flag2=true;
            check3(i);
            return;
        }
        else if(sum>Q){
            check2(n+1);
            break;
        }
    }
    return;
}

void check(ll n){
    if(n>v.size()){
        return;
    }
    ll sum=0;
    
    for(ll i=n;i<v.size();i++){
        sum+=v[i];
        if(sum==P){
            flag1=true;
            check2(i);
            return;
        }
        else if(sum>P){
            check(n+1);
            break;
        }
       // cout<<sum<<'\n';
    }
    return;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>P>>Q>>R;
    for(ll i=0;i<N;i++){
        ll t;
        cin>>t;
        v.push_back(t);
    }
    check(0);
    if(flag1!=true||flag2!=true||flag3!=true)
        cout<<"No";
}

/*
d. 
길이가 n인 문장 A가 있다.
다음 조건을 만족하는 (x,y,z,w)가 있다면 Yes를 출력하라
0<=x<=y<=z<=w<=n
Ax+~Ay-1 = P
Ay+~Az-1 = Q
Az+~Aw-1 = R
*/