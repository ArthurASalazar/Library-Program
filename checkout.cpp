// Name Arthur Salazar
// Section #2
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
#include "book.cpp"

using namespace std;

void printMenu();
Person * findPerson(vector<Person*> &p,int id);
void readBooks(vector<Book*> & myBooks); //reads book.txt
int readPersons(vector<Person *> & myCardholders); //reads person.txt
void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders); //reads rentals.txt
Book * searchBook(vector<Book *> myBooks, int id);
void openCard(vector<Person *> & myCardholders, int nextID);
void closeCard(vector<Person *>&myCardholders,int nextID);
Book * checkOut();
Book * return();
void updateRecords();
int main()
{
    vector<Book *> books;
    vector<Person *> cardholders;

    int choice;
    do
    {
        // If you use cin anywhere, don't forget that you have to handle the <ENTER> key that
        // the user pressed when entering a menu option. This is still in the input stream.
        printMenu();
        cin >> choice;
        switch(choice)
        {
            case 1:
                // Book checkout
                Book * checkOut();
                break;

            case 2:
                // Book return
                Book * return();
                break;

            case 3:
                // View all available books
                Book * searchBook(vector<Book *> myBooks, int id);

                break;

            case 4:
                // View all outstanding rentals
                void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders); //reads rentals.txt
                break;

            case 5:
                // View outstanding rentals for a cardholder
                Person * findPerson(vector<Person*> &p,int id);
                break;

            case 6:
                // Open new library card
                void openCard(vector<Person *> & myCardholders, int nextID);
                break;

            case 7:
                // Close library card
                void closeCard(vector<Person *>&myCardholders,int nextID);
                break;

            case 8:
                // Must update records in files here before exiting the program
                void updateRecords();
                break;

            default:
                cout << "Invalid entry" << endl;
                break;
        }
        cout << endl;
   } while(choice != 8);
      return 0;
}
void printMenu() {
    cout << "----------Library Book Rental System----------" << endl;
    cout << "1.  Book checkout" << endl;
    cout << "2.  Book return" << endl;
    cout << "3.  View all available books" << endl;
    cout << "4.  View all outstanding rentals" << endl;
    cout << "5.  View outstanding rentals for a cardholder" << endl;
    cout << "6.  Open new library card" << endl;
    cout << "7.  Close library card" << endl;
    cout << "8.  Exit system" << endl;
    cout << "Please enter a choice: ";
}
void readBooks(vector<Book*> & myBooks) {
    string bookTitle;
    string bookAuthor;
    string bookCategory;
    int bookIDNUM;
    ifstream readFile;
    readFile.open("books.txt");
    Book * bookptr =nullptr;
    bookptr = new Book;
    if(!readFile){
      cout << "Could not open file : " << endl;
      exit(1);
    }
   while (!readFile.eof()) {
     readFile >> bookIDNUM
     >> bookTitle
     >> bookAuthor
     >> bookCategory;
     Book.getId(bookIDNUM);
     Book.getTitle(bookTitle);
     Book.getAuthor(bookAuthor);
     Book.getCategory(bookCategory);
     myBooks.push_back(Book);
   }
   return;
}

int readPersons(vector<Person*> & myCardholders) {
    vector<Person> myCardholders;
    ifstream readfile;
    readfile.open("persons.txt");
    while (!readfile.eof()) {
      readfile >> cardID >> isActive >> firstName >> lastName;
      Person.
    }
    return 0;
}

void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders) {
    return;
}

void openCard(vector<Person *> & myCardholders, int nextID) {
    vector<Person> myCardholders;
    cout << "Please enter the first name: " << endl;
    cin >> Person.firstName;
    cout << "Please enter the last name: " << endl;
    cin >> Person.lastName;
    if (Person.firstName && Person.lastName == cardID) {
      cout << "Card ID " << cardID << "active";
      cout << "Cardholder: " << Person.fullName;
    }
    return myCardholders;
}

Book * searchBook(vector<Book *> myBooks, int id) {
    for (int i = 0; i < myBooks.size(); i++) {
      if (myBooks.at(i)->getId()==bookID) {
        return myBooks.at(i);
      }
      return nullptr;
    }
  //  return nullptr;
}
Person* findPerson(vector<Person*> &p,int id){
  for (int i = 0; i < p.size(); i++) {
    if (p.at()->getId()==id) {
      return p.at(i);
    }
  }
}
////g++ -o checkout checkout.cpp
//ls
// ./checkout
