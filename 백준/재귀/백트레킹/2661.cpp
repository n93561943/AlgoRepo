#include<bits/stdc++.h>
using namespace std;

int n;
int arr[81];
void solv(int size){
    for(int i=1;i<=size/2;i++){ //���ڸ� �߰��Ҷ����� ���� �������� �ľ�
        if(equal(arr+size-i,arr+size,arr+size-i*2))return;
    }
    if(size==n){
        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
        cout<<'\n';
        exit(0);
    }
    for(int i=1;i<=3;i++){
        arr[size]=i;
        solv(size+1);
    }
}

int main(){
    cin>>n;
    solv(0);
}