#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
	string name, clas, birth;
	float mark;
};

void nhap(SinhVien &s) {
	getline(cin,s.name);
	cin >> s.clas;
	cin >> s.birth;
	cin >> s.mark;
}

void in(SinhVien s){
	if(s.birth[1]=='/'){
		s.birth.insert(0,"0");
	}
	if(s.birth[4]=='/'){
		s.birth.insert(3,"0");
	}
	cout << "B20DCCN001" << " " << s.name << " " << s.clas << " " << s.birth << " ";
	cout << fixed << setprecision(2) << s.mark;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
