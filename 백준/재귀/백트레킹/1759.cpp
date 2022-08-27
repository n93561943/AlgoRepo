#include<bits/stdc++.h>

using namespace std;

bool visited[26];
string arr;
string v;
int l,c; //l의 암호의 수, c는 문자의 수

void solv(int j,int size){
    if(size==l){
        int m=0;j=0;
        for(int i=0;i<l;i++){
            if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'){
                m++;
            }
            else j++;
        }
        if(m>=1&&j>=2){
            cout<<v<<'\n';
        }

        return;
    }
    for(int i=j;i<c;i++){
        if(!visited[i]){
            visited[i]=true;
            v+=arr[i];
            solv(i+1,size+1);
            visited[i]=false;
            v.pop_back();
        }
    }
}

int main(){
    cin>>l>>c;
    for(int i=0;i<c;i++){
        char t;
        cin>>t;
        arr+=t;
    }
    sort(arr.begin(),arr.end());
    solv(0,0);
}