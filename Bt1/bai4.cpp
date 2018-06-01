#include<iostream>
using namespace std;
int main()
{
	int h, i, j;
	cin >> h;
	if (h < 0){
		cout << "khong hop le" << endl;
		exit;
	}
	for (i = 1; i <= h; i++)// in tung dong 1 de tao nen tam giac
	{
		for (j = 1; j <= h - i; j++)
			cout << (" "); // in cac ky tu khoang trang tung dong
		for (j = 1; j <= 2 * i - 1; j++)
			cout << ("*");// in cac ky tu sao tung dong
		cout << ("\n");
	}
	return 0;
}