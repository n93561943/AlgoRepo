#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){ //n이 1이면 소수가 아님
        cout<<"Not Prime";
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){ //약수가 있다면 소수가 아님
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime"; //2부터 n-1까지 나누어 지지 않는 수가 있다면 소수
    return 0;
}
