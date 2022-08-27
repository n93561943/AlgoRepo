#include<bits/stdc++.h>

using namespace std;

int main(){
    char arr[123]={0,};
    arr[97]=1;
    arr[116]=2;
    arr[99]=3;
    arr[111]=4;
    arr[100]=5;
    arr[101]=6;
    arr[114]=7;
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            if(arr[str[j]]>arr[str[j+1]]){
                cnt++;
                char tmp;
                tmp = str[j];
                str[j]=str[j+1];
                str[j+1]=tmp;
            }
        }
    }
//    cout<<str<<'\n';
    cout<<cnt;
}