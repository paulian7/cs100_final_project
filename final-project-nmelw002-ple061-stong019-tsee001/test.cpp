#include "gtest/gtest.h"
#include "src/factory.cpp"
#include "src/mc.cpp"
#include "src/tf.cpp"
#include "src/frq.cpp"
#include "src/matching.cpp"
// Essentially testing our factories
TEST(FactoryTest, MCTest)
{

        // Create a factory
        QuestionFactory f1;
	
	Question* t1 = f1.createQuestion("MC", "How many group members do you have?", "4", "1", "2", "3","");
	

        EXPECT_EQ(t1->getQuestion(),"How many group members do you have?\n4\n1\n2\n3\n"); // could we use stringify() and what output would we be expecting?
}
TEST(FactoryTest, TFTest)
{

        // Create a factory
        QuestionFactory f1;

        Question* t1 = f1.createQuestion("TF", "Nate is the VP of cyber@UCR", "True", "", "", "", "");

        EXPECT_EQ(t1->getQuestion(),"True or False:\nNate is the VP of cyber@UCR\n"); // could we use stringify() and what output would we be expecting?
}
TEST(FactoryTest, FRQTest)
{

        // Create a factory
        QuestionFactory f1;

        Question* t1 = f1.createQuestion("FRQ", "Why is it so hot in Riverside?", "", "", "", "", "");

        EXPECT_EQ(t1->getQuestion(),"Why is it so hot in Riverside?\n"); // could we use stringify() and what output would we be expecting?
}
TEST(FactoryTest, MatchingTest)
{

        // Create a factory
        QuestionFactory f1;

        Question* t1 = f1.createQuestion("MATCHING", "Michael Phelps", "Michael Jordan", "Michael Jackson", "Swimmer", "Basketball Player", "Singer");

        EXPECT_EQ(t1->getQuestion(), "Matching Question\nMichael Phelps   Swimmer\nMichael Jordan   Basketball Player\nMichael Jackson   Singer\n\n"); // could we use stringify() and what output would we be expecting?
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
