#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
	int k,n;
	cin>>k;
	int count1=0,count2=0,count3=0,count4=0,num4=0;
	vector<int>a;
	vector<int>b;
	while(k--){
		cin>>n;
		if(n%5==0){
			if(n%2==0){
				count1+=n;
			}
		}
		else if(n%5==1){
			a.push_back(n);
		}
		else if(n%5==2){
			count3++;
		}
		else if(n%5==3){
			count4++;
			num4+=n;
		}
		else{
			b.push_back(n);
		}
	}
	for(int i=0;i<a.size();i++){
		if(i%2==0)
		count2+=a[i];
		else
		count2-=a[i];
	}
	float c =(float)num4/count4;
	sort(b.begin(),b.end());
	if(count1)cout<<count1;
	else cout<<"N";
	if(a.size())cout<<" "<<count2;
	else cout<<" "<<"N";
	if(count3)cout<<" "<<count3;
	else cout<<" "<<"N";
	if(count4)cout<<" "<<setiosflags(ios::fixed)<<setprecision(1)<<c;
	else cout<<" "<<"N";
	if(b.size())cout<<" "<<b.back();
	else cout<<" "<<"N";
	return 0;
}
