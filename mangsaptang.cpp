#include <iostream>

using namespace std;

bool check(int a[],int n){
	if(n<=1){
		return true;
	}
	return a[n-1]>=a[n-2] && check(a,n-1);
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cout << "a[" << i <<"]=" ; 
		cin >> a[i];
	}
	if(check(a,n)){
		cout << "Mang tang dan" << endl;
	}else cout << "Mang ko tang dan" << endl;
	return 0;
}