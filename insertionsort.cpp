#include <iostream>
using namespace std;
int insertionsort(int* a, int N){
	for(int i=1;i<N;i++){
		int j=i-1;
		int key = a[i];
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = key;
		for(int it = 0;it<N;it++){
			cout<<a[it]<<" ";
			}
			cout<<endl;
	}
	return 0;
}
int main(){
	int n;
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++){
		cin >> A[i];
	}
	insertionsort(A,n);
	return 0;
}
