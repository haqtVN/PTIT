#include <bits/stdc++.h>

using namespace std;

int b[1000001] = {0};

int main(){
	int t;
	cin >> t;
	while(t--){
		int dem = 0;
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		
		for(int i = 0; i < n; i++){
			if(b[a[i]] > 1){
				dem += b[a[i]];
			}
				b[a[i]] =  0;
		}
		cout << dem << endl;
	}
}

