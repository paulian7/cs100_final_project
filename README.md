
## Class Diagram

![Screenshot](https://raw.githubusercontent.com/cs100/final-project-nmelw002-ple061-stong019-tsee001/master/Quiz%20Maker%20UML%20Diagram.png?token=ARHZDVHXKGKXQ2LN2DVNM3LBTSM42)
  First, we have the main driver class “Quiz” which contains a vector of Question objects. The quiz class has two functions: createQs which utilizes the Question Maker classes to import questions and testOutput which utilizes the Test Output class to export the created quiz. 

 The Question Maker(QM) class's goal is to parse the user's input and create Question objects. It is part of two design patterns. The first is a strategy pattern that we use to switch out algorithms (based on file formats) for parsing the user's input. There are three subclasses for three different types of file inputs (Yaml, JSON, and TXT).
	@@ -41,8 +41,12 @@ We also used a strategy pattern design in our project for our file input/output

We picked this pattern for our file input and output class. First, the application will be able to take in data from different file formats and turn it into questions to be used within a quiz. We use a strategy pattern with different classes for each "algorithm" needed to parse each kind of supported file. Second, the application will be able to export created quizzes in several formats. We use a strategy pattern with different classes for each "algorithm" needed to output a file with the quiz in each supported format.

 ## Screenshots - of our inputs / outputs
 > Screenshots of the input/output after running your application

 ## Installation/Usage
 Firstly, the user needs to clone this **GitHub repository** recurisvely onto their own system - this can be done by using git and the terminal. Once completed, the user can create a file (either in the format of .txt, .json, .yml) of questions and corresponding correct answers that they want to include on their quiz. They must then add this file into the same directory / repository as the rest of the code. Next, they have to refer to lines 15, 16, or 18 in files: “txtInput.cpp”, “jsonInput.cpp”, and “yamlInput.cpp” respectively. Within the parentheses of fin.open() from those respective lines, the user must input their filename within quotation marks ( ex. fin.open(“test.yml”)). Finally, the user will run “cmake3 .”, “make”,  and the executable. This will return a .txt file which they can then open to access their quiz. By doing all of the following steps, the user can fully utilize the program to its greatest potential as it will produce a .txt file of all the questions and corresponding answers / terms for their for easy use.
