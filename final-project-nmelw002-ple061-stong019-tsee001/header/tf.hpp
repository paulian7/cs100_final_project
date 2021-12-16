#ifndef TF_HPP
#define TF_HPP

#include "../header/question.hpp"

class TF : public Question {
    private:
        std::string question;
        std::string cAns;
    public:
        virtual std::string getQuestion();
        TF(std::string q, std::string cans);

	std::string getQ() {return question;}
	std::string getcAns() {return cAns;}
        
};

#endif
