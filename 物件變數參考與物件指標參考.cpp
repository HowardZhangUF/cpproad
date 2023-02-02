#include<iostream>
using namespace std;
#include<D:\OneDrive\®à­±\cpp road\clc.h>
int main(){
	 /*circle c1;
	 c1.radius = 10;
	 circle & c = c1;
	 cout<<c.radius<<endl;*/ 
	 
	/* circle c1,c2;
	 c1.radius = 20;
	 c1.copy4(c2);
	 cout<<c2.getgirth()<<endl;
	 cout<<c1.compare2(c1.copy4(c2))<<endl;*/
	/* 
	 circle * c1 = new circle();
	 circle & c2 = *c1;
	 circle c3;
	// circle & c2 = c1;
	//¨ú­È*c1 
	c3.radius = 10;
	c1->radius = 10;
	cout<<c3.compare2(c2)<<endl;*/
	/*circle * c1 = new circle();
	c1->radius = 10;
	
	circle *& rpc1 = c1;
	rpc1->radius = 100;
	cout<<c1->getgirth()<<endl;*/
	
	circle c1;
	c1.radius = 10;
	circle * c = new circle();
	cout<<c1.copy5(c)<<endl;
	cout<<c1.compare3(c1.copy5(c))<<endl;
	
	return 0;
	
	 
	 
}
