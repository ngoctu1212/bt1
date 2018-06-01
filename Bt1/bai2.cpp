#include<iostream>// thu vien su dung cout, cin...
#include<string.h>// thu vien su dung xau
#include<sstream>
using namespace std;
int main(){
	string s; // khai bao xau s
	int dh = 0, dt = 0;// dh: dem ky tu hoa; dt: dem ky tu thuong;
	cin >> s;// nhap xau s
	for (int i = 0; i<s.length(); i++){ // duyet tu dau xau den cuoi xau
		if (isupper(s[i])) dh++; // ham isupper(i) giup  kiem tra xem ky tu i co la chu hoa hay khong, neu dung tang dh len 1
		else dt++; 
	}
	cout << "So ky tu hoa: " << dh << endl;
	cout << "So ky tu thuong: " << dt << endl;
	return 0;
}