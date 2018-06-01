#include<iostream>
#include<algorithm>
#include<string.h>
#include<sstream>
using namespace std;
void nhap(string &s){ // ham nhap xau
	getline(cin, s);
}
void xoa(string &s, int vt){ // ham xoa 1 ky tu bat ky trong xau 
	int n = s.size();
	for (int i = vt; i<n; i++) s[i] = s[i + 1];
}
void xoacach(string &s){ //ham xoa dau cach trong xau
	int n = s.size();
	for (int i = 0; i<n; i++){
		if (s[i] == 32){
			if (s[i + 1] == 32){
				int k = i;
				while (s[i] == 32){
					xoa(s, i);
					i = k + 1;
				}
			}
		}
	}
}
void xoacachcham(string &s){ //ham xoa dau cach va cham lien nhau
		int n = s.size();
		for (int i = 0; i < n; i++){
			if (s[i] == 32 && s[i + 1] == 46) xoa(s, i);
		}
	}
void xoaphaycham(string &s){ //ham xoa dau cach va phay lien nhau
	int n = s.size();
	for (int i = 0; i < n; i++){
		if (s[i] == 32 && s[i + 1] == 44) xoa(s, i);
	}
}
void xoaphay(string &s){ // ham xoa dau phay trong xau
	int n = s.size();
	for (int i = 0; i<n; i++){
		if (s[i] == 44){
			if (s[i + 1] == 44){
				int k = i;
				while (s[i] == 44){
					xoa(s, i);
					i = k + 1;
				}
			}
		}
	}
}
void xoacham(string &s){ // ham xoa dau cham trong xau
	int n = s.size();
	for (int i = 0; i<n; i++){
		if (s[i] == 46){
			if (s[i + 1] == 46){
				int k = i;
				while (s[i] == 46){
					xoa(s, i);
					i = k + 1;
				}
			}
		}
	}
}
void xoachamphay(string &s){ // ham xoa dau cham va dau phay lien nhau
	int n = s.size();
	for (int i = 0; i < n; i++){
		if (s[i] == 46 && s[i + 1] == 44) xoa(s, i);
	}
	for (int i = 0; i < n; i++){
		if (s[i] == 44 && s[i + 1] == 46) xoa(s, i + 1);
	}
}
void convert1(string &s){ // ham chuyen ky tu hoa sang thuong trong xau
	int n = s.size();
	for (int i = 1; i <= n - 1; i++)
	if (s[i]<91 && s[i]>64) s[i] = s[i] + 32;
}
void convert2(string &s){ // ham chuyen doi ky tu dau tien sang hoa trong xau
	if (s[0]>97) s[0] = s[0] - 32;
}
void in(string &s){ // ham in ra man hinh
	cout << s << endl;
}
void xoadaucachdau(string &s){
	int i = 0;
	while (s[i] == 32) xoa(s, i);
}
bool ktra(string &s){
	int n = s.size();
	for (int i = 0; i <n - 1; i++){
		if ((s[i] == 32 && s[i + 1] == '.') || (s[i] == 32 && s[i + 1] == ',')
			|| (s[i] == '.' && s[i + 1] == ',') || (s[i] == ',' && s[i + 1] == '.') || (s[i] == ',' && s[i + 1] == ',') || (s[i] == '.' && s[i + 1] == '.')
			)
			return false;
	}
	return true;
}
void output(){ // ham xu ly
	string s;
	nhap(s);
	while (ktra(s) == false){
		xoadaucachdau(s);
		xoachamphay(s);
		xoacach(s);
		xoaphay(s);
		xoacham(s);
		xoacachcham(s);
		xoaphaycham(s);
	}
	convert1(s);
	convert2(s);
	in(s);
}
int main(){ 
	output();
}