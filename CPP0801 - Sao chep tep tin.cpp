#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	ifstream ifs("PTIT.in");
	ofstream ofs("PTIT.out");
	while(ifs >> s){
		ofs << s;
	}
	ifs.close();
	ofs.close();
}

