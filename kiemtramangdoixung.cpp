#include <iostream>

using namespace std;

int check(int a[],int left,int right){
	if (left < right){
		if (a[left]!=a[right]){
			return 0;
		}
		else {
			return check(a,left+1,right-1);
		}
	}
	return 1;
}

int main(){
	int n;
	cin >> n ;
	int left=0,right=n-1;
	int a[n];
	for (int i = 0;i<n;i++){
		cout << "a[" << i << "]=" ;
		cin >> a[i];
	}
	if(check(a,left,right)==1){
		cout << "Day la mang doi xung" << endl;
	} else cout << "Ko phai mang doi xung" << endl;
	return 0;
}
