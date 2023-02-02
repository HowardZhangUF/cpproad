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
	
	struct circle * pointera = new struct circle;
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
	cout<<"endl"<<endl;
	
}
