#include<iostream> 
#include<string>

using namespace std;

int main(){
	
	string name ;
	string password ;
	int count = 1;
	bool login = false;
	do{
		
		cout<<"enter your name=>";
		cin>>name;
		cout<<"enter your password=>";
		cin>>password;
		if(name == "abcd"  && password.compare("1234") == 0 ){
			cout<<"welcome"<<endl;
			login = true;
			break;
			
		}else{
			
			if(count <= 2){
				cout<<"wong"<<endl;
				count++;
			}else{
				cout<<"over three times";
				break;
				//return 0;  
			}
			
			
	}
	}while(!login);
	
	if(login){
		cout<<"do something"<<endl;
	}else{
		cout<<"bye bye"<<endl;
	}
		
	
	
	

	
	
	
}

