#include <bits/stdc++.h>

using namespace std;

int toBase4(string s){
	if(s.compare("00") == 0) return 0;
	if(s.compare("01") == 0) return 1;
	if(s.compare("10") == 0) return 2;
	return 3;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int size = s.size();
		if(size%2){
			s = '0' + s;
			size++;
		}
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < size; i+=4) sum1 += toBase4(s.substr(i,2));
		for(int i = 2; i < size; i+=4) sum2 += toBase4(s.substr(i,2));
		
		if(abs(sum1-sum2)%5) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
}

