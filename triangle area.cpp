#include <iostream>
#include <cmath>
using namespace std;
class vertex{
    double a;     //x-coordinate of a vertex
    double b;     //y-coordinate of a vertex
public:
    vertex(double x,double y):a(x),b(y){}     //constructor to initialize the vertex
    void getdata(void){
        cout<<a<<" "<<b<<endl;
    }
    double dist(){
        double temp;
        temp=sqrt(a*a+b*b);
        return temp;
    }                               //distance of  a vector from the origin

    double operator + (const vertex &v){
        vertex temp(a,b);
        double distance;
        temp.a = a - v.a;
        temp.b = b - v.b;
        distance = temp.dist();
    }                               //operator overloading to find distance between two vector
};

int main(){
    vertex vertices(2.0,3.0);
    vertex vertice(5.0,4.0);
    double x;
    x=vertices + vertice;
    cout<<x<<endl;
    return 0;


}
