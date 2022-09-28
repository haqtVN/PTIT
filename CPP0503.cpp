#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tuso;
	long long mauso;
};

void nhap(PhanSo& s){
	cin >> s.tuso >> s.mauso;
}

void rutgon(PhanSo& s){
	long long gcd = __gcd(s.tuso,s.mauso);
	s.tuso/=gcd;
	s.mauso/=gcd;
}

void in(PhanSo s){
	cout << s.tuso << "/" << s.mauso;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

