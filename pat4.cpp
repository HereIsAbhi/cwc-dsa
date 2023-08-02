#include<iostream>
using namespace std;
int main(){
//	int n,j,i;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			cout<<" ";
//		}
//		for(j=1;j<=2*i-1;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	for(i=n;i>=1;i--){
//		for(j=1;j<=n-i;j++){
//			cout<<" ";
//		}
//		for(j=1;j<=2*i-1;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//..............
	int i,j,n;
	cin>>n;
	for(i=1;i<=3;i++){
		for(j=1;j<=n;j++){
			if(((i+j)%4==0)|| (j%4==0 && i==2)){
				cout<<"* ";
			}
			else cout<<"  ";
			
		}
		cout<<endl;
		
	}
}
