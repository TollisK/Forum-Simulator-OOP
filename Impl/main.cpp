#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "forum.h"
//g++ main.cpp op.cpp opt.cpp class.h classt.h -std="c++11"
using namespace std;
int main(){
srand(time(NULL));
Forum f("Antikeimenostrafhs Programmatismos");
f.print_sorted(); // Inorder print with binary search trees
cout << endl<<"Just exiting the main function ...." << endl << endl;
return 0;
}
