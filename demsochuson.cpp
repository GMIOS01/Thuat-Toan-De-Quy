#include <iostream>

using namespace std;

int count=0;

int CountNum(int n,int count){
	if (n==0){
		return count;
	}
	else {
		return CountNum(n/10,count+1);
	}
}

int main(){
	int n;
	cin >> n;
	cout << CountNum(n,count) << endl;
	return 0;
}