#include<iostream>
#include<string>

using namespace std;

int cnt;

void solv(int n){
    string line="";
    int i=cnt;
    while(i--)line+="____";
    cnt++;
    cout<<line<<"\"����Լ��� ������?\""<<'\n';
    if(n==0){
        cout<<line<<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\""<<'\n';
        cout<<line<<"��� �亯�Ͽ���."<<'\n';
        return;
    }
    cout<<line<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���."<<'\n';
    cout<<line<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���."<<'\n';
    cout<<line<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\""<<'\n';
    solv(n-1);
    cout<<line<<"��� �亯�Ͽ���."<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������."<<'\n';
    solv(n);
}