#include <string>
#include <iostream>
#include <cstdlib>   
#include <ctime>
#include "date.h"
#include "post.h"
#include "thread.h"
using namespace std;
int id = 0;//Global metavlhth gia ta id twn post

Thread::~Thread()
{
for(int i=0;i<randomnum;i++){//Diagrafei kathe post
	delete post[i];
}
delete post;//Diagrafei ton deikti toy pinaka 
cout << "Deleting Thread with name " << theme << endl ;
}

Thread::Thread(string nam ,string nam2,Date d) 
: date(d),creator(nam2),theme(nam)
{
Date date2;//Gia thn arxikopoihsh twn post
randomnum = rand()%8 + 1; //tyxaios arithmos gia ta post toy thread
string array_creators[8]={"Creator1","Creator2","Creator3","Creator4","Creator5","Creator6","Creator7","Creator8"};//pinakes me strings gia ta inputs sta post
string array_title[8]={"Title1","Title2","Title3","Title4","Title5","Title6","Title7","Title8"};
string array_txt[8]={"RandomTxtFile1","RandomTxtFile2","RandomTxtFile3","RandomTxtFile4","RandomTxtFile5","RandomTxtFile6","RandomTxtFile7","RandomTxtFile8"};
post = new Post*[randomnum];//Dhmiourgeia toy pinaka me toys deiktes apo post
for(int i=0;i<randomnum;i++){//Arxikopoihsh kathe post symfwna me to tyxaio noymero
date2.set_day(rand()%31 + 1);//tyxaies times gia to Date
date2.set_month(rand()%12 + 1);
date2.set_year(rand()%100 + 2000);
::id++;
post[i] = new Post(array_title[rand()%8],array_creators[rand()%8],array_txt[rand()%8],date2,id); //tyxaio input twn pinakwn
}
cout << "Thread with subject:"<<theme<<" has just been created! " << endl;
}
