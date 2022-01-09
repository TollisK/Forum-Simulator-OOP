#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <string>
#include <cstdlib>   
#include <ctime>
#include "date.h"
using namespace std;

class list{
public:
	list()
	:next(NULL),id(0),date(0,0,0)
	{
		
	}
	string title;
	string txt;
	int id;
	Date date;
	list *next;
	~list(){
		if (next!=NULL){
        	delete next;
    	}
	}
};
#endif
