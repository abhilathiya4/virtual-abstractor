#include<iostream>
using namespace std;

class math{
	
	public : 
		virtual void calculate()=0;
		
};

class area : public math{
	
	public:
		
		int r,b,h,y,z;
		
		void calculate(){
			
			
			cout<<"enter radius : ";
			cin>>r;
			cout<<"area of circle is : "<<3.14*r*r<<endl<<endl;
			
			cout<<"enter base of triangle : ";
			cin>>b;
			
			cout<<"enter height of triangle : ";
			cin>>h;
			
			cout<<"area of triangle is : "<<0.5*b*h<<endl<<endl;
			
			cout<<"enter lenght of rectangle : ";
			cin>>y;
			
			cout<<"enter breadth of rectangle : ";
			cin>>z;
			
			cout<<"area of rectangle is : "<<b*h;
			
		}
	
};

int main(){
	
		area obj;
		obj.calculate();
		
	
	return 0;
}
