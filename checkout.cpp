// Jacqueline Cardenas
// Section 02
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
#include "book.cpp"

using namespace std;

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
//You are not obligated to use these function declarations - they're just given as examples
void readBooks(vector<Book *> & myBooks) {
  //reading of "book.txt"
  ifstream inData;
  inData.open("books.txt");
  string title;
  string author;
  string category;
  int bookID;

  Book* bookPtr=NULL;

  while(inData>>bookID){
    inData>>title>>author>>category;
    
    bookPtr=new Book(bookID,title,author,category);
    myBooks.push_back(bookPtr);
  }
  inData.close();
}

int readPersons(vector<Person *> & myCardholders) {
  //reading of "persons.txt"
  ifstream inData;
  inData.open("persons.txt");
  string fName;
  string lName;
  int cardID;
  bool isActive=false;
  int previousCard=0;//latest active cardID
  Person* personPtr=NULL;

  while(inData>>cardID){
  inData>>isActive>>fName>>lName;
  
  personPtr=new Person(cardID,isActive,fName,lName);
  myCardholders.push_back(personPtr);
  previousCard=cardID;
}

  inData.close();
  previousCard +=1;//keeping track of active cards to open new cards ID+1
  return previousCard;
  personPtr=NULL;
}

void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders) {
  ifstream inData;
  inData.open("rentals.txt");

  int bookID;
  int cardID;
}

void openCard(vector<Person *> & myCardholders, int nextID) {
  string fName;
  string lName;

  cout<<"Please enter first name:";
  cin>> fName;
  cout<<"Please enter last name:";
  cin>> lName;
}

Book * searchBook(vector<Book *> myBooks, int id) {
    return nullptr;
}


int main()
{
    vector<Book *> books;//holds pointer of type Book
    vector<Person *> cardholders;//holds pointer of type Person
    
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
                break;

            case 2:
                // Book return
                break;

            case 3:
                // View all available books
                break;

            case 4:
                // View all outstanding rentals
                break;

            case 5:
                // View outstanding rentals for a cardholder
                break;

            case 6:
                // Open new library card
                break;

            case 7:
                // Close library card
                break;

            case 8:
                // Must update records in files here before exiting the program
                break;

            default:
                cout << "Invalid entry" << endl;
                break;
        }
        cout << endl;
   } while(choice != 8);
      return 0;
}

