#include <iostream>
#include <string.h>

using namespace std;

bool check(string s1,string s2, int i=0,int j=0){
	if (i==s1.size()){
		return true;
	}
	if (j==s2.size()){
		return false;
	}
	return(s1[i]==s2[j]) ? check(s1,s2,i+1,j+1) : check(s1,s2,i,j+1);
}

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(check(s1,s2)){
		cout << "s1 la xau con" << endl;
	} else cout << "s1 ko la xau con" << endl;
	return 0;
}						