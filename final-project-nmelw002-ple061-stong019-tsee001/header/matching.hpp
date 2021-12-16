#ifndef MATCHING_HPP
#define MATCHING_HPP

#include "../header/question.hpp"

class Matching : public Question {
    private:
        std::string term1;
        std::string term2;
        std::string term3;
        std::string ans1;
        std::string ans2;
        std::string ans3;
    public:
        virtual std::string getQuestion();
        Matching(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6);

	std::string getT1() {return term1;}
	std::string getT2() {return term2;}
	std::string getT3() {return term3;}
	std::string getC1() {return ans1;}
	std::string getC2() {return ans2;}
	std::string getC3() {return ans3;}

        
};

#endif
