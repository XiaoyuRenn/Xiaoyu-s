#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num1,num2,num3;
	num1=n/100;
	num2=n/10%10;
	num3=n%10;
	for(int i=0;i<num1;i++){
		cout<<"B";
	}
	for(int i=0;i<num2;i++){
		cout<<"S";
	}
	for(int i=1;i<=num3;i++){
		cout<<i;
	}
	return 0;
} 
