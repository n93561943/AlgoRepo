#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y,n;
    cin>>x>>y>>n;
    int n1=n;
    int sum1=0;
    sum1+=n1/3 * y;
    n1%=3;
    sum1+=n1*x;

    int sum2=0;
    sum2+=n*x;
    cout<<min(sum1,sum2);
}

/*
a. 가게에서 사과를 판다.
원하는 만큼 다음 행동을 할 수 있다.

 - 하나의 사과를 x엔을 주고 산다.
 - 3개의 사과를 y엔을 주고 산다.

 n개의 사과를 사려면 몇 엔이 필요하나?


*/