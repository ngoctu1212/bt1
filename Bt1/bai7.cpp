#include<iostream>
using namespace std;
int UCLN(int a, int b){// ham tim UCLN
	while (a != b){ // thuc hien cac lenh trong while cho den khi a=b
		if (a>b) a = a - b; 
		else b = b - a;
	}
	return a;
}
int BCNN(int a, int b){
	return ((a*b) / (UCLN(a, b))); //BCNN = tich 2 so chia cho UCLN
}
int main(){
	int a, b;
	cin >> a;
	cin >> b;
	if (a <= 0 || b <= 0) {
		cout << "khong hop le" << endl;
		exit;
	}
	else{
		cout << "UCLN " << UCLN(a, b) << endl;
		cout << "BCNN " << BCNN(a, b) << endl;
	}
	return 0;
}