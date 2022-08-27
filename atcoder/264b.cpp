#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,c;
   cin>>r>>c;
    // for(int r=1;r<16;r++){
    //     for(int c=1;c<16;c++){
            if(r%2==1 && c>=r && c<=16-r)cout<<"black";
            else if(r%2==1 && c>=16-r && c<=r)cout<<"black";
            else if(c%2==1 && r>=c && r<=16-c)cout<<"black"; //r=2, c=15
            else if(c%2==1 && r>=16-c && r<=c)cout<<"black";
            else cout<<"white";
    //     }
    //     cout<<'\n';
    // }
    
}