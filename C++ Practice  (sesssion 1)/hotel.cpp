#include <iostream>

using namespace std;

class Person {
public:
    Person(string first_name, string last_name) : first_name_(first_name), last_name_(last_name) {}

    const string& get_first_name() const {
        return first_name_;
    }

    const string& get_last_name() const {
        return last_name_;
    }

private:
    string first_name_;
    string last_name_;
};

int main() {
    Person person("John", "Doe");
    string  first_name_;
    string last_name_;
    cin>> first_name_>>last_name_;
    cout << person.get_first_name( first_name_) << " " << person.get_last_name(last_name_) << endl;
    return 0;
}