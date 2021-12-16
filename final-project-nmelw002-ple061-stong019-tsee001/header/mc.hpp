#ifndef MC_HPP
#define MC_HPP

#include "../header/question.hpp"

class MC : public Question {
    private:
        std::string question;
        std::string cAns;
        std::string ans1;
        std::string ans2;
        std::string ans3;
    public:
        virtual std::string getQuestion();
        MC(std::string question, std::string cAns, std::string ans1, std::string ans2, std::string ans3);

	std::string getQ() {return question;}
	std::string getcAns() {return cAns;}
	std::string getAns1() {return ans1;}
	std::string getAns2() {return ans2;}
	std::string getAns3() {return ans3;}
        
};

#endif
