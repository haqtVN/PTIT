#include<bits/stdc++.h>

using namespace std;

struct NhanVien {
	string name, gender, birth, addr, tax, date;
	
};

void nhap(NhanVien &s) {
	cin.ignore();
	getline(cin,s.name);
	cin >> s.gender;
	cin >> s.birth;
	cin.ignore();
	getline(cin,s.addr);
	cin >> s.tax;
	cin >> s.date;
}

void inds(NhanVien s[], int n){
	for(int i = 0;i < n;i++){
		string ma = to_string(i+1);
		while(ma.size() < 5){
			ma = "0" + ma;
		}
		cout << ma << " " << s[i].name << " " << s[i].gender << " " << s[i].birth << " " << s[i].addr << " " << s[i].tax << " " << s[i].date << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}