#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
	string id,name,clas,birth;
	float gpa;
};

string getMa(int n){
	string s=to_string(n);
	while(s.length()<3){
		s='0'+s;
	}
	return "B20DCCN"+s;
}

void nhap(SinhVien a[], int N) {
	
		for(int i = 1; i <= N; i++) {
				cin.ignore();
				getline(cin,a[i].name);
				cin >> a[i].clas;
				cin >> a[i].birth;
				if(a[i].birth[1] == '/') a[i].birth.insert(0,"0");
				if(a[i].birth[4] == '/') a[i].birth.insert(3,"0");
				cin >> a[i].gpa;
	}
}

void in(SinhVien a[], int N) {
	for(int i = 1; i <= N; i++) {
		cout << getMa(i) << " " << a[i].name << " " << a[i].clas << " " << a[i].birth << " ";
		cout << fixed << setprecision(2) << a[i].gpa;
		cout << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}