#ifndef FORUM_H
#define FORUM_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "date.h"
#include "thread.h"
#include "post.h"
using namespace std;
class Forum {
private:
	string title;
	Thread **thread;// pinakas me deiktes apo thread 
	int randomnum;//tyxaios arithmos gia thn dhmiourhia twn thread
public:
	Forum(string);
	~Forum();
	string get_title(){
		return title;
	}
	string get_t_theme(){
		return (*thread)->get_theme();
	}
	void print_sorted();
	Date get_date(){
		return (*thread)->get_date();
	}
	Thread** get_thread(){
		return thread;
	}
	void print(){// Ektypwse mono toys titloys twn thread toy forum
		for(int i=0;i<randomnum;i++){
			cout << thread[i]->get_theme() <<endl;
		}
	}
	void print_theme(string Str){//Psaxnei to string sta threads kai ektypwnei an to vrei
		for(int i=0;i<randomnum;i++){
			if(Str == thread[i]->get_theme()){
				thread[i]->print();
			}
		}
	}
	void print_post(int idd){//Ektypwse to post me to sygkekrimeno id
		for(int j=0;j<randomnum;j++){
			thread[j]->print_post(idd);
		}
	}
	int get_randomnum(){
		return randomnum;
	}
	int numofposts(){//Kanei return ta posts olwn twn thread toy forum gia thn xrhsh toy sta random prints
		int nums;
		nums = thread[0]->get_randomnum();
		for(int i=1;i<randomnum;i++){
			nums = nums + thread[i]->get_randomnum();
		}
		return nums;
	}
};
#endif 
