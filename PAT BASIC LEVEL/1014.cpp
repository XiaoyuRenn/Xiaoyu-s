#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
using namespace std;
int main(){
	string s1,s2,s3,s4;
	int a[3],flag=0;
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<s1.size()&&i<s2.size();i++){
		if(!flag&&s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'){
			a[0]=s1[i]-'A';
			flag=1;
			continue;
		}	 
		else if(flag&&s1[i]==s2[i]&&(s1[i]>='A'&&s1[i]<='N'||isdigit(s1[i]))){
			a[1]=isdigit(s1[i])?s1[i]-'0':s1[i]-'A'+10;
			break;
		}	 
	}
	for(int i=0;i<s3.size()&&i<s4.size();i++){
		if(s3[i]==s4[i]&&isalpha(s3[i])){
			a[2]=i;
			break;
		}
	}
	string s[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cout<<s[a[0]]<<" "<< setw(2) << setfill('0')<<a[1]<<":"<<setw(2) << setfill('0')<<a[2];
	return 0;
}
