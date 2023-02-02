#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	/*char * dest1 = "12345";
	char * dest2 = new char[11];
	char temp[11];
	char * dest3 = temp;
	char * dest4 = dest2;
	cout<<dest1<<endl;
	cout<<dest2<<endl;
	cout<<dest3<<endl;
	cout<<dest4<<endl;
	const char * sou1 = "12345";
	const char * sou2 = new char[11];
	char temp*/
	
	/*char worldA[11];
	strcpy(worldA , "12345");
	cout<<worldA<<endl;
	
	*/
	
	/*char * a = new char[20];
	strcpy(a,"I am Mary");
	char name[] = "john";
	strcpy(a + strlen(a) - strlen(name),name);
	cout<<a<<endl;*/
	
	//void pointer case 
	/*void * pv;
	int a = 9700;
	pv = &a;
	cout<<pv<<endl;
	cout<<*(int*)pv<<endl;
	
	char b = 'a';
	pv = &b;
	cout<<pv<<endl;
	
	cout<<*(char*)pv<<endl;
	
	int * pz = new int;
	*pz = 123;
	pv = pz;
	cout<<*(int*)pv<<endl;*/ 
	
   /*char wordA[] = "123456789"; 
   char wordB[] = "abcde";
   char * temp = (char*)memcpy(wordA+3,wordB+2,3);
    
   cout<<wordA<<endl; 
   cout<<temp<<endl; 
   
   int z = 98;
   memcpy(wordA,&z,1);
   cout<<wordA<<endl;
   
   memcpy(&z,wordA+1,1);
   cout<<z<<endl;*/
   
   /*char wordA [] = "1234";
   
   cout<<strcat(wordA,"5678")<<endl;
   */
   
  /* char worda[] = "12345";
   char wordb[] = "abcd";
   cout<<strcmp(worda,wordb)<<endl;  */

	/*char worda[] = "123456789";
	char * pc = strstr(worda,"456");
	//cout<<pc<<endl;
	strcpy(pc,"999999");
	//cout<<pc<<endl;
	//cout<<worda<<endl;
	
	cout<<strcmp(strstr(worda,"456"),"456789")<<endl;*/
	char a[] = "abc,cde,dfg,hij";
	
	char * pworda = new char[strlen(a)];
	strcpy(pworda,a);
	char * tok = strtok(pworda,",");
	while(tok != NULL){
		cout<<tok<<endl;
		tok = strtok(NULL,",");
	} 
	cout<<a<<endl;
	

}
