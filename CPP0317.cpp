#include <bits/stdc++.h>

using namespace std;

int tn(string s){
	int length = s.length();
	for(int i = 0; i <= length/2; i++){
		if(s[i] == s[length - 1 - i]) {
			return 1;
		}
	}
	return 0;
}

int c2(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] % 2 != 0) {
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		if(tn(s) && c2(s)){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}	

