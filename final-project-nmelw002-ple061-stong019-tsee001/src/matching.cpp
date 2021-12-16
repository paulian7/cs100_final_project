#include "../header/matching.hpp"



using namespace std;

Matching::Matching(string term1, string term2, string term3, string ans1, string ans2, string ans3) {
    this->term1 = term1;
    this->term2 = term2;
    this->term3 = term3;
    this->ans1 = ans1;
    this->ans2 = ans2;
    this->ans3 = ans3;
}

string Matching::getQuestion() {
    string ret = "Matching Question\n";
    ret+=term1 + "   " + ans1 + "\n";
    ret+=term2 + "   " + ans2 + "\n";
    ret+=term3 + "   " + ans3 + "\n";
    ret+="\n";
    return ret;
}
