#include <bits/stdc++.h>

using namespace std;

int b[1000001] = {0};

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i =0 ;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			while(a[i]>0){
				int j =a[i]%10;
				if(j!=b[a[j]]){
					b[a[j]] = j;
				}
				a[i]/=10;
			}
		}
		for(int i = 0;i<n;i++){
			if(b[a[i]]>0){
				cout << b[a[i]] << " ";
			}
		}
		
}
}

