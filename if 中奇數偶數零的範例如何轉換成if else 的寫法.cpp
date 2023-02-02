#include<iostream>
#include<string>

using namespace std;

int number;
int main(){
	cout<< "enter a number:";
	cin>> number;
	
	
	int a = 1;
	if (number % 2 == 1){
		a = 2;
	}
		else {
		
			if (number == 0){
			a = 0;
		}
	}
	
	if(a==1){
		cout<<"even"<<endl;
	}
	if(a==2){
		cout<<"odds"<<endl;
	}
	if(a==0){
		cout<<"0"<<endl;
		
	}
}
