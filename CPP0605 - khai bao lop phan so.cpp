#include<bits/stdc++.h>

using namespace std;

class PhanSo {
	private:
		long long tu,mau;
	public:
		PhanSo(long long t, long long m) {
			t = tu;
			m = mau;
		}
		friend istream& operator >> (istream &in, PhanSo &p);
		friend ostream& operator << (ostream &out, PhanSo p);
		void rutgon();
};

istream& operator >> (istream &in, PhanSo &p) {
	in >> p.tu >> p.mau;
	return in;
}

ostream& operator << (ostream &out, PhanSo p){
	out << p.tu << "/" << p.mau;
	return out;
}

void PhanSo::rutgon() {
	long long i = __gcd(tu,mau);
	tu /= i;
	mau /= i;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}