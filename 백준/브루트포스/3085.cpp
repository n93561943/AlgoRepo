#include <bits/stdc++.h>
#define MAX 50

using namespace std;

string candy[MAX];
int n;

int check(){
    int result=1;
    for(int i=0;i<n;i++)
    {    
        int cnt=1;
        for(int j=1;j<n;j++)
        {
            if(candy[i][j-1]==candy[i][j])
            {
                cnt++;
            }
            else
            {
                result=max(cnt,result);
                cnt=1;
            }
        }
        result=max(cnt,result);
    }
    for(int i=0;i<n;i++)
    {
        
        int cnt=1;
        for(int j=1;j<n;j++)
        {
            if(candy[j-1][i]==candy[j][i])
            {
                cnt++;
            }
            else 
            {
                result=max(cnt,result);
                cnt=1;
            }
        }
        result=max(cnt,result);
        
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>candy[i];
    }
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            swap(candy[i][j-1],candy[i][j]);
            result=max(result,check());
            swap(candy[i][j-1],candy[i][j]);       
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            swap(candy[j-1][i],candy[j][i]);
            result=max(result,check());
            swap(candy[j-1][i],candy[j][i]);       
        }
    }
    cout<<result;
}