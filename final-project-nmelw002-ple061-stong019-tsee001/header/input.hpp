#ifndef input_hpp
#define input_hpp

#include <vector>
#include "../header/question.hpp"

using namespace std;

class Input {
public:
   virtual void input(vector<Question*> &questions) = 0; 
};

#endif
