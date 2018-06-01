#include<iostream>// thu vien su dung cout, cin...
#include<string.h>// thu vien su dung xau
#include <sstream>
using namespace std;
int main()
{
	string S;
	getline(cin, S);
	int n = S.size(); // lay do dai cua xau S gan vao n
	for (int i = n - 1; i >= 0; i--){
		cout << S[i];
	}
	cout << endl;
}