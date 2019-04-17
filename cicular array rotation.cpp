#include <iostream>
using namespace std;
int main(){
    int n,k,q;
    cin>>n>>k>>q;
    int test[n],M[q],Copy[n];

    for(int i=0;i<n;i++){
    cin>>test[i];

    }
    for(int i=0;i<q;i++){
        cin>>M[i];
    }

    for(int j=0;j<k;j++){
            Copy[0]=test[n-1];
        for(int i=0;i<n-1;i++){
            Copy[i+1]=test[i];

        }
        for(int i=0;i<n;i++){
            test[i]=Copy[i];
        }
    }
    for(int i=0;i<q;i++){
        cout<<test[M[i]]<<endl;
    }
    return 0;
}
