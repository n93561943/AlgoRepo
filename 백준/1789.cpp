#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long s;
    cin>>s;
    long long i=1;
    int cnt=0;
    long long sum=0; 
    while(sum<s){
        cnt++;
        sum+=i;
        i++;
    }
    if(sum>s){
        cnt--;
    }
    cout<<cnt;
}