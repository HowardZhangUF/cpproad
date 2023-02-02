#include<string>
using namespace std;
class circle{
	int radius;
	int height;
	string name;
public: 
	circle(){
		radius = 1;
		height = 1;
		name = "unset";
	}
	
	double getGirth();
	double getArea();
	double getVolume();
	void setRadius(int r);
	void setHeight(int h);
	void getname(string n);
	
};
	double circle::getGirth() {
		return 2 * radius * 3.1415926;
	}
	double circle::getArea(){
		return radius * radius * 3.1415926;
	}
	double circle::getVolume(){
		return getArea() * height;
	}
	void circle::setRadius(int r){
		if(r>=1&&r<=1000){
			radius = r;
		}
		
	}
  	void circle::setHeight(int h){
  		if(h >=1&&h<=100){
  			height = h;
		  }
	  }
	void circle::getname(string n){
		if(n.length()<=10&&n[0] == 'c'){
			name = n;
		}
	}  
