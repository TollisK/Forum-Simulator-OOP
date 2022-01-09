#include <string>
#include <iostream>
#include <cstdlib>   
#include <ctime>
#include "list.h"
#include "nod.h"
#include "bst.h"
using namespace std;

void BST::insert(nod *tree,nod *newnode)
{
	nod *t;
	t = new nod;
	t->info = newnode->info;
	t->firstli = newnode->firstli;
	t->l = NULL;
	t->r = NULL;
   if (r == NULL)
   {
      r = new nod;
      r->info = t->info;
      r->firstli = t->firstli;
      r->l= NULL;
      r->r= NULL;
      return;
   }
   if (tree->info==t->info)
   {
      return;
   }
   if (tree->info>t->info)
   {
      if (tree->l != NULL)
      {
         insert(tree->l, t);
      }
      else
      {
         tree->l= t;
         (tree->l)->l = NULL;
         (tree->l)->r= NULL;
         return;
      }
   }
   else
   {
      if (tree->r != NULL)
      {
         insert(tree->r, t);
      }
      else
      {
         tree->r = t;
         (tree->r)->l= NULL;
         (tree->r)->r = NULL;
         return;
      }
   }
}
void BST::del(nod* node){
	if (node == NULL) return;  
  
    del(node->l);  
    del(node->r);
    delete node;
}

void BST::inorder(nod *ptr)//inorder traversal
{
	list *di;
   if (r == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      inorder(ptr->l);
      cout<<"Posts from Creator: "<<ptr->info<<" are: "<<endl;
      ptr->showlist();
      cout << endl<<endl;
      inorder(ptr->r);
   }
}
void BST::ench(nod *ptr)//inorder traversal
{
	nod *loc;
   if (r == NULL)
   {
      cout<<"Tree is empty"<<endl;
      return;
   }
   if (ptr != NULL)
   {
      ench(ptr->l);
		if(search(r,ptr->info) == 0){
			insert(r,ptr);	
		}
		else{
			loc = BST::search2(r,ptr->info);
			loc->newlistnode(ptr->firstli->title,ptr->firstli->txt,ptr->firstli->id,ptr->firstli->date);
		}
      
	  ench(ptr->r);
   }
}



