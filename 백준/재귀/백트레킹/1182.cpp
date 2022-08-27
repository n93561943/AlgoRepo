#include<bits/stdc++.h>
using namespace std;
int ArrSum[21];
bool v[21];
int arr[21];
int cnt;
int n,s;

void solv(int k,int j, int size){ 
    if(k==size){
        int sum=0;
        for(int j=0;j<size;j++){
            sum+=ArrSum[j];
        //    cout<<ArrSum[j]<<" ";
        }
        //cout<<'\n';
        if(sum==s){
            cnt++;
        }
    }
    for(int i=j;i<n;i++){
        if(!v[i]){
            ArrSum[size]=arr[i];
            v[i]=true;
            solv(k,i+1,size+1);
            v[i]=false;
        }
    }

}

int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        solv(i,0,0);
    }
    cout<<cnt;
}