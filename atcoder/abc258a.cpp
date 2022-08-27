#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int k,h,m;
    cin>>k;
    h=k/60;
    m=k%60;
    printf("%d:%02d",21+h,m);
}