
#include<string>
using namespace	std;

class Course {

   public:
     Course(string name, unsigned int capacity, string instruct);

     Course();

     void show();

   private:

      string courseName;
      unsigned int maximumCapacity;
      string instructor;
};
