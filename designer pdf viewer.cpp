#include <iostream>
#include<cstdio>

using namespace std;
int main(){
    int a[26];
    int i,n,Max;
    string s;
    int *p;
    i=97;

    for(i=97;i<123;i++)
    {
      cin>>a[i];


    }
    cout<<"Enter The string"<<endl;
    cin>>s;

    n=s.length();
    p=new int[n];
    int ans[n];
    for(i=0;i<n;i++){
        p[i]=s[i];
        for(int k=97;k<123;k++){
            if(p[i]=k){
                ans[i]=a[k];
            }
        }
    }
    Max=ans[0];
    for(i=1;i<n;i++){
            if(ans[i]>Max){
                Max=ans[i];
            }

    }



    cout<<n*Max<<endl;
    return 0;








return 0;



}
