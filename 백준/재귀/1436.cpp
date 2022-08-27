#include<iostream>
using namespace std;



int solv(int n){
    if(n==1)return 666;
    return solv(n-1);

}

int main(){
    int n;
    cin>>n;
    cout<<solv(n);
}