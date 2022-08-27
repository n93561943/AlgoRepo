#include<bits/stdc++.h>
#define MAX 9
using namespace std;

bool v[MAX];
int arr[MAX];
int n,m;

void Print(){
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}
void solv(int cnt){
    if(cnt==m){
        Print();
        return;
    }
    for(int i=1;i<=n;i++){
        if(!v[i]){
            arr[cnt]=i;
            solv(cnt+1);
        }
    }
}

int main(){
    cin>>n>>m;
    solv(0);

}