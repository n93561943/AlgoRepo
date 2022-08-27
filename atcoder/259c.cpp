#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,t,tmp;
    cin>>s>>t;
    int i=t.size();
    int j=0;
    int k=0;
    int flag=0;
    int cnt=0;
    while(t.compare(tmp)){
        if(!flag){
            tmp.push_back(s[j]);
        }
            cout<<"*"<<cnt++<<":"<<s[j]<<" "<<t[k]<<'\n';
        if(s[j]==t[k]){
            if(s[j]==s[j+1]&&s[j]==t[k+2]){
                tmp.push_back(s[j]);
                flag++;
                cout<<tmp<<'\n';
                if(t.compare(tmp)==0)break;
            }
            else{
                if(flag>1)j=k;
                else j++;
                flag=0;
                cout<<tmp<<'\n';        
            }
            k++;
        }
        else {
            break;
        }
    }
    if(t.compare(tmp)==0){
        cout<<"Yes";

    }
    else {
        cout<<"No"<<'\n';
        cout<<tmp;
    }
}
