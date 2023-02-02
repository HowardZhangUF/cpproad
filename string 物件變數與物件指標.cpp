 #include<iostream>
 #include<string>
 
 using namespace std;
 
 int main(){
 	string s1;
 	s1 = "1234";
 	
 	string s2 = "4567";
 	string s3("asdq");
 	cout<<s1<<' '<<s2<<" "<<s3<<endl;
 	
 	string * ps1;
 	ps1 = &s1;
	string * ps2 = new string ;
	string *ps3 = new string("ing");
	*ps2 = "568";
	cout<<*ps1<<" "<<*ps2<<" "<<*ps3; 
 }
