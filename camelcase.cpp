#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n,Count=1;
    n=s.length();
    for(int i=0;i<n;i++){
        if((s[i]>59)&&(s[i]<91)){
            Count++;
        }
    }
    cout<<Count;
    return 0;



}
