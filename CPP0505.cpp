#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string mnv = "00001";
	char name[40];
	char gender[3];
	char age[10];
	char loca[100];
	char tax[10];
	char date[10];
};

void nhap(NhanVien& s){
	cin.getline(s.name,40);
	
	cin.getline(s.gender,3);
	cin.ignore();
	cin.getline(s.age,10);

	cin.getline(s.loca,100);
	cin.ignore();
	cin.getline(s.tax,10);
	cin.ignore();
	cin.getline(s.date,10);
}

void in(NhanVien s){
	cout << s.mnv << " " << s.name << " " << s.gender << " " << s.age << " " << s.loca << " " << s.tax << " " << s.date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

