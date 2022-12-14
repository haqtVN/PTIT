#include<bits/stdc++.h>

using namespace std;

struct PhanSo {
	long long tu,mau;
};

void rutgon(PhanSo &a) {
	long long gcd = __gcd(a.tu,a.mau);
		 a.tu /= gcd;
		 a.mau /= gcd;
}

void process(PhanSo a, PhanSo b) {
	PhanSo c,d;
	c.tu = a.tu*b.mau + a.mau*b.tu;
	c.mau = a.mau*b.mau;
	c.tu *= c.tu;
	c.mau *= c.mau;
	rutgon(c);
	cout << c.tu << "/" << c.mau << " ";
	d.tu = a.tu*b.tu*c.tu;
	d.mau = a.mau*b.mau*c.mau;
	rutgon(d);
	cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
