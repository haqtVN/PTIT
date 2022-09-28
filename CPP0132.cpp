#include <iostream>
#include <cmath>

using namespace std;

void ktr(long long n){
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
		}
		if(n==1){
				cout << i;
		};
	}
	if(n!=1){
		cout << n;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		ktr(n);
		cout << endl;
	}
}
