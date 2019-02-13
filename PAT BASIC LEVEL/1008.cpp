#include<iostream>
#include<iterator>
#include<list>
using namespace std;
int main(){
	int n,m,flag=0;
	cin>>n>>m;
	list<int>a;
	int k;
	for(int i=0;i<n;i++){
		cin>>k;
		a.push_back(k);	
	}
	for(int i=0;i<m;i++){
		int tmp=a.back();
		a.pop_back();
		a.push_front(tmp);
	}
	list<int>::iterator it;
	for(it=a.begin();it!=a.end();it++){
		if(flag==1)cout<<" ";
		cout<<*it;
		flag=1;
	} 
	return 0;
}
