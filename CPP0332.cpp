#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	stringstream a(s);
	string tmp;
	vector<string> tu;
	while(a>>tmp){
		tu.push_back(tmp);
	}
	string ho;
	for(int i = 0; i < tu.size()-1; i++){
		ho+=tu[i][0];
	}
	cout << tu[tu.size()-1] << ho << "@ptit.edu.vn";
}	

