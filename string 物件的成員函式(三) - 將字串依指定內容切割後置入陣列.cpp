/*#include<iostream>
#include<string>

using namespace std;

int main(){
	string s1 = "I love java I really love java java is good ";
	string originword = "java";
	string replaceword = "c++" ;
	
	do{
		size_t st = s1.find(originword);
		if(st == string::npos){
			break;
		}
		s1.replace(st,originword.size(),replaceword);
	}while(true);
	cout<<s1<<endl;
} */

#include<iostream>
#include<string>

using namespace std;

int main(){
	string s1 = "c,c++,java";
	string s2 = ",";
	
	int count = 0;
	size_t startPos = 0;
	do {
	
		size_t st = s1.find(s2,startPos);
		if(st == string::npos){
			break;
		}
		count++;
		startPos = st + s2.size();
	}while(true);

	cout<<"-----"<<endl;
	cout<<count<<endl;

	string word[count + 1];	
	startPos = 0;
	for(int i = 0;i<=count ;i++){
		s1.find(s2,startPos);
		word[i] = s1.substr(startPos, st - startPos);
		startPos = st+1;
		
		for(int i =0;i<=count;i++ ){
			cout<<word[i]<<endl;
		}
		
	} 
	
}
