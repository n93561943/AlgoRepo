#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    vector<int> prime;
    cin>>m>>n;
    // if(m==1&&n==1){
    //     cout<<-1;
    //     return 0;
    // }
    if(m==1)m++;
    for(int i=m;i<=n;i++){
        bool flag = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            prime.push_back(i);
        }
    }
    int min=n;
    int sum=0;
    if(prime.empty()==true){
        cout<<-1;
        return 0;
    }
    for(auto i:prime){
        sum+=i;
        if(min>i){
            min = i;
        }
    }
    cout<<sum<<'\n'<<min;
    
}