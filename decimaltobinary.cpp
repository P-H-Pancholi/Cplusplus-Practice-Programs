#include <iostream>
#include<string>
#include<sstream>
using namespace std;

void binary(int n){
	ostringstream s1;
	int r = n%2;
	int q = n/2;
	string s;
	
	if(n==1 || n==0){
		s1 << n;
		s = s + s1.str();
		cout << s;	
	}else{
		s1 << r;
		s = s + s1.str();
		binary(q);
		cout << s;	
	}
	
}

int main(){
    int a;
    cin >> a;
    binary(a);
    return 0;
}
