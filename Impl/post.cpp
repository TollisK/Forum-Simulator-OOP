#include <string>
#include <iostream>
#include <cstdlib>   
#include <ctime>
#include "date.h"
#include "post.h"
using namespace std;


Post::~Post()
{
cout << "Post number:"<< id << " is about to be destroyed" << endl ;
}

Post::Post(string nam ,string nam2,string nam3,Date d,int idd) ////edw vazoyme ta orismata gai to Post
: date(d), id(idd),creator(nam2),title(nam),txt(nam3)
{
cout << "Post with title: "<<title<<"||creator: "<<creator<< "||text: "<<txt<<"||and id: "<<id<<" has just been created!" << endl;
}
