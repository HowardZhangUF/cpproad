#include<string>
#include<iostream>

using namespace std;

/*int main(){
	int grads;
	cout<< "enter your grads:";
	cin>>grads;
	
	
	string s = "�B";
	int i = grads/10;
	
	switch(i){
		case 10:
			s= "�u";
			break;
		case 9:
			s= "�u" ;
			break;
		case 8: 
			s= "��";
			break;
		case 7: 
			s= "�A";
			break;
		case 6: 
			s= "��";
			break;
		
		
	}
	if(grads<=100&&grads>=0){
		cout<<s<<endl;
	}
		else{
			cout<<"wrong score"<<endl;
		}
	
	return 0;
		
}*/


int main(){
	int grads;
	cout<< "enter your grads:";
	cin>>grads;
	
	
	string s = "�B";
	int i = grads/10;
	if(grads<=100&&grads>=0){
		switch(i){
			case 10:
				s= "�u";
				break;
			case 9:
				s= "�u" ;
				break;
			case 8: 
				s= "��";
				break;
			case 7: 
				s= "�A";
				break;
			case 6: 
				s= "��";
				break;
		
		
	}
	
		cout<<s<<endl;
	}
		else{
			cout<<"wrong score"<<endl;
		}
	
	return 0;
		
}
