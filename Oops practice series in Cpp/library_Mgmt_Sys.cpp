#include<iostream>
using namespace std;

class person{
    
    public:
    int id;
    string name;
 static int BorrowedBooks_count;

  person(int i, string n){
    id=i;
    name=n;

  }


 virtual int showDetails() = 0;

 void display(){
    cout<<"the BorrowBook count is :"<<BorrowedBooks_count<<endl;
 }

};

// Initialize static variable
int person::  BorrowedBooks_count=0;

class member: public person{
member(int i, string n) : person(i, n) {}

bool checkIssueBook(string author, string title){
    if(BorrowedBooks_count< 5){
          BorrowedBooks_count += 1;

        return true;
    }
    else{
          BorrowedBooks_count -= 1;
        return false;
    }

}

bool checkAvailability(string title , int id){
    if (title==" Jack" && id==1 2 3 4 ){
        cout<<" book is available "<<endl;
          return true;
    }
else{
    cout << "Book is not available." << endl;
        return false;
    }

    void showDetails() override{
cout<<" The name of the member is : "<<name<<endl;
cout<<" The id of the member is :" <<id<<endl;
    }


};

class librarian: public person{
public:
    // Constructor
    librarian(int i, string n) : person(i, n) {}

     void  showDetails() override{
cout<<" The name of the librarian is : "<<name<<endl;
cout<<" The id of the librarian is :" <<id<<endl;
    }
    
    };




class Book{
string title;
string author ;
bool isIssued;

    Book(string t, string a) : title(t), author(a), isIssued(false) {}


string  getTitle(){
    return title ;
}

string  getAuthor(){
    return author ;
}

bool  isBookIssued(){
 return isIssued;
}

bool checkIssueBook(string author, string title){
    if(BorrowedBooks_count>=1){
          BorrowedBooks_count += 1;

        return true;
    }
    else{
          BorrowedBooks_count -= 1;
        return false;
    }

}


};

class library{


};









int main(){




    return 0;
}