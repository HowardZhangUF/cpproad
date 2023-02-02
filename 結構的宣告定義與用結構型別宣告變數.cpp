#include<iostream>
using namespace std;

struct circle{
	int radius;
	int height;
	int grith;
	double area;
	double volume;
}variablea,variableb,* pointera,* pointerb,&referencea= variablea,*&referenceb = pointera;





int main(){
	variablea.radius = 10;
	cout<<variablea.radius<<endl;
	variableb.radius = 20;
	cout<<variableb.radius<<endl;
	struct circle variablec;
	variablec.radius = 30;
	cout<<variablec.radius<<endl;
	
	cout<<"--------------------------------------"<<endl;
	cout<<"pointer"<<endl;
	
	pointera = new struct circle;
	pointerb = new struct circle;
	
	pointera->radius = 10;
	cout<<pointera->radius<<endl;
	pointerb->radius = 20;
	cout<<pointerb->radius<<endl;
	struct circle * pointerc = new struct circle;
	pointerc->radius = 30;
	cout<<pointerc->radius<<endl;
	
	cout<<"--------------------------------------"<<endl;
	cout<<"reference"<<endl;
	
	
	referencea.radius = 10;
	cout<<referencea.radius<<endl;
	
	referenceb->radius = 20;
	
	cout<<referenceb->radius<<endl;
	
	struct circle & referencec = variableb;
	referencec.radius = 20;
	cout<<referencec.radius<<endl; 
	
	struct circle *& referenced = pointerb;
	referenced->radius = 20;
	cout<<referenced->radius<<endl; 
}
