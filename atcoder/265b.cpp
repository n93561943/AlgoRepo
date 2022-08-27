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
Ÿī�Ͻô� ���ӿ��� ������ Ž���ϴ� ���̴�.
������ n���� ���� ���ٷ� �����Ǿ� �ִ�. ���� 1,2,...,n������ ��ȣ�� �Ű��� �ִ�.
Ÿī�Ͻô� 1���濡 �ְ� �ð� ������ T�̴�.
Ai�� �ð����� i���濡�� i+1�������� �̵��� �� �ִ�. 
�������� M���� ���ʽ� ���� �ְ�, i��° ���ʽ����� Xi�̴�. 
���ʽ��濡 �����ϸ� �ð��� Yi��ŭ �þ��.
��ī�Ͻð� N���濡 ������ �� �ֳ�?

*/