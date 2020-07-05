#include <iostream>
using namespace std;

void factDigitSum(int a){
	int digits[1000];
	int index = 1000;
	digits[index] = 1;
	int carry = 0;
	for(int i = 1;i <= a;i++){
		for(int j = 1000; j >= index;j--){
			digits[j] = digits[j] * i;
			digits[j] += carry;
			carry = 0;
			if(digits[j] > 9){
				carry = digits[j] / 10;
				digits[j] %= 10;
			}
		
		}
		while(carry != 0){
			int div = carry / 10;
			int mod = carry % 10;
			index -= 1;
			digits[index] = mod;
			carry = div;
		}
	}
	int sum = 0;
	for(int i = index; i <= 1000;i++){
		cout << digits[i];
		sum += digits[i];
	}
	cout << endl;
	cout << "The sum is " << sum << endl;

}


int main(){
	int n;
	cin >> n;
	factDigitSum(n);
	return 0;
}
