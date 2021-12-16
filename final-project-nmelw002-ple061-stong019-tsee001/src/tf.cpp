#include "../header/tf.hpp"


using namespace std;

TF::TF(string question, string cAns) {
    this->question = question;
    this->cAns = cAns;
}


string TF::getQuestion() {
    string ret = "True or False:\n";
    ret+=question;
    ret+="\n";
    return ret;
}
