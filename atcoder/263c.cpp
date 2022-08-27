#include<iostream>
#define MAX 9
using namespace std;

bool v[MAX];
int arr[MAX]; //<-n : 0, 1, 2, 3 ....m-1
int n,m;

void solv(int j,int cnt){
	if(cnt==m){
		for(int i=0;i<m;i++){
			cout<<arr[i]<<" ";
		}
		cout<<'\n';
		return;
	}
	for(int i=j;i<=n;i++){ //1~n 
		if(!v[i]){
			arr[cnt]=i; 
			v[i]=true;
			solv(i+1,cnt+1);
			v[i]=false;
		}
	}
}
int main(){
	cin>>m>>n;
	solv(1,0); //arr[MAX] => 0,1,2,3 => m	
} 

