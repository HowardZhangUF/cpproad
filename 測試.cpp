#include<string>
#include<iostream>

using namespace std;

/*int main(){
	int grads;
	cout<< "enter your grads:";
	cin>>grads;
	
	
	string s = "¤B";
	int i = grads/10;
	
	switch(i){
		case 10:
			s= "Àu";
			break;
		case 9:
			s= "Àu" ;
			break;
		case 8: 
			s= "¥Ò";
			break;
		case 7: 
			s= "¤A";
			break;
		case 6: 
			s= "¤þ";
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
	
	
	string s = "¤B";
	int i = grads/10;
	if(grads<=100&&grads>=0){
		switch(i){
			case 10:
				s= "Àu";
				break;
			case 9:
				s= "Àu" ;
				break;
			case 8: 
				s= "¥Ò";
				break;
			case 7: 
				s= "¤A";
				break;
			case 6: 
				s= "¤þ";
				break;
		
		
	}
	
		cout<<s<<endl;
	}
		else{
			cout<<"wrong score"<<endl;
		}
	
	return 0;
		
}
