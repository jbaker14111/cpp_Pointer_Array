// <Lab 6 - Dynamic Memory Assignment - Josiah Baker> -- creates a point array of type Book that stores other Book Pointers. 
//uses user input to get the title, genre, and type of book and stores it into the pointer array. It then deletes all of the books
//stored in the pointer array, and then deletes the pointer array
/*
REFERENCES


c++ - how to properly delete a pointer to array. (n.d.). Stack Overflow. Retrieved 
December 5, 2022, from https://stackoverflow.com/questions/1484739/how-to-properly-delete-a-pointer-to-array


*/

#include "Book.h"
#include <iostream>
#include <string>

int getBooksRead();//function that gets the ammount of books read by user with error detection

using namespace std;
//main() gets user's input for how many books they have read this year, dinamically creates a pointer array of type Book
//and stores the Books that the user inputs throughout the program. Main displays the Books after the user has finished entering
//them in. Will then delete all the dynamically allocated variables
int main() {

	cout << "Josiah Baker -- Lab 6 - Dynamic Memory Assignment" << endl << endl << endl;

	srand(100);

	int booksRead = getBooksRead();

	Book** bookList = new Book*[booksRead];
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	system("cls");
	cout << "Josiah Baker -- Lab 6 - Dynamic Memory Assignment" << endl << endl << endl;
	for (int x = 0; x < booksRead; x++) {
		Book* newBook;
		newBook = new Book;
		cout << "Book " << x + 1 << endl << endl;
		string title;
		string genre;
		string type;
		int score;
		cout << "Enter book title: ";
		getline(cin, title);
		cout << endl << "Enter book genre: ";
		getline(cin, genre);
		cout << endl << "Enter Book Type(Paper, Electronic, etc.): ";
		getline(cin, type);
		score = 1 + rand() % 5;
		newBook->setTitle(title);
		newBook->setGenre(genre);
		newBook->setType(type);
		newBook->setReadingScore(score);
		bookList[x] = newBook;
		cout << endl << endl;
		system("pause");
		system("cls");
		cout << "Josiah Baker -- Lab 6 - Dynamic Memory Assignment" << endl << endl << endl;
	}
	cout << "These are the books you have read this year:" << endl << endl;
	for (int x = 0; x < booksRead; x++) {
		cout << "Book title: " << bookList[x][0].getTitle() << endl << "Book Genre: " << bookList[x][0].getGenre() << endl <<
			"Book Type: " << bookList[x][0].getType() << endl << "Book Reading Score(1-5): " << bookList[x][0].getReadingScore() << endl << endl;
	}
	for (int x = 0; x < booksRead; x++) {
		delete bookList[x];
	}
	delete [] bookList;
	system("pause");
	
}

int getBooksRead() {//function that gets the amount of books read from the user. has error checking

	int booksRead;
	cout << "Enter amount of books read this year: ";
	cin >> booksRead;
	if (cin.fail()) {
		cout << endl << endl << "A number was not entered. please try again." << endl << endl;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		system("pause");
		system("cls");
		cout << "Josiah Baker -- Lab 6 - Dynamic Memory Assignment" << endl << endl << endl;
		return getBooksRead();
	}
	if (booksRead < 1) {
		cout << endl << endl << "Please enter a number of 1 or higher." << endl << endl;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		system("pause");
		system("cls");
		cout << "Josiah Baker -- Lab 6 - Dynamic Memory Assignment" << endl << endl << endl;
		return getBooksRead();
	}
	else {
		return booksRead;
	}
}