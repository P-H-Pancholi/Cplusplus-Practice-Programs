#include <iostream>
using namespace std;
int main()
{
    int a[3],b[3],c[2];
    int alice=0,bob=0,i;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i]) alice++;
        else if(a[i]<b[i]) bob++;
        else alice=alice, bob=bob;
    }
    c[0]=alice;
    c[1]=bob;
    cout<<c[0]<<" "<<c[1]<<endl;
    return 0;
}
