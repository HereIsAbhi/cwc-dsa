#include<iostream>
using namespace std;
void fib(int n);
int main(){
	int n;
	cin>>n;
	fib(n);
}


void fib(int n){
	int t1=0;
	int t2=1;
	int nt;
	for(int i=1;i<=5;i++){
		cout<<t1<<endl;
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
	

}
