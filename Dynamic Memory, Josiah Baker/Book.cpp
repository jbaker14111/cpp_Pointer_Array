//Implementation File for Book class. Book Class stores the title, genre, type, and reading score of the Book the user is defining
//has getter/setter function for each variable

#include "Book.h"
#include <string>
#include <iostream>

Book::Book(std::string bookTitle, std::string bookGenre, std::string bookType, int score) {//default constructor

	std::cout << "Creating a new book" << std::endl;
	title = bookTitle;
	genre = bookGenre;
	type = bookType;
	readingScore = score;
}

Book::~Book() {//destructor
	std::cout << "In the book destructor" << std::endl;
}
void Book::setTitle(std::string t) {//sets title of Book
	title = t;
}
std::string Book::getTitle() const {//returns title of Book
	return title;
}
void Book::setGenre(std::string g) {//sets genre of Book
	genre = g;
}
std::string Book::getGenre() const {//returns genre of Book
	return genre;
}
void Book::setType(std::string t) {//sets type of Book
	type = t;
}
std::string Book::getType() const {//returns type of Book
	return type;
}
void Book::setReadingScore(int r) {//sets reading score of Book
	readingScore = r;
}
int Book::getReadingScore() const {//returns reading score of Book
	return readingScore;
}