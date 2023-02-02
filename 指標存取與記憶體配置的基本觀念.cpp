#include<iostream>
using namespace std;

int main(){
	int a ;
	a = 8;
	cout<<a<<endl; 
	
	int * p;
	p = &a;
	cout<< p<<endl;
	
	*p = 10;
	cout<<*p<<endl;
	cout<<a<<endl;
	
	int * q = &a;
	*q = 20;
	
	cout<< a<<endl;
	cout<< *p<<endl;
	cout<< p<<endl;
	
	 int * r;
	 r = new int ;
	 *r = 100;
	 cout<<r<<endl;
	 cout<< *r<<endl;
	 
	 int * s = r;
	 *s = 200;
	 cout<< *r <<endl;
	 
	 delete r;
	 cout<<r<<endl;
	 cout<<*r<<endl;
	 
	 int * const m = new int;
	 *m = 100;
	 *m = 200;
	 cout<<*m<<endl;
	 cout<<m<<endl;
	// delete m;
//	 m = new int;
	const int *n = m;
	//*n = 100;
	cout<<*n<<endl;
	 
	 
} 

