#include<iostream>
#include<string>

using namespace std;

int main(){
	int grads;
	cout<< "enter your grads:";
	cin>>grads;
	
	string a="�L";
	
	if(grads>100||grads<0){
			a="���ƿ��~";
		}
		else if (grads>=90){
		a="��";
	}
		else if( grads>=80){
		a="�A";
	}
		else if( grads>=70){
		a="��";
	}
		else {
		a="�B";
	
	}
	
	
	
	cout<< a << endl; 
	return 0;
}

