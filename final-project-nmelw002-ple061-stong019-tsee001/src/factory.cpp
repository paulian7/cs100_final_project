#ifndef factory
#define factory

#include <iostream>
#include "../header/question.hpp"
#include "../header/frq.hpp"
#include "../header/matching.hpp"
#include "../header/mc.hpp"
#include "../header/tf.hpp"

using namespace std;

class AbstractFactory {
public:
    virtual Question* createQuestion(string type, string p1, string p2, string p3, string p4, string p5, string p6) = 0;        
};


class QuestionFactory : AbstractFactory {
public:
    virtual Question* createQuestion(string type, string p1, string p2, string p3, string p4, string p5, string p6) {
        if(type=="MC") {
            Question* q = new MC(p1, p2, p3, p4, p5);
            return q;
        }
        if(type=="FRQ") {
            Question* q = new FRQ(p1);
            return q;
        }
        if(type=="MATCHING") {
            Question* q = new Matching(p1, p2, p3, p4, p5, p6);
            return q;
        }
        if(type=="TF") {
            Question* q = new TF(p1, p2);
            return q;
        }
        return nullptr;
    }
};

#endif
