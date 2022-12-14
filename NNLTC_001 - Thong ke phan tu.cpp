#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	vector<int> v;
	map<int, int> mp;
	while(cin >> n) {
		v.push_back(n);
	}
	for(auto x : v){
		mp[x]++;
	}
	for(auto x : mp) {
		if(x.second !=0 ) cout << x.first << " " << x.second << endl;
		x.second = 0;
	}
}
