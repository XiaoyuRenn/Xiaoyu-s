#include<iostream>
#include<algorithm>
using namespace std;
struct grade{
	string name;
	string id;
	int score;
};
int cmp(grade a,grade b){
	return a.score<b.score;
}
 int main(){
 	int n;
 	cin>>n;
 	grade a[n];
 	for(int i=0;i<n;i++){
 		cin>>a[i].name>>a[i].id>>a[i].score;
	 }
	 sort(a,a+n,cmp);
	 cout<<a[n-1].name<<" "<<a[n-1].id<<endl;
	 cout<<a[0].name<<" "<<a[0].id<<endl;
 	return 0;
 } 
