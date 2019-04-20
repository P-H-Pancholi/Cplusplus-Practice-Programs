#include <iostream>
using namespace std;
int main(){
    int n,likep,sharep=5,clike=0;
    cin>>n;
    for(int i=0;i<n;i++){
            likep = sharep/2;
            sharep=likep*3;
            clike=likep+clike;
    }
    cout<<clike;
    return 0;

}
