#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

char buff[] = { "“light” : “on”"
               "“fan” : “off”"
               "“motor” : “off”" };	

typedef struct 
{
	char light;
	char fan;
	char motor;
} smart_home;


smart_home get_value()

{
	smart_home result;
	
	char* data1 = strstr(buff,"“light” : “on”");
	char* data2 = strstr(buff, "“light” : “off”");

	char* data3 = strstr(buff,"“fan” : “on”");
	char* data4 = strstr(buff, "“fan” : “off”");

	char* data5 = strstr(buff,"“motor” : “on”");
	char* data6 = strstr(buff, "“motor” : “off”");

	if(data1>0)
		result.light = 1;
	if(data2>0)
		result.light = 0;

	 if(data3>0)
		result.fan = 1;
	 if (data4 > 0)
		result.fan = 0;

	 if (data5 > 0)
		result.motor = 1;
	 if (data6 > 0)
		result.motor = 0;

	return result;
}


int main() {


	smart_home status= get_value();


	if (status.light == 1)
		cout << " Bat den" << endl;
	else
		cout << " Tat den" << endl;

	if (status.fan == 1)
			cout << " Bat quat" << endl;
	else
			cout << " Tat quat" << endl;


	if (status.motor == 1)
			cout << " Bat motor" << endl;
	else
			cout << " Tat motor" << endl;

	return 0;
}