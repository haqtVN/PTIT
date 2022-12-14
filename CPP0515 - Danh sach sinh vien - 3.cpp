#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
	string id,name,clas,birth;
	float gpa;
};

//string getMa(int N) {
//	string s = to_string(N);
//	while(s.length() < 3) {
//		s = "0" + s;
//	}
//	return "B20DCCN" + s;
//}

void nhap(SinhVien a[], int N) {
	for(int i = 1; i <= N; i++) {
		string k = to_string(i);
		while(k.length() < 3) {
		 k = "0" + k;
		}
		a[i].id = "B20DCCN" + k;
		cin.ignore();
		string s;
		getline(cin,s);
		a[i].name = "";
		stringstream ss(s);
		while(ss >> s) {
			for(int j = 0; j < s.length(); j++) {
				s[j] = tolower(s[j]);
			}
			s[0] = toupper(s[0]);
			a[i].name = a[i].name + s + " ";
		}
		cin >> a[i].clas;
		cin >> a[i].birth;
		if(a[i].birth[1] == '/') a[i].birth.insert(0,"0");
		if(a[i].birth[4] == '/') a[i].birth.insert(3,"0");
		cin >> a[i].gpa;
		
	}
}

void sapxep(SinhVien a[], int N) {
	for(int i = 1; i <= N; i++) {
		for(int j =i + 1; j <= N; j++) {
			if(a[i].gpa < a[j].gpa) {
				SinhVien s = a[i];
				a[i] = a[j];
				a[j] = s;
			}
		}
	}
}

void in(SinhVien a[], int N) {
	for(int i = 1; i <= N; i++) {
		cout << a[i].id << " " << a[i].name << a[i].clas << " " << a[i].birth << " "; 
		cout << fixed << setprecision(2) << a[i].gpa;
		cout << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
