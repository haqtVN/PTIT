#include <bits/stdc++.h>

using namespace std;

struct ThiSinh{
	char name[50];
	char birth[10];
	float diem1;
	float diem2;
	float diem3;
};

void nhap(ThiSinh& s){
	cin.getline(s.name,50);
//	cin.ignore();
	cin.getline(s.birth,50);
//	cin.ignore();
	cin >> s.diem1;
	cin >> s.diem2;
	cin >> s.diem3;
}

void in(ThiSinh s){
	cout << s.name << " " << s.birth << " ";
	float sum = s.diem1 + s.diem2 +s.diem3;
	cout << fixed << setprecision(1) << sum;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

