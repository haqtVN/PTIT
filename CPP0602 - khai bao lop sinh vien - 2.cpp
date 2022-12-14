#include<bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string msv,ten,lop,ns;
		float gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien& a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

SinhVien::SinhVien() {
	this-> msv = "B20DCCN001";
	this-> ten = "";
	this-> lop = "";
	this-> ns = "";
	this-> gpa = 0;
}

istream& operator >> (istream &in, SinhVien& a) {
	getline(in,a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1] == '/') a.ns.insert(0, "0");
	if(a.ns[4] == '/') a.ns.insert(3, "0");
	return in;
}

ostream& operator << (ostream &out, SinhVien a) {
	cout << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}