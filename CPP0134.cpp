#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a;
		cin >> n >> a;
		int res=-1;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n/=i;
				a--;
				if(a==0){
				res=i;
				break;
				}
			}
		}
		if(n!=1&&a==1){
			res=n;
		} 
		cout << res << endl;
	}
}

