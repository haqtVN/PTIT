#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i = 0;i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	stringstream a(s);
	string word;
	vector<string> tu;
	while(a>>word){
		tu.push_back(word);
	}
	for(int i = 0; i <tu.size()-1; i++){
		tu[i][0]=toupper(tu[i][0]);
	}
	tu[tu.size()-2] += ",";
	int l = tu[tu.size()-1].length();
	for(int i = 0; i < l; i++){
		tu[tu.size()-1][i] = toupper(tu[tu.size()-1][i]);
	}
	for(int i = 0; i <tu.size()-1; i++){
		cout << tu[i] << " ";
	}
	for(int i = 0; i < l; i++){
		cout << tu[tu.size()-1][i];
	}
	
}

