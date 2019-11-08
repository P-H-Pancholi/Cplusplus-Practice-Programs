#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int max_sum = 0;
	cin >> n;
	int A[n];
	for(int i = 0;i < n;i++){
		cin >> A[i];
	}
	for(int i = 0;i < n;i++){
		int sum = 0;
		sum = count(A,A+n,A[i]) + count(A,A+n,A[i]+1);
		if(sum > max_sum){
			max_sum = sum;
		}
	}
	cout << max_sum << endl;
	return 0;
}
