#include<iostream>// thu vien su dung cout, cin...
#include<string.h>// thu vien su dung xau
#include<functional>
#include<algorithm>// thu vien giup xu dung cac ham thuc thi cac thuat toan co san trong C++ (sort)
#include <sstream>
#include<stdio.h>
using namespace std;
string InttoStr(long long value) // ham chuyen so sang xau
{
	ostringstream os;
	os << value;
	return os.str();
}
int main()
{
	long long num;
	int ktra=0;
	string ch;
	cin >> num;
		if ((num / 1) < 0) {
			cout << "khong hop le" << endl;
			exit;
	}
		else{
			ch = InttoStr(num); //chuyen xau sang so
			sort(ch.begin(), ch.end(), greater<long long>());// sap xep tung ky tu trong sau, moi ky tu thuoc kieu long long
			cout << ch << endl;
		}
	return 0;

}