#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int year;
	cout<<"enter a year:";
	cin >> year;
	bool answer=false;
	if(year%4 ==0&&year%400 ==0 || year%4 ==0&&year%100!=0){
			answer= true;
		}

	
	if (answer){
		cout<< "is a leap year";
	}
	if(!answer){
		cout << "not a leap year";
	}
	return 0;
}
