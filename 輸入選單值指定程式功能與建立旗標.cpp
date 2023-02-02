#include<iostream>
#include<string>

using namespace std;

int main(int argc,char** argv){
	char c = '1';
	
	do{
		
		cout<<"enter c:";
		cin>>c;
	}
	while(c!= '5');{
		cout<<"enter c:";
		cin>>c;
		bool n = true;
		switch(c){
		
			case '1':
				cout << "wihtdrew"<<endl;	
				break;
			case '2':
				cout<<"saving"<<endl;
				break;
			case '3':
				cout<<"checkibg"<<endl;
				break;
			case '4':
				cout<<"other"<<endl;
				
				break;
				
			 default:
				cout<<"exit"<<endl;
				n = false;
				break;
			if(!n){
				break;
	}		
		 
	}
	
	}
	}
		
		
	
		

	
	/*
	int main(int argc,char** argv){
	char c = '1';
	
	while(c!= '5'){
		cout<<"enter c:";
		cin>>c;
		bool n = true;
		switch(c){
		
			case '1':
				cout << "wihtdrew"<<endl;	
				break;
			case '2':
				cout<<"saving"<<endl;
				break;
			case '3':
				cout<<"checkibg"<<endl;
				break;
			case '4':
				cout<<"other"<<endl;
				
				break;
				
			 default:
				cout<<"exit"<<endl;
				n = false;
				break;
					
		 
	}
	if(!n){
		break;
	}
	}
		

	}*/
	
