#ifndef BST_H
#define BST_H
#include <iostream>
#include <string>
#include <cstdlib>   
#include <ctime>
#include "date.h"
#include "thread.h"
#include "post.h"
#include "nod.h"
#include "list.h"
using namespace std;

class BST
{
public:
	nod *r;
	void insert(nod *,nod *);
	void del(nod* node);
	void preorder(nod *);
	void inorder(nod *);
	void ench(nod *);
	void Putpost(Post &p){
		nod *par, *loc,*t;
		if(search(r,p.get_creator()) == 1){
			loc = search2(r,p.get_creator());
			loc->newlistnode(p.get_title(),p.get_txt(),p.get_id(),p.get_date()); 
		}
		else{
			t = new nod;
			t->info = p.get_creator();
			BST::insert(r,t);
			loc = search2(r,p.get_creator());
			loc->newfirstlistnode(p.get_title(),p.get_txt(),p.get_id(),p.get_date());
		}
	}
   	nod* search2(nod *root, string data){
		nod *temp;
		temp = root;
		while(temp != NULL)
		{
    		if(temp->info==data)
      		{
      	  	return temp;
      		}
      		else if(temp->info>data){
      			temp = temp->l;
      		}
      		else{
      			temp = temp->r;
      		}
   		}
   		return 0;
   	}
	int search(nod *root,string data){
		nod *temp;
   		temp = root;
   		while(temp != NULL)
   		{
     		if(temp->info==data)
      		{
      			return 1;
    		}
      		else if(temp->info>data){
      			temp = temp->l;
      		}
      		else{
      			temp = temp->r;
      		}
   		}
	return 0;
	}
	
	BST(Thread* thread)
	:r(NULL)
	{
		for(int i=0;i<thread->get_randomnum();i++){
			Putpost(*thread->get_post()[i]);
		}
	}
	~BST(){
	}
};
#endif
