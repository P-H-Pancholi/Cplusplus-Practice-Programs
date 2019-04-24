#include <iostream>
using namespace std;
int main(){
    int n,i,Max=0,Count=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    Max=A[0];
    for(i=0;i<n;i++){
        if(A[i]>Max) Max=A[i];
    }
    for(i=0;i<n;i++)
    {
        if(A[i]==Max) Count++;
    }
    cout<<Count<<endl;
    return 0;
}

