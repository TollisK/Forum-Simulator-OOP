#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class Date { //class gia to Date
private:	
	int day;
	int month;
	int year;	
public:
	Date(int d = 1, int m = 1, int y = 2006)
	: day(d), month(m), year(y)
	{
	}
	void set_day( int d){
		day = d;
	}
	void set_month( int m){
		month = m;
	}
	void set_year( int y){
		year = y;
	}
	int get_day()  
	{
		return day;
	}
	int get_month()  
	{
		return month;
	}
	int get_year()  
	{
		return year;
	}
};
#endif
