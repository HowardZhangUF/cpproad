#include<iostream>
using namespace std;
#include<D:\OneDrive\орн▒\cpp road\clc.h>

int main(){
	/*circle * pc1;
	circle * pc2 = new circle;
	
	pc1 = new circle;
	
	cout<<pc1<<endl;
	cout<<pc2<<endl; 
	cout<<"---------------------------------------------------"<<endl;
	
	pc1 = pc2;
	
	cout<<pc1<<endl;
	cout<<pc2<<endl; 
	cout<<"---------------------------------------------------"<<endl;
	circle c;
	circle * c3 = &c;
	cout<<&c<<endl;
	cout<<c3<<endl;
	
		circle * c1 = new circle();
	c1->radius = 10;
	cout<<c1->getgirth()<<endl;
	
	
	cout<<"---------------------------------------------------"<<endl;
	circle c;
	c.radius = 20;
	
	
	int i = c1->compare1(&c);
	cout<<i<<endl;
	return 0;
	 */

	circle * c1 = new circle();
	c1->radius = 10;
	circle c;
	c.radius = 10;
//c.radius = 123;
	c1->copy2(&c);
	cout<<c.radius<<endl;
	
	cout<<"---------------------------------------------------"<<endl;
	
/*	circle * pc2 = c1->copy3();
	cout<<pc2->radius<<endl;*/
	
	circle * c3 = new circle();
	int i = c1->compare1(c1->copy3(c3));
	cout<<i<<endl;
	delete c1;
	
	delete c3;
	return 0;
	 
} 
