#include<bits/stdc++.h>

using namespace std;

void func(int a,int b,int n){
    if(n==1){
        if(n==1)cout<<a<<" "<<b<<'\n'; //ž�� 1�� �� �̵� ��Ʈ ���
        return;
    }
    func(a,6-a-b,n-1); //a, 6-a,b�� �̵�
    cout<<a<<" "<<b<<'\n'; //a<-b �̵� ���
    func(6-a-b,b,n-1); //6-a-b���� b�� �̵�
}

int main()
{
    int n;
    cin>>n;
    cout<<(1<<n)-1<<'\n';
    func(1,3,n);
}