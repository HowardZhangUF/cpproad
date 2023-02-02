#include<iostream>
using namespace std;


void showinfo();
void showyear();
void showyear1();
void showvalue(int a = 1);
void showtotal(int a,int b);
void changeArrayValue(int a[], int length);
void changeValue(int a);


int getTotal();

void showinfo(){
	cout<<"howard"<<endl;
	cout<<"UF"<<endl; 	
}

void showyear(){
	int year;
	cout<<"enter year:";
	cin>>year;
	cout<<year<<endl;
}
void showyear1(int year){
	if(year<1000||year>3000){
		return ;
	}
	cout<<"year:"<<year<<endl;
}

int getTotal(){
	int total = 0;
	int j;
	int k;
	cout<<"enter begin:"<<endl;
	cin>>j;
	cout<<"enter end"<<endl; 
	cin >>k;
	if(j>=k){
		return j;
	}
	for(int i = j;i <= k;i++){
		total += i;
		cout<<"total"<<total<<endl;
	}return total;
}

void showvalue (int a){
	cout<<a<<endl; 	
}
void showtotal(int a,int b){
	cout<<a+b<<endl;
}

int changevalue(int a){
	a += 100;
	return a ;
} 

void changeValue(int a){
	a+=100;	
}

void changeArrayValue(int a[], int length){
	for(int i = 0;i < length;i++){
	 	a[i] += 100;	
	}
	
}

