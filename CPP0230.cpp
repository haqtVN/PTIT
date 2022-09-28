#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
		}
	}
	int dem1,dem0;
	int s=0;
	for(int i=0;i<n;i++){
		dem1=0;
		dem0=0;
		for(int j=0;j<3;j++){
			if(a[i][j]==1){
				dem1++;
			} 
			else if(a[i][j]==0){
				dem0++;
			} 
		}
		if(dem1 > dem0){
			 s++;
		}
	}
	cout << s;
}

