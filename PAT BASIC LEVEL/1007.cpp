#include<iostream>
using namespace std;
bool Isprime(int m){
	for(int i=2;i*i<=m;i++){
		if(m%i==0)return false;
	}
	return true;
}
int main(){
	int n,sum=0;
	cin>>n;
	for(int j=5;j<=n;j++){
		if(Isprime(j)&&Isprime(j-2)) sum++; 
	}
	cout<<sum<<endl;
	return 0;
}
