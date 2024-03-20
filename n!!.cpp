#include <iostream>

using namespace std;

int giaithuakep(int n){
	return (n==0 || n==1) ? 1:n*giaithuakep(n-2);
}

int main(){
	int n;
	cin >> n;
	cout << giaithua(n) << endl;
	return 0;
}
