using namespace std;

#include "../header/frq.hpp"

FRQ::FRQ(string q) {
    this->question = q;
}

string FRQ::getQuestion() {
    return question + "\n";
}
