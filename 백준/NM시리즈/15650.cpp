#include<iostream>
#define MAX 9

using namespace std;

int arr[MAX];
bool v[MAX];
int n,m;

void Print(){
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}
void nm(int j, int st){
    if(st==m){
        Print();
        return;
    }
    for(int i=j;i<=n;i++){
        if(!v[i]){
            arr[st]=i;
            v[i]=true;
            nm(i+1,st+1);
            v[i]=false;
        }
    }
}

int main(){
    cin>>n>>m;
    nm(1,0);
}