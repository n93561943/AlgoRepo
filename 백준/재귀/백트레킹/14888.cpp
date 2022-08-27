#include<bits/stdc++.h>
using namespace std;
int n,ma=-1000000000,mi=1000000000;
vector<int> v;
void solv(int cnt,int add,int minu,int mul,int div,int sum){
    if(cnt==n-1){
    //    cout<<sum;
        ma=max(ma,sum);
        mi=min(mi,sum);
    }
    if(add>0)solv(cnt+1,add-1,minu,mul,div,sum+v[cnt+1]);
    if(minu>0)solv(cnt+1,add,minu-1,mul,div,sum-v[cnt+1]);
    if(mul>0)solv(cnt+1,add,minu,mul-1,div,sum*v[cnt+1]);
    if(div>0)solv(cnt+1,add,minu,mul,div-1,sum/v[cnt+1]);
    
}

int main(){
    int add,minu,mul,div;
    cin>>n;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    cin>>add>>minu>>mul>>div;
    solv(0,add,minu,mul,div,v[0]);
    cout<<ma<<'\n'<<mi;
}