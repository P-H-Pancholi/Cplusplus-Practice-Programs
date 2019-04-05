#include <iostream>
using namespace std;
int main(){
    int n,countup=0,countdown=0,Count=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=='U'){
            countup++;
        }
        else{countdown++;}
        if(countup==countdown){
            Count++;
        }

    }
    cout<<Count<<endl;


 return 0;

}
