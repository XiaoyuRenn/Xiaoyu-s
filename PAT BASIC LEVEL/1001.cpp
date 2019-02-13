
// 1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cin >> n;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			sum++;
		}
		else {
			n = (3 * n + 1) / 2;
				sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
