#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    int cur=0; // ���� ����Ǿ� �ִ°�
    int consume=2;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        if(cur==t){
            // ����� ���� �ٽ� ����
            consume*=2;
            ans+=consume;
        }
        else{
            consume=2;
            ans+=consume;
            cur=t;
        }

        if(ans >=100){
            ans=0;
            consume=2;
            cur=0;
        }
        //cout<<ans<<"\n";
    }
    cout<<ans<<"\n";

    return 0;

}

