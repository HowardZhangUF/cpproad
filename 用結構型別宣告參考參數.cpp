#include<iostream>
#include <cstddef>
#include<D:\OneDrive\桌面\cpp road\myheader4.h>
using namespace std;

int main(){
	/*struct circle variablea;
	variablea.radius = 10;
	cout<<variablea.radius<<endl;
	
	circlea.radius = 10;*/
	
/*	struct circle circlea;
	circlea.radius = 10;
	changevalue(&circlea,-1);
	circlea.height = 20;
	circlea.girth = getgrith(circlea);  
	circlea.area = getarea(circlea);
	circlea.volume = getvolume(circlea);
	cout<<circlea.girth<<endl;*/
/*	cout<<circlea.area<<endl;*/
	
	/*struct circle * pointera = new struct circle;
	setallvalue(pointera,10,20);
	cout<<pointera->radius<<endl;
	cout<<pointera->height<<endl;
	cout<<pointera->girth<<endl;
	cout<<pointera->area<<endl;
	cout<<pointera->volume<<endl;
	
	cout<<"-----------------傳旨呼叫--------------------------------------"<<endl;
	struct circle circlea; 
	setallvalue(&circlea,10,20);
	cout<<circlea.girth<<endl;
	cout<<circlea.area<<endl;
	cout<<circlea.volume<<endl; 
	
	cout<<"-----------------指標缺陷--------------------------------------"<<endl;
	struct circle * pointerb = NULL;
	setallvalue(pointerb,10,20);
	 if(pointerb != NULL) {
		cout<<pointerb->girth<<endl;
		cout<<pointerb->area<<endl;
		cout<<pointerb->volume<<endl; 
	}
	cout<<"endl"<<endl;*/
	struct circle circlea;
	struct circle circleb;
	setallvalue(&circlea,11,20);
	setallvalue(&circleb,11,20);
	cout<<compare(circlea,circleb)<<endl;
	cout<<comparepointer(&circlea,&circleb)<<endl;
	
	struct circle * p1 = new struct circle;
	struct circle * p2 = new struct circle;
	p2 = NULL;
	setallvalue(p1,11,20);
	setallvalue(p2,11,20);
	cout<<comparepointer(p1,p2)<<endl;	
	cout<<compare(*p1,*p2)<<endl;  
}
