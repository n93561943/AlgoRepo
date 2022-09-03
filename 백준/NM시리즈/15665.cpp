#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 9

using namespace std;

int n,m;
int arr[MAX];
vector<int> dataarr;
bool v[MAX];
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
    int ckh=-1;
    for(int i=0;i<n;i++){
        if(ckh!=dataarr[i]){
            ckh=dataarr[i];
            arr[cnt]=dataarr[i];
            solv(cnt+1);
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        dataarr.push_back(t);
    }
    sort(dataarr.begin(),dataarr.end());
    solv(0);
}