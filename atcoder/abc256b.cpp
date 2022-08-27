#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,p=0;
    cin>>n;
    
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
        for(int j=0;j<i;j++){
            v1[j]+=v1[i];
            
        }
    }
    for(int i=0;i<n;i++){
        if(v1[i]>3)p++;
    }
    cout<<p;

}
