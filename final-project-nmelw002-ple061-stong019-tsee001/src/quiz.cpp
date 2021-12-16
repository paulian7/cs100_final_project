#include <vector>
#include "../header/question.hpp"
#include "../src/txtInput.cpp"
#include <fstream>
#include <string>

//void textOutput() {
//    //to be implemented in the future
//}
//
//void createQs(QuestionMaker *qm, vector<Question> &questions) {
//    //create questions
//}


int main() {
    vector<Question*>questions;
    TxtInput inp;
    inp.input(questions);
    //Output out;
    //out.output(questions);
    ofstream outFile;
    outFile.open("outputQuiz.txt");
    for(int i = 0; i<questions.size(); i++) {
        std::string s = questions.at(i)->getQuestion();
        delete questions.at(i);
        outFile << s << endl;
    }
    return 0;
}
