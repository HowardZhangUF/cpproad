/*class shape{
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
}*/ 

class circle {
	int  radius;
	//int area;
public:
	void setradius(int r);
	int getradius();
	
	circle(){
		radius = 0;
	}
	circle(int r){
		radius = r;
		
	}
};



class retangle {
	int length;
	int width;
public:
	void setlength(int l);
	void setwidth(int w);
	int getlength();
	int getwidth();
	retangle(){
		length = 0;
		width = 0;
	}
};

void retangle::setwidth(int w){
	if(w>=0 && w<=100){
		width = w;
		
	}	
}

void retangle::setlength(int l){
	if(l>=0 && l<=100){
		length = l;
		
	}	
}

void circle::setradius(int r){
	if(r>=0 && r<=100){
		radius = r;
		
	}	
}
