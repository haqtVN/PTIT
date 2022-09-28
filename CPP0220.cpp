#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int m = n;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==0||i==n-1||j==0||j==m-1){
					cout << a[i][j] << " ";
				}
				else {
					cout << " " << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
}

