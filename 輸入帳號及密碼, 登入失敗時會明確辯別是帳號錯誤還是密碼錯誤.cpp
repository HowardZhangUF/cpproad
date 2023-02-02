#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	cout<<"Please enter your name =>";
	string name;
	cin>>name;
	
	cout<<"Please enter your password =>";
	string password;
	cin>>password;
	
	int answer = 0;
	if(name != "abcd"){
		answer = 1;
	}
	if (name == "abcd" && password != "1234"){
		answer = 2;
	}
	if(answer == 0){
		cout<<"welcome"<<endl;
	}
	if(answer == 1){
		cout<<"name is wrong"<<endl;
	}
	if(answer == 2)	{
		cout<<"password is wrong"<<endl;
	}
	return 0;
} 

