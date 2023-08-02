#include<iostream>
using namespace std;
int main(){
//	int i,j,n;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			cout<<" ";
//		}
//		for(j=1;j<=i;j++){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}

//...................
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(j=i;j>=1;j--){
			cout<<j<<" ";
		}
//		int k=i;
//		for(;j<=n;j++){
//			cout<<k--<<" ";
//	}
		for(j=2;j<=i;j++){
			cout<<j<<" ";
		}
//		k=2;
//		for(;j<=n+i-1;j++){
//			cout<<k++<<" ";
//		}
		cout<<endl;
	}
//	...............

}
