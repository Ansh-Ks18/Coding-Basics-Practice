#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    virtual void getdata() = 0; // pure virtual function
    virtual void putdata() const = 0; // pure virtual function
    virtual ~Person() {} // virtual destructor
};

class Professor : public Person {
    int publications;
    static int id_counter;
    int cur_id;

public:
    Professor() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() const override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor::id_counter = 0;

class Student : public Person {
    static const int size = 6;
    vector<int> marks;
    static int id_counter;
    int cur_id;

public:
    Student() {
        marks.resize(size);
        cur_id = ++id_counter;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < size; ++i) {
            cin >> marks[i];
        }
    }

    void putdata() const override {
        int sum = 0;
        for (int mark : marks) {
            sum += mark;
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int Student::id_counter = 0;

int main() {
    int n;
    cin >> n;
    vector<Person*> persons(n);

    for (int i = 0; i < n; ++i) {
        int type;
        cin >> type;
        if (type == 1) {
            persons[i] = new Professor();
        } else if (type == 2) {
            persons[i] = new Student();
        }
        persons[i]->getdata();
    }

    for (int i = 0; i < n; ++i) {
        persons[i]->putdata();
        delete persons[i]; // cleanup dynamically allocated objects
    }

    return 0;
}
