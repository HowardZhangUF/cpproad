int & getreference(int & r);
int *& getreference1(int *&c);
int getvalue(const int b);
int getvalue1(const int &b);





int & getreference(int & r){
	 r += 10;
	return r;
}


int *& getreference1(int *& c){
	*c += 100;
	return c;
}
int getvalue(const int b){
	return b*b;
}

int getvalue1(const int &b){
	return b*b;
}
