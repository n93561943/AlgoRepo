#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){ //n�� 1�̸� �Ҽ��� �ƴ�
        cout<<"Not Prime";
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){ //����� �ִٸ� �Ҽ��� �ƴ�
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime"; //2���� n-1���� ������ ���� �ʴ� ���� �ִٸ� �Ҽ�
    return 0;
}
