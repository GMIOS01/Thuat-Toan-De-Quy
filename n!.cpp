#include <iostream>

using namespace std;

int giaithua(int n){
	return n==0 ? 1:n*giaithua(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << giaithua(n) << endl;
	return 0;
}