#include <iostream>

using namespace std;

int max(int a[],int n){
	if(n==1){
		return a[0];
	}
	else if (a[n-1] > max(a,n-1)){
		return a[n-1];
	}
	else {
		return max(a,n-1);
	}
}
	
int main(){
	int n;
	cin >> n;
	int a[n-1];
	for(int i=0;i<n;i++){
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	cout << max(a,n) << endl;
	return 0;
}