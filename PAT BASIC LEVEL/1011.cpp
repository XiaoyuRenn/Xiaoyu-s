#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		long long z;
		cin>>x>>y>>z;
		long long temp=(long long)x+y;
		if(temp>z)
			cout<<"Case #"<<i<<": true"<<endl;
		else
			cout<<"Case #"<<i<<": false"<<endl;
	}
	
	return 0;
}
