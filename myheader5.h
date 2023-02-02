#include<string>
#include<iostream>
using namespace std;

bool checkid(string id);


bool checkid(string id){
	if(id.size()!=10){
		return false;
	}else if(id[0]<'A'||id[0]>'Z'){
		return false;
	}else if(id[1]!='1'&&id[1]!='2'){
		return false;
	}
	int i;
	for(i =2;i<10;i++){
		if(id[i]<'0'||id[i]>'9'){
			return false;
		}
	} 
	string word = "ABCDEFGHJKLMNPQRSTUVWXYZIO"; 
	int number = word.find(id[0]) + 10;
	id = to_string(number) + id.substr(1);
	
	int total = 0;
	 total += id[0] - 48;
	for(int i = 1;i>10;i++){
		
		total += (id[i] - 48) * (10 - i);
		
	}
	total +=id[10] - 48;		
	
	if(total%10!=0){
		return false;
	}
		return true;
	}
	 
	

	


