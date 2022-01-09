#ifndef NOD_H
#define NOD_H
#include <iostream>
#include <string>
#include <cstdlib>   
#include <ctime>
#include "date.h"
#include "list.h"
using namespace std;
class nod
{
public:
	list *firstli;
	string info;
	nod *l;
    nod *r;
    
	nod()
	:l(NULL),r(NULL),firstli(NULL)
	{
	}
	~nod()
	{
		if (firstli!=NULL){
        	delete firstli;
    	}
	}
    void newfirstlistnode(string title,string txt,int id,Date date){
    	firstli = new list();
    	firstli->title = title;
    	firstli->txt = txt;
		firstli->id = id;
		firstli->date = date;   
    	firstli->next = NULL;
	}
    void newlistnode(string title,string txt,int id,Date date){
    	list *pro;
    	list *di;
		di = firstli;
		pro = new list();
		pro->title = title;
		pro->txt = txt;
		pro->id = id;
		pro->date = date;   
    	pro->next = NULL;
    	while(di->next != NULL){
    		di = di->next;
		}
		di->next = pro;
		di->next->next = NULL;
	}
	void showlist(){
		list *di;
		di = firstli;
		while(di != NULL){
			cout << "||Title: "<<di->title<<"||ID: "<<di->id<<"||txt: "<<di->txt<<"||Date: "<<di->date.get_day()<<"/"<<di->date.get_month()<<"/"<<di->date.get_year()<<endl;
			di = di->next;
		}
	}
};
#endif
