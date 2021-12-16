#ifndef __TXT_INPUT__
#define __TXT_INPUT__

#include <iostream>
#include <fstream>

#include "../header/input.hpp"
#include "../src/factory.cpp"

using namespace std;


class TxtInput : public Input {
    public:
        void input(vector<Question*> &questions) {
            QuestionFactory qf;
            
            ifstream fin;

            fin.open("test.txt");

            if (!fin.is_open()) cout << "Error opening file." << endl;

            string input;

            string MCq, MCcAns, MCans1, MCans2, MCans3, MCans4;
            string TFq, TFans;
            string FRQq;
            string Mt1, Mt2, Mt3, Mc1, Mc2, Mc3; 

            while (fin>>input) {
                fin.ignore();

                if (input == "mc") {
                    //parse mc question

                    getline(fin, input);
                    string MCq = input;     //store question

                    fin >> input;     //store correct answer
                    string MCcAns = input;

                    fin >> input;        //store answer choices
                    string MCans1 = input;
                    fin >> input;
                    string MCans2 = input;
                    fin >> input;
                    string MCans3 = input;
                    Question* q = qf.createQuestion("MC", MCq, MCcAns, MCans1, MCans2, MCans3, "");
                    questions.push_back(q);

                }

                if (input == "t/f") {
                    //parse t/f question

                    getline(fin, input);
                    string TFq = input;     //store question

                    fin >> input;
                    string TFans = input;   //store answer
                    Question* q = qf.createQuestion("TF", TFq, TFans, "", "", "", "");
                    questions.push_back(q);
                }

                if (input == "frq") {
                    //parse frq

                    getline(fin, input);
                    string FRQq = input;
                    Question* q = qf.createQuestion("FRQ", FRQq, "", "", "", "", "");
                    questions.push_back(q);

                }

                if (input == "matching") {
                    //parse matching question

                    getline(fin, input);     //store terms
                    string Mt1 = input;
                    getline(fin, input);
                    string Mt2 = input;
                    getline(fin, input);
                    string Mt3 = input;

                    getline(fin, input);     //store answer choices
                    string Mc1 = input;
                    getline(fin, input);
                    string Mc2 = input;
                    getline(fin, input);
                    string Mc3 = input;
                    Question *q = qf.createQuestion("MATCHING", Mt1, Mt2, Mt3, Mc1, Mc2, Mc3);
                    questions.push_back(q);

                }


            }
        }

};

#endif
