#include<iostream>
using namespace std;


void showvalue();
void passbypoint();

int * getaddressA();
int * getaddressB();
int * getaddressc();
int * getaddressd(int * p);
const int * getaddresse(int * p);
///////////////////////////////////////////////////////////////////
void showvalue(int * p){
	cout<< *p <<endl;
}

void passbypoint(int * point){
	*point +=100;
}

int * getaddressA(){
	int * p  = new int;
	*p = 100;
	return p;
	
}

int * getaddressB(){
	return new int;
}

/*int * getaddressc(){
		int p = 8;
		return &p ;
	}*/
	
/*int * getaddressd(int * p){
	*p = 100;
	return p;
}*/	


const int * getaddresse(const int * p){
	int * q = new int; 
	*q = *p;
	*q += 100;
	return q;
}	
