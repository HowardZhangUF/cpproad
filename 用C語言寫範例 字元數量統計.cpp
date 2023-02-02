#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	char words[2000];
	
	cin.get(words,20000);
	cout<<words<<endl;
	
	
	/*int uppercount , lowercount , spacecount , othercount,numbercount;
	uppercount = lowercount = spacecount = othercount = numbercount = 0 ;
	
	for(size_t i = 0 ; i<strlen(words);i++){
		if(words[i]>='A'&&words[i]<='Z'){
			uppercount++;
		}
		else if(words[i] == ' '){
			spacecount++;
		}
		else if(words[i]>=97&&words[i]<=97+26){
			lowercount++;
		}
		else if(words[i]>='0'&&words[i]<='9'){
			numbercount++;
		}
		else{
			othercount++;
		}
	} 
	  
	cout<<uppercount<<endl;
	cout<<spacecount<<endl;
	cout<<lowercount<<endl;
	cout<<othercount<<endl;
	cout<<numbercount<<endl;
	return 0;*/
}
