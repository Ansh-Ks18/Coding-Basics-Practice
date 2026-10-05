#include <iostream>
using namespace std;

class employee {
int  id;
string Name;
int  Salary;

public:
void set(int id,string Name, int Salary){
    this->id =id;
    this->Name=Name;
    this->Salary=Salary;
}
void get(){
    cout<<" The employee id is:"<<id<<endl;
   cout <<" The employee name is:"<<Name<<endl;
   cout <<" The employee salary is:"<<Salary;
}

};

int main() {
   employee o;
   o.set(2,"Anshu",1000000);
   o.get();

    return 0;
}
