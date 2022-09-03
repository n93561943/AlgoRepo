/*
N은 ?10^18 and 10^18 사이 값
다음 x를 찾아라 
N-x가 998244353의 배수인 수 
*/
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    ll a;
    cin>>a;

    for(ll i = 0;i<998244353;i++){
        int t=a-i;
        if(t%998244353==0){
            cout<<i<<'\n';
            //return 0;
        }
    }
}

    