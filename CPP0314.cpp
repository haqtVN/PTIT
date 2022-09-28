#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	set<string> count;
	while(t--){
		string s;
		getline(cin,s);
		count.insert(s);
	}
	cout << count.size();
}

