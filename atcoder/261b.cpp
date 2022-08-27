#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> str(n);

    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i][j]=='W'&&str[j][i]=='L')continue;
            else if(str[i][j]=='L'&&str[j][i]=='W')continue;
            else if(str[i][j]=='D'&&str[j][i]=='D')continue;
            else {
                cout<<"incorrect";
                return 0;
            }
        }
    }
    cout<<"correct";

}