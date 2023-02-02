#include<iostream>
#include <cstddef>
#include<D:\OneDrive\桌面\cpp road\myheader4.h>
using namespace std;

int main(){
	
	int radius[] = {1,2,3,4,5,6,7,8,9,10};
	int height[] = {1,2,3,4,5,6,7,8,9,10};
	
	struct circle cir[10];
	
	for(int i = 0;i<10;i++){
		setallvalue(&cir[i],radius[i],height[i]);
		
	}
	
	for(int i = 0;i<10;i++){
		
		 showinfo(cir[i]);
		
	}
	cout<<"---------------------------------------------"<<endl;
	struct circle * pointer[10];
	for(int i = 0;i<10;i++){
		pointer[i]= new struct circle;
		setallvalue(pointer[i],radius[i],height[i]);
	}
	for(int i = 0;i<10;i++){
		showinfo(*pointer[i]);
	}
	
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
/*	struct circle circlea;
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
	cout<<compare(*p1,*p2)<<endl;  */
	struct circle c1;
	setallvalue(&c1,10,20);
	struct circle c2 = copycircle(c1);
	cout<<getarea(c1)<<endl;
	cout<<getarea(c2)<<endl;
	struct circle * c3 = new struct circle;
	copycircle1(&c1,c3);
	cout<<getarea(*c3)<<endl;
	
	
	setradius(&c1,100);
	copycircle2( c1, c2);
	cout<<getarea(c2)<<endl;
	
}
