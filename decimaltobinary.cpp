#include <iostream>
using namespace std;
void binary(int n){
	if (n == 0){
		cout << n;
	}
	else{
		int temp = n % 2;
		n = n/2;
		binary(n);
		cout << temp;
	}
}
int main(){
    int a;
    cin >> a;
    binary(a);
	return 0;
}
