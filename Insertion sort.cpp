#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
            if(arr[i]<temp){
            arr[i+1]=temp;
            }
            else{
                arr[i+1]=arr[i];

            }
    }
    for(int i=0;i<n;i++){
    cout<<arr[i];
    }


    return 0;

}
