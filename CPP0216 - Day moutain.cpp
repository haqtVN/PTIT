#include<bits/stdc++.h>

using namespace std;

bool moutain(int a[], int l, int r) {
	int max = 0;
	int index;
	for(int i = l; i <= r; i++){
		if(a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	for(int i = l; i<index;i++){
		if(a[i]> a[i+1]) return 0;
	}
	for(int i = index ;i<r;i++){
		if(a[i]<a[i+1]) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		int l,r;
		cin >> l >> r;
		if(moutain(a,l,r)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
