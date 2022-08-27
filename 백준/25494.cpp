#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c,cnt=0;
        cin>>a>>b>>c;
        for(int j=1;j<=a;j++){
            for(int z=1;z<=b;z++){
                for(int x=1;x<=c;x++){
                    if(j%z==z%x&&z%x==x%j){
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<'\n';
    }
}