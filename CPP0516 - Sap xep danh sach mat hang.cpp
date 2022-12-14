#include<bits/stdc++.h>

using namespace std;

struct MatHang {
	int id;
	string name,gr;
	float mua,ban;
	float ln;
};

void nhap(MatHang a[], int n) {
	for(int i = 1; i <= n; i++) {
		a[i].id = i;
		cin.ignore();
		getline(cin,a[i].name);
		getline(cin,a[i].gr);
		cin >> a[i].mua;
		cin >> a[i].ban;
		a[i].ln = a[i].ban - a[i].mua;
	}
}

void sapxep(MatHang a[], int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = i + 1; j <= n; j++) {
			if(a[i].ln < a[j].ln) {
				MatHang s = a[i];
				a[i] = a[j];
				a[j] = s;
			}
		}
	}
}

void in(MatHang a[], int n) {
	for(int i = 1; i <= n; i++) {
		cout << a[i].id << " " << a[i].name << " " << a[i].gr << " ";
		cout << fixed << setprecision(2) << a[i].ln << endl;
	}
}

int main(){
	struct MatHang a[50];
	int n;
	cin >> n;
	nhap(a,n);
	sapxep(a,n);
	in(a,n);
	return 0;
}
