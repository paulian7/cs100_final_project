#ifndef FRQ_HPP
#define FRQ_HPP

#include "../header/question.hpp"

class FRQ : public Question {
    private:
        std::string question;
    public:
        virtual std::string getQuestion();
        FRQ(std::string q); 

	std::string getQ() {return question;}
};

#endif
