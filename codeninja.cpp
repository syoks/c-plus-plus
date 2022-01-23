#include <iostream>
using std::string;

class Employee{
public:    
    string Name;
    string Company;
    int Age;

    void Introduceself(){
        std::cout << "Name - "<< Name <<std::endl;
        std::cout << "Company - "<< Company <<std::endl;
        std::cout << "Age - "<< Age <<std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

};

int main(){
    Employee employee1 = Employee("Peter", "csk", 22);
    employee1.Introduceself();
    
    Employee employee2 = Employee("angela", "azone", 25);

    employee2.Introduceself();


}