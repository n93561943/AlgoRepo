#include<bits/stdc++.h>

using namespace std;
int cnt;

int recursion(string s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(string s){
//    cout<<s.size()-1;
    return recursion(s, 0, s.size()-1);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cnt=0;
        string tmp;
        cin>>tmp;
        cout<<isPalindrome(tmp)<<" "<<cnt<<'\n';
    }
}