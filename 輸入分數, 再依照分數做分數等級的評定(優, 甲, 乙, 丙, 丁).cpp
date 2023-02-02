#include<iostream>
#include<string>

using namespace std;

int main(){
	int grads;
	cout<< "enter your grads:";
	cin>>grads;
	
	string a="µL";
	
	if(grads>100||grads<0){
			a="¤À¼Æ¿ù»~";
		}
		else if (grads>=90){
		a="¥Ò";
	}
		else if( grads>=80){
		a="¤A";
	}
		else if( grads>=70){
		a="¤þ";
	}
		else {
		a="¤B";
	
	}
	
	
	
	cout<< a << endl; 
	return 0;
}

