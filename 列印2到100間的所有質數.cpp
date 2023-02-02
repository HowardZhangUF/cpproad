#include<iostream>
using namespace std;

int main(){
	
	
	
	
	for(int a = 2;a<=100;a++){
		bool answer = true;
		for(int b =a-1;b>1;b-- ){
			if(a%b==0){
				answer = false ;
				break;
			}
			
	}
	
	
	if (answer){
		cout<<a<<"\t";
	}
	
	
	
}
}
