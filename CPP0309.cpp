#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin,s);
		stringstream dem(s);
		string check;
		int cnt=0;
		while(dem >> check) {
			cnt++;
		}
		cout << cnt << endl;
	}
}

