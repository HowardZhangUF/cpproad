#include<string>
#include<iostream>
#include<D:\OneDrive\орн▒\cpp road\myheader5.h> 

using namespace std;

int main(){
	cout<<"enter your number"<<endl;
	string id;
	cin>>id;
	
	bool b = checkid(id);
	if(b){
		cout<<"correct"<<endl;
	}else{
		cout<<"wrong"<<endl;
	}
	
	
}
