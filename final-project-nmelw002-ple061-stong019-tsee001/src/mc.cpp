#include "../header/mc.hpp"


using namespace std;

MC::MC(string question, string cAns, string ans1, string ans2, string ans3) {
    this->question = question;
    this->cAns = cAns;
    this->ans1 = ans1;
    this->ans2 = ans2;
    this->ans3 = ans3;    
}


string MC::getQuestion() {
    string ret;
    ret+=question;
    ret+="\n";
    ret = ret + cAns + "\n";
    ret = ret + ans1 + "\n";
    ret = ret + ans2 + "\n";
    ret = ret + ans3 + "\n";
    return ret;
}
