#include "book.h"

Book::Book(int id, string bookName, string auth, string cat) {
    // complete constructor
    bookID = id;
    title = bookName;
    author = auth;
    category = cat;
}

string Book::getTitle() {
    return ""; // complete
}

string Book::getAuthor() {
    return ""; // complete
}

string Book::getCategory() {
    return ""; // complete
}

int Book::getId() {
    return 0; // complete
}
void Book::setPersonPtr(Person * ptr) {
} // complete

Person * Book::getPersonPtr() {
    return nullptr; // complete
}
