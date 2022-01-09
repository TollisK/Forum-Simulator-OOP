#ifndef POST_H
#define POST_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "date.h"
using namespace std;
class Post{
private:
	string title;
	string creator;
	int id;
	Date date;
	string txt;
public:
	Post(string,string,string,Date,int);
	~Post();
	int get_id(){
		return id;
	}
	string get_txt(){
		return txt;
	}
	string get_creator(){
		return creator;
	}
	string get_title(){
		return title;
	}
	Date get_date(){
		return date;
	}
	void print(){
		cout << "||Title: "<<title<<"||Creator: "<<creator<<"||ID: "<<id<<"||txt: "<<txt<<"||Date: "<<date.get_day()<<"/"<<date.get_month()<<"/"<<date.get_year()<<endl;
	}
};
#endif
