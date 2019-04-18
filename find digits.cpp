#include <iostream>
using namespace std;
int main(){
    int n,k,Max=0,result=0;
    cin>>n>>k;
    int hurdle[n];
    for(int i=0;i<n;i++){
        cin>>hurdle[i];
    }
    Max=hurdle[0];
    for(int i=1;i<n;i++){
            if(hurdle[i]>Max){
                Max=hurdle[i];
            }


    }

    if(Max>k){
        result=Max-k;
        cout<<result<<endl;
        return 0;
    }
    else{
        cout<<'0'<<endl;
        return 0;
    }


}
