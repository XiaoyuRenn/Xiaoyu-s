#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		int flag=1;
		int tmp1=s.find("P");
		int tmp2=s.find("T");
		if(tmp1==-1)
			flag=0;
		if(tmp2==-1)
			flag=0;
		if(flag){
			for(int j=0;j<tmp1;j++){
				if(s[j]!='A')flag=0;
			}
			for( int j=tmp1+1;j<tmp2;j++){
				if(s[j]!='A')flag=0;
			}
			for( unsigned int j=tmp2+1;j<s.length();j++){
				if(s[j]!='A')flag=0;
			}
		}
		int count1=tmp1,count2=tmp2-tmp1-1,count3=s.length()-tmp2-1;
		if(flag&&(count3==count2*count1)&&count2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	} 
	return 0;
}
