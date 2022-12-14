#include<bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string msv,name,lop,ns;
		float diem;
	public:
		SinhVien();
		void nhap();
		void xuat();
};

SinhVien::SinhVien() {
	this-> msv = "B20DCCN001";
	this-> name = "";
	this-> lop = "";
	this-> ns = "";
	this-> diem = 0;
}

void SinhVien::nhap() {
	getline(cin,name);
	cin >> lop;
	cin >> ns;
	if(ns[1] == '/') ns.insert(0, "0");
	if(ns[4] == '/') ns.insert(3, "0");
	cin >> diem;
}

void SinhVien::xuat() {
	cout << msv << " ";
	cout << name << " " << lop << " " << ns << " " << fixed << setprecision(2) << diem;
}

int main(){ 
	SinhVien a; 
	a.nhap();
	a.xuat(); 
	return 0; 
}