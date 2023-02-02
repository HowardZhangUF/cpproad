#include<iostream>
using namespace std;

int main(){
	/*
	for(int b = 1;b<=9;b++){
		
			for(int a = 1;a<=9;a++){
				int answer;
				answer = a*b;
				cout<< a <<"*"<<b<<"="<<answer<<"\t" ; 
		
		}
		cout<<endl;	
	}
	*/
	
	for(int b = 1;b<=9;b++){
		
			for(int a = 1;a<=9;a++){
				int answer;
				answer = a*b;
				cout<< a <<"*"<<b<<"="<<(answer>=10?"=":"= ")<<answer<<"\t" ; 
		
		}
		cout<<endl;	
	}

	
}
