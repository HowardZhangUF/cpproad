#include<iostream>
#include<D:\OneDrive\орн▒\cpp road\myheader3.h>
using namespace std;

int main(){
	int r = 10;
	int & p = getreference(r);
	cout<<r<<endl;
	cout<<p<<endl;
	
	int * w = new int;
	*w = 1;
	int * q  = getreference1(w);
	cout<<*q<<endl; 
	
	
	int a = 5;
	int c = getvalue(a);
	cout<<c<<endl;
	
	int g =5;
	int h = getvalue1(g);
	cout<<h<<endl;
	 
} 
