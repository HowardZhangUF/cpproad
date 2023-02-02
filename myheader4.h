 #include <cstddef>
 #include<iostream>
 using namespace std;
 
 struct circle{
	int radius;
	int height;
	double area;
	double girth;
	double volume;
};

double getgrith(struct circle c);
double getarea(struct circle c);
double volume(struct circle c);
void setradius(struct circle * c,int radius);
void setheight(struct circle * c,int height);
void setarea(struct circle * c);
void setgirth(struct circle * c);
void setvolume(struct circle * c);
void setallvalue(struct circle * c,int radius,int height);
//int compare(struct circle c1,struct circle c2);
int comparepointer(struct circle * c1,struct circle * c2);
int compare(struct circle & c1,struct circle & c2);
struct circle copycircle(struct circle c1);
void copycircle1(struct circle * c1,struct circle * c2);
struct circle & copycircle2(struct circle & c1, struct circle & c2);
void showinfo(circle c1);





double getgrith(struct circle c){
	return c.radius * 2 * 3.14159;
}




double getarea(struct circle c){
	return c.radius*c.radius*3.14159;
}
double getvolume(struct circle c){
	return c.area * c.height;
}

void setradius(struct  circle * c ,int radius){
	if(c == NULL){
		return;
	}
	if(radius >= 1 && radius < 10000){
		c->radius = radius;
	}
	else{
		c->radius = 1;
	}
	setgirth(c);
	setarea(c);
}

void setheight(struct circle * c,int height){
	if(c == NULL){
		return;
	}
	if(height >= 1 && height < 10000){
		c->height = height;
	}
	else{
		c->height = 1;
	}
	setvolume(c);
}
void setarea(struct circle * c){
	if(c == NULL){
		return;
	}
	c->area = c->radius * c->radius * 3.14159;
	
}

void setgirth(struct circle *c){
	if(c == NULL){
		return;
	}
	c->girth = c->radius * 2 * 3.14159;
}

void setvolume(struct circle * c){
	if(c == NULL){
		return;
	}
	
	c->volume = c->area * c->height;
}
void setallvalue(struct circle * c,int radius,int height){
	if(c == NULL){
		return;
	}
	setradius(c,radius);
	setheight(c,height);
}

/*int compare(struct circle c1,struct circle c2){
	if(c1.radius > c2.radius){
		return 1;
	}
	else if(c1.radius < c2.height){
		return -1;
	}
	else if(c1.height > c2.height){
			return 1;
		}
		else if(c1.height < c2.height){
			return -1;
		}
		
	
	else{
			return 0; 
	}
	}*/


int comparepointer(struct circle * c1,struct circle * c2){
	if(c1->radius > c2->radius){
		return 1;
	}
	else if(c1->radius < c2->height){
		return -1;
	}
	else if(c1->height > c2->height){
			return 1;
		}
		else if(c1->height < c2->height){
			return -1;
		}
		
	
	else{
			return 0; 
	}
	}	

int compare(struct circle & c1,struct circle & c2){
	if(c1.radius > c2.radius){
		return 1;
	}
	else if(c1.radius < c2.height){
		return -1;
	}
	else if(c1.height > c2.height){
			return 1;
		}
		else if(c1.height < c2.height){
			return -1;
		}
		
	
	else{
			return 0; 
	}
	}

struct circle copycircle(struct circle c1){
	struct circle c2;
	setallvalue(&c2,c1.radius,c1.height);
	return c2;
}

void copycircle1(struct circle * c1,struct circle * c2){
	setallvalue(c2,c1->radius,c1->height);
	
}

struct circle & copycircle2(struct circle & c1,struct circle & c2){
	setallvalue(&c2,c1.radius,c1.height);
	return c2;
}

void showinfo(circle c1){
	cout<<c1.radius<<"\t"<<c1.height<<"\t"<<c1.area<<"\t"<<c1.girth<<"\t"<<c1.volume<<endl;
	
}

