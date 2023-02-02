#include<iostream>
#include<string>

using namespace std;
/*
int main(){
	
	int year = 1;
	while(year!= 0){
		
		cout<<"enter a year:";
		cin>>year;
		
		bool answer = false;
		if(year % 400 == 0 && year % 100 != 0 ||year%4 == 0){
			answer = true;
		}
		else{
			
		}
		if(answer){
			if(year!=0){
				cout<<"leap year"<<endl;
			}
			else{
				cout<<"exit"<<endl;
			}
			
		}
		
		else {
			cout<<"not a  leap year" <<endl;
		}
		}
	
	
}*/
/*
int main(){
	
	int year = 1;
	while(year!= 0){
		
		cout<<"enter a year:";
		cin>>year;
		
		bool answer = false;
		if(year % 400 == 0 && year % 100 != 0 ||year%4 == 0){
			answer = true;
		}
		else{
			
		}
		if(year!=0){
			if(answer){
					cout<<"leap year"<<endl;
	
			}
			
			else {
				cout<<"not a  leap year" <<endl;
			}
		}
		else{
			cout<<"exit"<<endl;
				}
}
	
}*/
/*
int main(int argc,char**argv){
	
		char c = 'y' ;
		while(c=='Y'||c=='y'){
			int year ;
			cout<<"enter a year:";
			cin>>year;
			if(year == 0){
				cout<<"exit"<<endl;
				break;
			}
			bool answer = false;
			if(year % 400 == 0 && year % 100 != 0 ||year%4 == 0){
				answer = true;
			}
			
			if(answer){
						cout<<"leap year"<<endl;
		
				}
				
				else {
					cout<<"not a  leap year" <<endl;
				}
			
		cout<<"enter y or Y to porcess";
		cin>>c;
		
	}

	}*/
	
	
int main(int argc,char**argv){
	
		int count;
		while(true){
			char c = 'y' ;
			if (c=='y'||c=='Y'){
					int year ;
			cout<<"enter a year:";
			cin>>year;
			if(year == 0){
				cout<<"exit"<<endl;
				break;
			}
			bool answer = false;
			if(year % 400 == 0 && year % 100 != 0 ||year%4 == 0){
				answer = true;
				count++;
			}
			
			if(answer){
						cout<<"leap year"<<endl;
					
		
				}
				
				else {
					cout<<"not a  leap year" <<endl;
						
				}
			}
		
	
		cout<<"count"<<count<<endl;	
		cout<<"enter y or Y to porcess";
		cin>>c;
		
		
	}

	}
	
