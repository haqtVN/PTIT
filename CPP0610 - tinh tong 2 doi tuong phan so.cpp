#include<bits/stdc++.h>

using namespace std;

class PhanSo {
	public:
		long long tu,mau;
		PhanSo(long long a = 1; long long b = 1){
			tu = a;
			mau = a;
		}
		void rutgon() {
			long long gcd = __gcd(tu,mau);
			tu /= gcd;
			mau /= gcd;
		}
		friend istream &operator >> (istream &in, PhanSo &a) {
			cin >> a.tu >> a.mau;
			return in;
		}
		friend ostream &operator << (ostream &out, PhanSo &a) {
			cout << a.tu << "/" << a.mau;
			return out;
		}
		PhanSo operator + (PhanSo b) {
			PhanSo a;
			a.tu = tu*b.mau + mau.b.tu;
			a.mau = mau*b.mau;
			a.rutgon();
			return a;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
