#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h,w;
    pair<int,int> p;
    p=make_pair(0,0);
    cin>>h>>w;
    vector<string> v(h);

    for(int i=0;i<h;i++){
        cin>>v[i];
    }
    int cnt=0;
    while(1){
        switch(v[p.first][p.second]){            
            case 'U' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.first==0){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.first -= 1; 
                break;
                }
            case 'D' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.first==h-1){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.first += 1; 
                break;
                }
            case 'L' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.second==0){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.second -= 1; 
                break;
                }

            case 'R' : {
                //cout<<"*"<<p.first<<" "<<p.second<<"*"<<'\n';
                if(p.second==w-1){
                    cout<<p.first+1<<" "<<p.second+1;
                    return 0;
                }
                p.second += 1; 
                break;
                }
            }
            if(cnt++>h*w){
                break;
            }
    }
    cout<<-1;
}


/*
h*w ����� �ִ�. 
(i,j)�� ��ܰ� ���ʺ��� i��, j���̰� Gi,j�� ǥ���ȴ�.
(1,1)�� �ʱ�ȭ �Ǿ� �ְ� �������� ���� ������ ���� �۾��� �Ѵ�.

U : i�� 1�� �ƴҶ� (i-1,j)�� �����̴�.
D : i�� H�� �ƴҶ� (i+1,j)�� �����δ�.
L : j�� 1�� �ƴҶ� (i,j-1)�� �����δ�.
R : j�� w�� �ƴҶ� (i,j+1)�� �����δ�.
�� �ܿ��� ������ �� ����.

������ �� ���� �� ������ ��ǥ�� ����ϰ� ������ �ݺ� �� -1�� ��� �μ��϶�

*/