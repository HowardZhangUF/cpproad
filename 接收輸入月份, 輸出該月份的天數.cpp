/* 
#include<iostream>
#include<string>

using namespace std;

int main(int argc,char**argv){
	int  month;
	cout<<"enter your month: ";
	cin>>month;
	int days;
	switch(month){
		case 1:
			days =31;
			break;
		case 2:
			days =30;
			break;
		case 3:
			days =31;
			break;
		case 4:
			days =30;
			break;
		case 5:
			days =31;
			break;
		case 6:
			days =30;
			break;
		case 7:
			days =31;
			break;
		case 8:
			days =31;
			break;
		case 9:
			days =30;
			break;
		case 10:
			days =31;
			break;
		case 11:
			days =30;
			break;
		case 12:
			days =31;
			break;
		default:
		 	days= -1;
		
	}
	if(days!=-1){
		cout<<days<<endl;
		}
		else{ cout<< "wrong month";
	}
	return 0;
}*/ 

#include<iostream>
#include<string>

using namespace std;

int main(int argc,char**argv){
	int  month;
	cout<<"enter your month: ";
	cin>>month;
	int days = 31;
	switch(month){
	
		case 2:
		case 4:
		case 6:
		case 9:
		case 11:
		
			days =30;
			break;
		
		
	}
	if(month<=12&&month>=1){
		cout<<days<<endl;
		}
		else{ cout<< "wrong month";
	}
	return 0;
}

