#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.find("084");
		cout << s.erase(n,3) << endl;
	}
}

