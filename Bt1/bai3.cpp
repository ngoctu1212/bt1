#include<iostream>// thu vien su dung cout, cin...
using namespace std;
int main(){
	float n, gia, k; // n: so met can di; gia: gia tien; k 
	cin >> n;
	if (n < 0) {
		cout << "khong hop le" << endl;
		exit;
	}
	if (n <= 1000 && n > 0){
		 cout << 10000 << "VND";
	}
	if (n <= 30000 && n>1000){
		 gia = 10000 + (((n - 1000) / 200)) *1500;
		 cout << gia << "VND" << endl;
	}
	if(n > 30000) {
		 gia = 227500 + (((n - 30000) / 1000)) * 8000;
		 cout << gia << "VND" << endl;
	}
	return 0;
}