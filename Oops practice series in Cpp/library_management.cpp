#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
    static int bookcount;
    string title;
    string author;
    int Id;
    bool isIssued;

public:
    Book(string t, string a, int i, bool issue = false) : title(t), author(a), Id(i), isIssued(issue) {
        bookcount++;
    }

    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    int getId() {
        return Id;
    }

    bool isIssuedStatus() {
        return isIssued;
    }

    void setIssueStatus(bool status) {
        isIssued = status;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << ", ID: " << Id << ", Issued: " << isIssued << endl;
    }

    static int getBookCount() {
        return bookcount;
    }
};

int Book::bookcount = 0;

class person {
    string name;
    int id;

public:
    person(string n, int i) : name(n), id(i) {}

    string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    void display() {
        cout << "Person Name: " << name << ", ID: " << id << endl;
    }
};

class member : public person {
    vector<Book> issuedBooks;

public:
    member(string n, int i) : person(n, i) {}

    void issueBook(Book &b) {
        if (!b.isIssuedStatus()) {
            b.setIssueStatus(true);
            issuedBooks.push_back(b);
            cout << "Book issued successfully!" << endl;
        } else {
            cout << "Book is already issued to someone else." << endl;
        }
    }

    void returnBook(Book &b) {
        for (auto it = issuedBooks.begin(); it != issuedBooks.end(); ++it) {
            if (it->getId() == b.getId()) {
                b.setIssueStatus(false);
                issuedBooks.erase(it);
                cout << "Book returned successfully!" << endl;
                return;
            }
        }
        cout << "This book was not issued to you." << endl;
    }

    void viewIssuedBooks() {
        if (issuedBooks.empty()) {
            cout << "No books currently issued." << endl;
        } else {
            cout << "Issued books:" << endl;
            for (auto &b : issuedBooks) {
                cout << "Title: " << b.getTitle() << ", Author: " << b.getAuthor() << endl;
            }
        }
    }
};

void displayMenu() {
    cout << "\nLibrary System Menu:\n";
    cout << "1. Issue Book\n";
    cout << "2. Return Book\n";
    cout << "3. View Issued Books\n";
    cout << "4. View Book Details\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}



class librarian:public person{
vector<Book> libraryBooks;
public:
    Librarian(string name, string id) : Person(name, id) {}

void addBook(Book&){

}
removeBook(Book&){
viewAllBooks(){

}
}

};


int main() {
    Book b1("The King of Kohli", "Ansh", 18);
    Book b2("Kohli", "Ash", 8);

    member m("Nano", 23);

int choice;
while(true){
    cin>>choice;

    switch(choice){
        case 1: {
            int id;
         cout << "Enter Book ID to issue (18 for 'The King of Kohli', 8 for 'Kohli'): ";

            cin>>id;

            if(id==b1.getId()){
                cout<<" The book is available with the id no.\n";
                 m.issueBook(b1);

            }
            else if(id==b2.getId()){
                cout<<" The book is available with the id no.\n";
                m.issueBook(b2);

            }
            else{
                cout<<" Invalid id for issueBook"<<endl;
            }
  
break;
        }


            case 2: {
                  int id;
         cout << "Enter Book ID to issue (18 for 'The King of Kohli', 8 for 'Kohli'): ";

            cin>>id;

            if(id==b1.getId()){
                cout<<" The book is available with the id no.\n";
                 m.returnBook(b1);

            }
            else if(id==b2.getId()){
                cout<<" The book is available with the id no.\n";
                m.returnBook(b2);

            }
            else{
                cout<<" Invalid id for returnBook"<<endl;
  
break;
        }

                 case 3: {
    m.viewIssuedBooks();
break;
        }
          case 4:
                cout << "Available Books:" << endl;
                b1.display();
                b2.display();
                break;
  
    case 5:
                cout << "Exiting the Library System. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
}


    return 0;
}
