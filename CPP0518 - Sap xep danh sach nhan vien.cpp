#include<bits/stdc++.h>

using namespace std;

int t = 1;

struct NhanVien {
	string id,ten,gt,ns,dc,mst,hd;
};

void nhap(NhanVien &a) {
	string s = to_string(t++);
	cin.ignore();
	a.id =  s;
	while(a.id.length()<5) {
		a.id = "0" + a.id;
	}
	getline(cin,a.ten);
	cin >> a.gt;
	cin >> a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin >> a.mst;
	cin >> a.hd;
}

int chuyenhoa(NhanVien a){
	string s = a.ns.substr(6,4) + a.ns.substr(0,2) + a.ns.substr(3,2);
	return stoi(s); 
}

bool cmp(NhanVien a, NhanVien b) {
	return chuyenhoa(a) < chuyenhoa(b);
}

void sapxep(NhanVien a[], int n) {
	sort(a,a+n,cmp);
}

void inds(NhanVien a[], int n) {
	for(int i = 0;i < n; i++) {
		cout << a[i].id << " " << a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].hd << endl;}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}