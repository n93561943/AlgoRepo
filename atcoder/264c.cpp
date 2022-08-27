#include<bits/stdc++.h>

using namespace std;

int main(){
    int h1,w1,h2,w2;
    cin>>h1>>w1;
    map<int,int> mp;

    for(int i=0;i<h1;i++){
        for(int j=0;j<w1;j++){
            int tmp;
            cin>>tmp;
            mp[tmp]++;
        }
    }
    cin>>h2>>w2;
    int arr[h2][w2];
    for(int i=0;i<h2;i++){
        for(int j=0;j<w2;j++){
            int tmp;
            cin>>tmp;
            mp[tmp]++;
            arr[i][j]=tmp;
        }
    }
    for(int i=0;i<h2;i++){
        for(int j=0;j<w2;j++){
            if(mp[arr[i][j]]!=2){
                cout<<"No";
                return 0;
            }
            
        }
    }
    cout<<"Yes";
    
    // int v1[h1][w1];

    // for(int i=0;i<h1;i++){
    //     for(int j=0;j<w1;j++){
    //         cin>>v1[i][j];
    //     }
    // }
    // cin>>h2>>w2;
    // int v2[h2][w2];
    // for(int i=0;i<h2;i++){
    //     for(int j=0;j<w2;j++){
    //         cin>>v2[i][j];
    //     }
    // }
    // for(int i=0;i<h2;i++){
    //     for(int j=0;j<w2;j++){
    //         for(int k=i;k<h1;k++){
    //             for(int z=j;j<h1;z++){
    //                 if(v1[k][z]==v2[i][j]){v2[i][j]=0;continue;}
    //                 else if(v1[k][z]>v2[i][j])break;
    //                 else v1[k][z]=0;
    //             }
                
    //         }
    //     }
    // }
    // bool f=true;
    // for(int i=0;i<h2;i++){
    //     for(int j=0;j<w2;j++){
    //         if(v2[i][j]!=0)f=false;
    //     }
    // }
    // if(f)cout<<"Yes"<<'\n';
    // else cout<<"No"<<'\n';

    // // for(int i=0;i<h1;i++){
    // //     for(int j=0;j<w1;j++){
    // //         cout<<v1[i][j]<<" ";
    // //     }
    // //     cout<<'\n';
    // // }

}