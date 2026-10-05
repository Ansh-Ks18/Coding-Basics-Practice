#include<iostream>
using namespace std;


class person {
  string name;
    int age;

    public:

    person(string n, int a){
        name=n;
        age=a;
    }

    string getName(){
        return name;
    }

    void setName(string n){
        name=n;
    }

   int getAge(){
        return age;
    }

    void setAge(int a){
       age=a;
    }


void display(){
    cout << "Name: " << name << ", Age: " << age << endl;
}

};



int main(){
person p("Anshu",20);
p.display();
cout<<endl;
p.setName("Rachin");
p.setAge(35);

cout<<" The updated name is:"<<p.getName() <<endl<<" The updated Age is : "<<p.getAge();

    return 0;
}