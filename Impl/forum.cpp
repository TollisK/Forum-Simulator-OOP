#include <string>
#include <iostream>
#include <cstdlib>   
#include <ctime>
#include "date.h"
#include "thread.h"
#include "forum.h"
#include "bst.h"
using namespace std;

void Forum::print_sorted(){
	BST bst(thread[0]); //Dhmiourgia toy prwtoy dentroy me to prwto thread
	for(int i=1;i<randomnum;i++){ //gia kathe thread toy forum dhmioyrgia toy dentroy kai enisxysei toy prwtoy kyrioy dentroy
		BST bst2(thread[i]);
		bst.ench(bst2.r);
	}
	cout<<"INORDER POSTS WITH CREATORS AS THE KEY:"<<endl<<endl;
	bst.inorder(bst.r); //Ektypwnei me seira inorder kathe komvo toy dentroy
	bst.del(bst.r); //Diagrafh toy dentroy
}

 
Forum::~Forum()
{
for(int i=0;i<randomnum;i++){ //Diagrafh kathe thread;
	delete thread[i];
}
delete thread; //Diagrafh toy pinaka me deiktes
cout << "Deleting Forum with name " << title << endl ;
}

Forum::Forum(string nam)
:title(nam)
{
Date date;//Gia thn arxikopoihsh twn thread
randomnum=rand()%8 + 1;//tyxaios arithmos gia ta thread toy forum 
string array_creators[8]={"Creator1","Creator2","Creator3","Creator4","Creator5","Creator6","Creator7","Creator8"};
string array_theme[8]={"Kanones kai xrhsimes plhrofories","Theme1","Theme2","Theme3","Theme4","Theme5","Theme6","Theme7"};
thread = new Thread*[randomnum];//Dhmioyrgia toy pinaka apo deiktes

date.set_day(rand()%31 + 1);//Arxikopoihsh toy prwtoy thread me thema "Kanones kai xrhsimes plhrofories"
date.set_month(rand()%12 + 1);
date.set_year(rand()%100 + 2000);
thread[0] = new Thread(array_theme[0],array_creators[rand()%8],date);
	
for(int i = 1; i < randomnum; i++){//Arxikopoihsh twn ypoloipwn thread symfwna me ton tyxaio arithmo
	date.set_month(rand()%12 + 1); 
	date.set_year(rand()%100 + 2000);
	thread[i] = new Thread(array_theme[rand()%7 + 1],array_creators[rand()%8],date);//Tyxaia inputs apo ton pinaka me string
}
cout << "Forum with title: "<<title<<" has just been created!" << endl;
}
