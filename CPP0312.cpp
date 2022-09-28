#include <bits/stdc++.h>

using namespace std;

#define size length

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		int k;
		cin >> s >> k;
		int count[26];
		memset(count,0,sizeof(count));
		int size = s.size();
		for(int i = 0; i < size; i++){
			if(s[i] >= 'a' && s[i] <= 'z') count[s[i] - 'a']++;
			if(s[i] >= 'A' && s[i] <= 'Z') count[s[i] - 'A']++;
		}
		int w = 0;
		for(int i = 0; i < 26; i++){
			if(count[i] >  0) {
				w++;
			}
		}
		if(size < 26) {
			cout << 0 << endl;
		}
		else {
			if(w+k>=26){
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
	}
}

