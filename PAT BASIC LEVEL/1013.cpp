#include<iostream>
#include<vector> 
bool IsPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
		
	return true;
}
using namespace std; 
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>a;
	int temp=0;
	for(int i=2;temp<m;i++){
		if(IsPrime(i)){
			temp++;
			if(temp>=n)a.push_back(i);
		}	
	}
	for(int i=0,j=1;i<a.size();i++,j++){
		cout<<a[i];
		if(j%10&&i!=a.size()-1)cout<<" ";
		else cout<<endl;
	}
	return 0;
}
