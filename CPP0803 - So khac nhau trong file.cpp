#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream file;
	file.open("DATA.in");
	int n;
	map<int,int> mp;
	while(file >> n) {
		mp[n]++;
	}
	for(auto x : mp) {
		cout << x.first << " " << x.second << endl;
	}
	file.close();
}
