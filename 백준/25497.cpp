#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<char> lr;
    stack<char> sk;
    
    int n,cnt=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='L'){
            lr.push('L');  
        } 
		else if(str[i]=='S') {
            sk.push('S');
        }	
        else if(str[i]=='R') {
            if(!lr.empty()) {
					cnt++; 
                    lr.pop();
				} 
			else {
				break;	
			}
        } 
        else if(str[i]== 'K') {
            if(!sk.empty()) {
					cnt++; 
                    sk.pop();
			} 
			else {
    			break;	
			}
        }  
		else cnt++;
    }
    cout<<cnt;
}