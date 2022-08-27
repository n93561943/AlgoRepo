#include<iostream>
#define MAX 9

using namespace std;

int n,m;
int ind[MAX];
bool visited[MAX];

void PrintArr(){
    for(int i=0;i<m;i++){
        cout<<ind[i]<<" ";
    }
    cout<<'\n';
    return;
}

void nm(int size){
    if(size == m){
        PrintArr();
        return;
    }
    for(int i=1;i<=n;i++){
        if(size==0 || ind[size-1]<=i){
            ind[size]=i;
            nm(size+1);
        }
        
    }
}

int main(){
    cin>>n>>m;
    nm(0);
}