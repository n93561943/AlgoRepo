/*
N�� ?10^18 and 10^18 ���� ��
���� x�� ã�ƶ� 
N-x�� 998244353�� ����� �� 
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

    