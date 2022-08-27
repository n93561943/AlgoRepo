#include<bits/stdc++.h>

using namespace std;

void func(int a,int b,int n){
    if(n==1){
        if(n==1)cout<<a<<" "<<b<<'\n'; //탑이 1일 때 이동 루트 출력
        return;
    }
    func(a,6-a-b,n-1); //a, 6-a,b로 이동
    cout<<a<<" "<<b<<'\n'; //a<-b 이동 출력
    func(6-a-b,b,n-1); //6-a-b에서 b로 이동
}

int main()
{
    int n;
    cin>>n;
    cout<<(1<<n)-1<<'\n';
    func(1,3,n);
}