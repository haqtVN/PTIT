#include<bits/stdc++.h>

using namespace std;

struct NhanVien {
	string name, gender, birth, addr, tax, date;
};

void nhap(NhanVien &s) {
	getline(cin,s.name);
	cin >> s.gender;
	cin >> s.birth;
	cin.ignore();
	getline(cin,s.addr);
	cin >> s.tax;
	cin >> s.date;
}

void in(NhanVien s){
	if(s.birth[1]=='/'){
		s.birth.insert(0,"0");
	}
	if(s.birth[4]=='/'){
		s.birth.insert(3,"0");
	}
	if(s.date[1]=='/'){
		s.date.insert(0,"0");
	}
	if(s.date[4]=='/'){
		s.date.insert(3,"0");
	}
	cout << "00001" << " " << s.name << " " << s.gender << " " << s.birth << " " << s.addr << " " << s.tax << " " << s.date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
