//Header File for Book class. Book Class stores the title, genre, type, and reading score of the Book the user is defining
//has getter/setter function for each variable

#ifndef BookH
#define BookH
#include <string>
#include <iostream>

class Book {
public:

	Book(std::string bookTitle = "", std::string bookGenre = "", std::string bookType = "", int score = 0);
	//Default Constructor
	//Outputs "Creating new book" to terminal

	~Book();
	//Default destructor
	//Outputs "In the book destructor" to terminal 

	void setTitle(std::string);
	//function that sets title of Book
	//Postcondition: title = parameter

	std::string getTitle() const;
	//function that returns title of Book

	void setGenre(std::string);
	//function that sets genre of Book
	//Postcondition: genre = parameter

	std::string getGenre() const;
	//function that returns genre of Book

	void setType(std::string);
	//function that sets type of Book
	//Postcondition: type = parameter

	std::string getType() const;
	//function that returns type of Book

	void setReadingScore(int);
	//function that sets reading score of Book
	//Postcondition: readingScore = parameter

	int getReadingScore() const;
	//function that returns reading score of Book


private:

	std::string title;//variable of type string that stores the title of the Book
	std::string genre;//variable of type string that stores the genre of the Book
	std::string type;//variable of type string that stores the type of the Book
	int readingScore;//variable of type integer that stores the reading score of the Book

};

#endif