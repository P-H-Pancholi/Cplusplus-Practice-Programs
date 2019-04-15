#include <iostream>
#include <cmath>
using namespace std;
class catmouse{
public:
    int x,y,z;

};
int main(){
    int n;
    cin>>n;
    catmouse arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].x>>arr[i].y>>arr[i].z;
    }
    for(int i=0;i<n;i++){
    if(abs(arr[i].x-arr[i].z)>abs(arr[i].y-arr[i].z)){

        cout<<"Cat B"<<endl;

    }
    if(abs(arr[i].x-arr[i].z)<abs(arr[i].y-arr[i].z)){
        cout<<"Cat A"<<endl;

    }
    if(abs(arr[i].x-arr[i].z)==abs(arr[i].y-arr[i].z)){
        cout<<"Mouse C"<<endl;

    }
    }


return 0;



}
