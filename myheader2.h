void changevalue(int &a);
void changevalue1(int * &a);
void changevalue(int * a);

void changevalue2(int &a){
	a+=100;
}


void changevalue1(int * &a){
	*a+=200;
}
void changevalue2(int * a){
	*a+=300;
}
