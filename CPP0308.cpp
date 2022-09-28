#include <bits/stdc++.h>

using namespace std;

int b[1000001] = {0};

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		memset(b,0,sizeof(b));
		for(int i = 0; i < s.length(); i++){
			b[s[i]]++;
		}
		for(int i = 0; i < s.length(); i++){
			if(b[s[i]] < 2) {
				cout << s[i];
			}
		}
		cout << endl;
	}
}

