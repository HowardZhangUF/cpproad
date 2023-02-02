class shape{
	int area;
	int girth;
protected:
	void setarea(int a);
	void setgirth(int g);
public: 
	shape(){
		area = 10;
		girth = 10;
	}
	int getarea();
	int getgirth();
	
};
int shape::getarea(){
	return area;	
}

int shape::getgirth(){
	return girth;
}
void shape::setarea(int a){
	area = a;
}
void shape::setgirth(int g){
	girth = g;
}

class circle : public shape{
	int  radius;
	int area;
public:
	circle(){
		radius = 0;
	}
	void setradius(int r);
	//void setgirth(int r);
};

void circle::setradius(int r){
	if(r>=0 && r<=100){
		radius = r;
		setarea(radius * radius *3.1415926) ;
		setgirth(radius * 2 *3.1415926);
	}	
}
 
class retangle : public shape{
	
}; 
