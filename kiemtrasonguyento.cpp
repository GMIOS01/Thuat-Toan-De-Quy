#include <iostream>

using namespace std;

int ktnt(int n, int i=2){
	if(n<2){
		return 0;
	}
	else return (n==i) ? 1 : (n%i==0) ? 0 : ktnt(n,i+1); 
}

int main(){
	int n; 
	cin >> n;
	if(ktnt(n)){
		cout << n <<" la so nguyen to" << endl; 
	}
	else {
		cout << n <<" ko la so nguyen to " << endl;
	}
	return 0;
}