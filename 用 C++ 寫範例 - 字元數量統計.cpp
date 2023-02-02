#include<iostream>
#include<string> 
using namespace std;

int main(){
/*	string sb = "it is to emberrassing/humiliating to play so loud at library.";
	char * st = "it is to emberrassing/humiliating to play so loud at library.";
	string::operator stt = (st);
	string operator  = (sb);
	
	cout<<string operator  = (st);<<endl;
	cout<<sbb<<endl;*/
	
	char * word = new char[2000];
	cin.getline(word,2000);
	string sword(word);
	
	int a,b,c,d,e;
	a=b=c=d=e=0;
	
	for(size_t i;i<sword.size();i++){
		char x = sword[i];
		
		if(x>=65&&x<='Z'){
			a++;
		}else if(x >= 97 && x <='z'){
			b++;	
		}else if(x>=48&&x<='9'){
			c++;
		}else if(x==' '){
			d++;
		}else{
			e++;
		}
	
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;	 
	cout<<d<<endl;
	cout<<e<<endl;		
}
