#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int b[10000] = { 0 };
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int n, flag = 0;
	cin >> n;
	vector<int>a;
	int m;
	for (int i = 0; i < n; i++) {
		cin >> m;
		a.push_back(m);
		while (m != 1) {
			if (m % 2 == 0) {
				m = m / 2;
				b[m] =1;
			}
			else {
				m = (3 * m + 1) / 2;
				b[m] = 1;
			}
		}

	}
	sort(a.begin(), a.end(),cmp);
	for (int i = 0; i < a.size(); i++) {
		if (b[a[i]] == 0) {
			if (flag == 1)cout << " ";
			cout << a[i];
			flag = 1;
		}
	}
	return 0;

}
