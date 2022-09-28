#include <bits/stdc++.h>

using namespace std;

struct Point{
	double x, y;
};

void input(Point& s){
	cin >> s.x >> s.y;  
}

double distance(Point A, Point B){
	double kA = A.x - B.x;
	double kB = A.y - B.y;
	return sqrt(kA*kA + kB*kB);
}

int main(){
    Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
