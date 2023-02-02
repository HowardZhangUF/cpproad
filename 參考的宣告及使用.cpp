#include<iostream>
using namespace std;

int main(){
	/*int a;
	int &b = a;
	b =100;
	cout<<a<<endl;*/
	int * c = new int ;
	int * &d = c;
	*d = 200;
	cout<<*c<<endl;
	
	
}
