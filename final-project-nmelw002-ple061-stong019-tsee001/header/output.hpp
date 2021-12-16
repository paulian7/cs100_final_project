#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <vector>
#include <fstream>
#include <typeinfo>
#include <stdlib.h>
#include <time.h>
#include "../header/question.hpp"

using namespace std;

class Output {
    public:
        void output(vector<Question*> &questions) {

            srand(time(0));

            ifstream fout;

            fout.open("final.txt");

            if (!fout.is_open()) cout << "Error opening file." << endl;

            for (int i = 0; i < questions.size() - 1; ++i) {
                string type;
                type = typeid(questions.at(i)).name();

                if (type.find("MC") != string::npos) {

                    fout << questions.at(i)->getQ() << endl;

                    bool finish = false;
                    bool one = false;
                    bool two = false;
                    bool three = false;
                    bool four = false;

                    while (!finish) {
                        int r = rand() % 4;

                        if (r == 0 && !one) {
                            fout << question.at(i)->getcAns() << endl;
                            one = true;
                        }
                        if (r == 1 && !two) {
                            fout << questions.at(i)->getAns1() << endl;
                            two = true;
                        }
                        if (r == 2 && !three) {
                            fout << questions.at(i)->getAns2() << endl;
                            three = true;
                        }
                        if (r == 3 && !four) {
                            fout << questions.at(i)->getAns3() << endl;
                            four = true;
                        }

                        if (one && two && three && four) finish = True;
                    }

                
                }

                if (type.find("TF") != string::npos) {
                    fout << questions.at(i)->getQ() << endl;
                    fout << "True/False" << endl;
                } 

                if (type.find("FRQ") != string::npos) {
                    fout << questions.at(i)->getQ() << endl;
                }

                if (type.find("Matching") != string::npos) {

                    fout << "Match the terms to the correct definiton." << endl;

                    bool finish = false;
                    bool one = false;
                    bool two = false;
                    bool three = false;

                    while (!finish) {
                        int r = rand() % 3;

                        if (r == 0 && !one) {
                            fout << questions.at(i)->getT1() << endl;
                            one = true;
                        }
                        if (r == 1 && !two) {
                            fout << questions.at(i)->getT2() << endl;
                            two = true;
                        }
                        if (r == 2 && !three) {
                            fout << question.at(i)->getT3() << endl;
                            three = true;
                        }

                        if (one && two && three) finish = True;
                    }

                    fout << endl;

                    finish = false;
                    one = false;
                    two = false;
                    three = false;

                    while (!finish) {
                        int r = rand() % 3;

                        if (r == 0 && !one) {
                            fout << questions.at(i)->getC1() << endl;
                            one = true;
                        }
                        if (r == 1 && !two) {
                            fout << questions.at(i)->getC2() << endl;
                            two = true;
                        }
                        if (r == 2 && !three) {
                            fout << questions.at(i)->getC3() << endl;
                            three = true;
                        }

                        if (one && two && three) finish = True;
                    }

                }

                fout << endl;
            }

        }
}
