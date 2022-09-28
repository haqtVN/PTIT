#include <bits/stdc++.h>

using namespace std;

int main(){
 	string s;
 	getline(cin,s);
 	string x;
 	getline(cin,x);
 	int tmp = s.find(x);
 	cout << s.erase(tmp,x.length());
}

