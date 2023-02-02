 #include<iostream>
 using namespace std;
 #include<D:\OneDrive\орн▒\cpp road\clc.h>
 int main(){
 	
 	circle c1;
 	c1.radius = 10;
 	cout<<c1.getgrith()<<endl;
 	
	circle c2;
 	c2.radius = 20;
 	cout<<c2.getgrith()<<endl;
 	
 	cout<<"c1=>"<<&c1<<endl;
 	cout<<"c2=>"<<&c2<<endl;
 	//c1 = c2
 	cout<<"---------------------------------------------------"<<endl;
 	cout<<c1.getgrith()<<endl;
 	cout<<"c1=>"<<&c1<<endl;
 	cout<<"c2=>"<<&c2<<endl;
 	cout<<"------------------------------------------------------"<<endl;
 	int i = c1.compare(c2);
 	if(i>0){
 		cout<<"bigger"<<endl;
	 }else if(i == 0){
	 	cout<<"same"<<endl;
	 }else{
		cout<<"smallar"<<endl;	 	
	 }
 	
 	
 	return 0;
 }
