#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int min=1;
		for(int i=0;i<n;i++){
			if(min==a[i]){
				min++;
			}
		}
		cout << min << endl;
	}
}

