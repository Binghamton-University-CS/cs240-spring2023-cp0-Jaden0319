#include <iostream>
#include <stdlib.h>
#include "Course.h"
#include "Roster.h"

using namespace std;

Roster roster;

Course::Course() {

  courseName = "";
  maximumCapacity = 0;
  instructor = "";
  
}

Course::Course(string n, unsigned int cap, string instruct) {

	courseName = n;
        maximumCapacity = cap;
        instructor = instruct;
}

void Course::show() {

  cout << courseName << " (" << maximumCapacity << "): " << instructor <\
< endl;

}














	   
