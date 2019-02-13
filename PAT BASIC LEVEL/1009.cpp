#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	string s;
	vector<string>a;
	while(cin>>s){
		a.push_back(s);
	}
	reverse(a.begin(),a.end());
	for(int i=0;i<a.size()-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[a.size()-1]<<endl;
	return 0;
} 
