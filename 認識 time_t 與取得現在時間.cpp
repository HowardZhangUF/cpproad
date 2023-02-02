#include <iostream> 
#include <ctime>
using namespace std;

int main(){

/*	time_t a = time(0);
	cout<<a<<endl;
	
	char * b = ctime(&a);
	cout<<b<<endl;
*/
/*time_t c;
	time(&c);
	char * d = ctime(&c);
	cout<<d<<endl;*/
	/*time_t * e = new time_t;
	time(e);
	cout<<*e<<endl;*/
	/*struct tm t = {0};
	t.tm_year = 2018-1900;
	t.tm_mon = 10-1;
	t.tm_mday = 20;
	cout<<t.tm_year+1900<<'/'<<t.tm_mon+1<<'/'<<t.tm_mday<<endl;
	*/
	
	/*time_t a = time(NULL);
	struct tm * b = localtime(&a);
	cout<<b->tm_year+1900<<'/'<<b->tm_mon+1<<'/'<<b->tm_mday<<endl;
	
	char * result = new char[30];
	strftime(result,30,"now is: %Y/%m/%d %H:%M:%S",b);
	cout<<result<<endl;*/
	
	/*struct tm startday = {0};
	startday.tm_year = 2018-1900;
	startday.tm_mon = 10-1;
	startday.tm_mday = 20;
	cout<<startday.tm_year+1900<<'/'<<startday.tm_mon+1<<'/'<<startday.tm_mday<<endl;
	
	struct tm endday = {0};
	endday.tm_year = startday.tm_year;
	endday.tm_mon = startday.tm_mon;
	endday.tm_mday = startday.tm_mday+20;
	cout<<endday.tm_year+1900<<'/'<<endday.tm_mon+1<<'/'<<endday.tm_mday<<endl;
	
	time_t a = mktime(&endday);
	cout<<a<<endl;
	struct tm * b = localtime(&a);
	cout<<b->tm_year+1900<<'/'<<b->tm_mon+1<<'/'<<b->tm_mday<<endl;*/
	
	struct tm startday = {0};
	startday.tm_year = 2018-1900;
	startday.tm_mon = 1-1;
	startday.tm_mday = 28;
	time_t starttime = mktime(&startday);
	
	struct tm endday = {0};
	endday.tm_year = 2018-1900;
	endday.tm_mon = 2-1;
	endday.tm_mday = 28;
	time_t endtime = mktime(&endday);
	
	double spend = difftime(endtime , starttime);
	double days = spend/86400;
	cout<< days <<endl; 
	
	
	
	
 		
	
	return 0;
	
	
}
