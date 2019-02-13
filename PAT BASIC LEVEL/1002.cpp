#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	int b[5];
	memset(b, -1, sizeof(b));
	string s;
	cin >> s;
	int sum = 0;
	for (unsigned int i = 0; i <s.length(); i++) {
		int temp = s[i] - '0';
		sum = sum + temp;
	}
	char a[11][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	int j = 0;
	while (sum != 0) {
		int tmp = sum%10;
		b[j] = tmp;
		sum = sum / 10;
		j++;
	}
	for (int i = j-1; i >0; i--) {
		cout << a[b[i]] << " ";
	}
	cout << a[b[0]] << endl;
}
