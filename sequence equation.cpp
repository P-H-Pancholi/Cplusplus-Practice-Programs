#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int seqarray[n],ansarray[n];
   for(int i=1;i<=n;i++){
    cin>>seqarray[i];
   }
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(seqarray[j]==i) {
                for(int k=1;k<=n;k++){
                    if(seqarray[k]==j){
                        ansarray[i]=k;
                    }
                }
        }
    }
   }
   for(int i=1;i<=n;i++){
    cout<<ansarray[i]<<endl;
   }
   return 0;
}










