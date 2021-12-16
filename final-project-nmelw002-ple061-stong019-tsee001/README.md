# Quiz Maker
 
 

 > Authors: [Nathan Melwani](https://github.com/NateM135), [Spencer Tong](https://github.com/Diplett), [Paulian Le](https://github.com/paulian7), and [Tyler See](https://github.com/tylers122)


## Project Description
**Why is it important or interesting to you?**
 - As students, we use **Quizlet** quite a lot to study and prepare for classes and upcoming exams. This website has various features such as being able to customize and make personalized exams. For example, users can pick to either make their exam fully multiple choice or a mix of multiple choice and matching. 
 - Therefore, as a group, we were interested in creating our very own project called **"Quiz Maker"** because of how it would be quite similar to **Quizlet** - a site that we use a lot as students. We are planning to make it as an application that enables instructors to create and customize quizzes all through just an uploadd of a text file. From there, they can pick and choose what type of questions to include. For instance, they can pick to make their quiz fully multiple choice or to mix it up with some true/false or matching questions. Instructors can also decide how many questions to have on their quiz as well.

 **What languages/tools/technologies do you plan to use? (This list may change over the course of the project)**
 - We plan on coding this project in **C++**, as it is the language we are all most familiar with.
 - The first and foremost tool we will be using is **file streams**. This allow the program to read everything inside the text file we upload and create a quiz. It will also let the program write to a file; in this case it would be the final quiz. 
 - We will also be using **OOP (Object-Oriented Programming)** to create our various quiz questions (multiple choice, matching, true/false, etc.). This allows the program to easily create multiple questions of the same format. It also allows us to easily split our entire project into smaller problems that are more solvable.
  - We will be using a **randomizer** to randomize our questions are answer choices. Just like normal quizzes/tests, randomization is usually used to reduce the chances of cheating.

**What will be the input/output of your project? What are the features that the project provides?**
  - There are several different cases where input and output are provided. When initially interacting with the project, the user has to input a set of questions. They can either do this within the application itself or they can use common serialization formats (JSON, YAML, etc) which are correctly formatted populate the application with questions. From that point on, the input would be the user's interactions with the questions, and the output would be feedback on whether the question answers are correct or not in addition to statistics about the app.
  - This is a quiz application, so some of the features provided would be a way to add questions to a quiz, mass import questions to a quiz using different file formats (JSON, YAML, etc). The user can then start a quiz with certain parameters (# questions, order, etc) and receive feedback/various statistics upon completion.

## Class Diagram

![Screenshot](https://raw.githubusercontent.com/cs100/final-project-nmelw002-ple061-stong019-tsee001/master/Quiz%20Maker%20UML%20Diagram.png?token=APMEK2WNI7W3EHSNPRPMLCTBV54CM)
  First, we have the main driver class “Quiz” which contains a vector of Question objects. The quiz class has two functions: createQs which utilizes the Question Maker classes to import questions and testOutput which utilizes the Test Output class to export the created quiz. 

 The Question Maker(QM) class's goal is to parse the user's input and create Question objects. It is part of two design patterns. The first is a strategy pattern that we use to switch out algorithms (based on file formats) for parsing the user's input. There are three subclasses for three different types of file inputs (Yaml, JSON, and TXT).

  Once we're able to read the questions from the user, we want to store them as Question objects. In order to do this, we apply a factory design pattern, where the Question Maker is the client, the question class is the abstract factory, and each type of questions are concrete factories. This design pattern fits best due to the varying type of questions we have in our quiz(Multiple Choice, True/False, Free Response, Matching). Thus, all four of these classes inherit from the Question class which are aggregated by the QM and eventually returned to the Quiz driver.

  After the questions have been created it is then returned to the Quiz class, the user has the option of outputting the quiz. In order to support multiple export file formats, we use an strategy pattern, with different subclasses representing different types of file outputs (Yaml, JSON, and TXT).

## More on our design patterns... 

In our project we are utilizing a factory pattern design to create our Question Maker. Factory pattern helps separate the “look and feel” from the functionality of the application. This is done by the creation of “factories” that switches styles at run time. Factory pattern is a solution that makes applications portable without having to make huge overhauls. A prime example of this is when applications need to target multiple operating systems.

We picked this pattern because it suits our Question Maker class. Whose purpose is to format the questions for the four different types(Multiple Choice, True/False, Free Response, Matching).

We also used a strategy pattern design in our project for our file input/output class. A strategy pattern takes a class that does something specific and splits it into separate (strategies) classes. The class behavior and/or algorithms can be changed during run time, which allows for to choose which strategy is fit for the problem it faces. Overall, it makes the general "context" class more organized and easier to read, while conveniently storing each algorithm in its own parent class.

We picked this pattern for our file input and output class. First, the application will be able to take in data from different file formats and turn it into questions to be used within a quiz. We use a strategy pattern with different classes for each "algorithm" needed to parse each kind of supported file. Second, the application will be able to export created quizzes in several formats. We use a strategy pattern with different classes for each "algorithm" needed to output a file with the quiz in each supported format.
 
 ## Screenshots 
 Inputs(txt(1),json(2),yaml(3)) & Output(txt(4))
 ![Screenshot](https://raw.githubusercontent.com/cs100/final-project-nmelw002-ple061-stong019-tsee001/master/txtInput.png?token=APMEK2WMJHREYYJ6F3PIZYDBV53YS)
 ![Screenshot](https://raw.githubusercontent.com/cs100/final-project-nmelw002-ple061-stong019-tsee001/master/jsonInput.png?token=APMEK2SZXSDXCDKIWRABLI3BV533Q)
 ![Screenshot](https://raw.githubusercontent.com/cs100/final-project-nmelw002-ple061-stong019-tsee001/master/ymlInput.png?token=APMEK2SKOAWEXHON2BSQGHDBV535G)
 ![Screenshot](https://raw.githubusercontent.com/cs100/final-project-nmelw002-ple061-stong019-tsee001/master/txtOutput.png?token=APMEK2SNL4HDJZ563LTLEULBV536S)
 
 ## Installation/Usage
 Firstly, the user needs to clone this **GitHub repository** recurisvely onto their own system - this can be done by using git and the terminal. Once completed, the user can create a file (either in the format of .txt, .json, .yml) of questions and corresponding correct answers that they want to include on their quiz. They must then add this file into the same directory / repository as the rest of the code. Next, they have to refer to lines 15, 16, or 18 in files: “txtInput.cpp”, “jsonInput.cpp”, and “yamlInput.cpp” respectively. Within the parentheses of fin.open() from those respective lines, the user must input their filename within quotation marks ( ex. fin.open(“test.yml”)). Finally, the user will run “cmake3 .”, “make”,  and the executable. This will return a .txt file which they can then open to access their quiz. By doing all of the following steps, the user can fully utilize the program to its greatest potential as it will produce a .txt file of all the questions and corresponding answers / terms for their for easy use.
 
 
 ## Testing
 To test our project, we initially tested it with our base test case first. For example, to ensure that we were parsing in our files correctly, we parsed in variables of all different types and checked the outputs to ensure that the information was being parsed in correctly. Furthermore, we also had some unit tests as well for extra measure. We included the submodule "googletest" to help us run our unit tests. We also made sure to use valgrind as well to check for any memory leaks and as a result ensure that our program was running as efficiently as it can.
