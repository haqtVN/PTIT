#include <bits/stdc++.h>

using namespace std;

int c11(string s){
	int demc=0,deml=0;
	for(int i = 0; i < s.length(); i++){
		if(i%2 == 0){
			demc+=(s[i]-'0');
		}
		else{
			deml+=(s[i]-'0');
		}
	}
	return abs(demc-deml);
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		if(c11(s)%11==0){
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
}

