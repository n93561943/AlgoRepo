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
a. ���Կ��� ����� �Ǵ�.
���ϴ� ��ŭ ���� �ൿ�� �� �� �ִ�.

 - �ϳ��� ����� x���� �ְ� ���.
 - 3���� ����� y���� �ְ� ���.

 n���� ����� ����� �� ���� �ʿ��ϳ�?


*/