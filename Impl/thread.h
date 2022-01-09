#ifndef THREAD_H
#define THREAD_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "date.h"
#include "post.h"
using namespace std;
class Thread{
private:
	string theme;
	string creator;
	int randomnum;	//tyxaios arithmos gia thn dhmiourgia twn post
	Post **post;	//pinakas apo deiktes me post
	Date date;		
public:
	Thread(string,string,Date);
	~Thread();
	string get_theme(){
		return theme;
	}
	Date get_date(){
		return date;
	}
	void print(){
		cout << endl<<endl<<"||Theme: "<<theme<<"||Creator: "<<creator<<"||Date:"<<date.get_day()<<"/"<<date.get_month()<<"/"<<date.get_year()<< endl<<endl;
		for(int i=0;i<randomnum;i++){ //Ektypwse ola ta post toy thread
			post[i]->print();
		}
	}
	Post** get_post(){
		return post;
	}
	void print_post(int idd){
		for(int i=0;i<randomnum;i++){
			if(idd == post[i]->get_id()){
				cout << endl;
				post[i]->print();
			}
		}
	}
	int get_randomnum(){
		return randomnum;
	}
};
#endif
