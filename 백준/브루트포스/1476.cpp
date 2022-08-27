#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int e,s,m;
    cin>>e>>s>>m;
    int n=1;
    while(1){
        if((n-e)%15==0&&(n-s)%28==0&&(n-m)%19==0)break;
        n++;
    }
    cout<<n;
}