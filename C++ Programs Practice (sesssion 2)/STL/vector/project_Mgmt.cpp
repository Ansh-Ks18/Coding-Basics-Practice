#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class employee{
int employee_Id;
string name;
string department;
vector<int>ratings;

 Employee(int employee_Id, string name, string department) : id(id), name(name), department(department) {}
    void 

    void addRating(int rating) {
        ratings.push_back(rating);
    }
    
    double getAverageRating() const {
        if (ratings.empty()) return 0;
        double sum = 0;
        for (int rating : ratings) {
            sum += rating;
        }
        return sum / ratings.size();
    }


    vector<int>employees;
void addemployee(int employee_id,string name,string department ){
    employees.push_back(employee(employee_id,name,department){

    }
    void deleteemployee(int employee_id,string name,string department ){
   emplyees.erase(emplyee(employee_id,name,department)

    }

void searchemployee(int employee_id,string name,string department){
    for(auto emp: employees)
    if(emp.id==id)
    return emp;
}
return null;

};


    

int main() {
 employees o;

    return 0;
}
