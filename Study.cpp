#include <iostream>
#include <stdlib.h>
#include "Course.h"
#include "Roster.h"

using namespace std;

int main(int argc, char *argv[]) {
   Course one;
   Course *two = new Course("CS 240", 100, "Dracula");
   Course *three = new Course("Mat 314",250, "Rocky");
   
   one.show();
   two->show();
   three->show();
   
   delete(two);
   delete(three);
}
