#include <iostream>
#include <cmath>
using namespace std;
class vertex{
    double a;    				 //x-coordinate of a vertex
    double b;    				 //y-coordinate of a vertex
public:
    vertex(){
	}							//default constructor
	void putdata(void){
		int x,y;
		cin>>x>>y;
		a=x;
		b=y;
	}							//function to input a and b
 	void getdata(void){
        cout<<a<<" "<<b<<endl;
    }							//function to display a and b
    double dist(){
        double temp;
        temp=sqrt(a*a+b*b);
        return temp;
    }                               //distance of  a vector from the origin

    double operator + (const vertex &v){
        vertex temp;
        double distance;
        temp.a = a - v.a;
        temp.b = b - v.b;
        distance = temp.dist();
    }                               //operator overloading to find distance between two vector
};
class triangle{
	vertex t_vertex[3];				//vertex of triangle
	double a,b,c;					//lenght of sides of triangle
public:
	void putdata(void){
		for(int i=0;i<3;i++){
			t_vertex[i].putdata();
		}
		a = t_vertex[0] + t_vertex[1];
		b = t_vertex[1] + t_vertex[2];
		c = t_vertex[2] + t_vertex[0];
	}									//function to input data in triangle
	void getdata(void){
		cout<<a<<b<<c;
	}
	double parameter(void){
		double temp;
		temp = a + b + c;
		return temp;
	}									//parameter of the triangle
	double cal_area(void){
	
		double s,area;
		s = parameter();
		s = s/2;
		area = sqrt(s * (s-a) * (s-b) * (s-c));   //heron's formula
		return area;
		
	}				//function to calculate the area of triangle
};
				

int main(){
	triangle v;
	double t_area;
	v.putdata();
	t_area = v.cal_area();
	cout << t_area << endl;
	
    return 0;


}

