#include <iostream>

using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;

public:    
    void setName(string name){
        Name = name;
    
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if (age >= 18)
        {
            Age = age;
        }
        
        
    
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
     void AskForPromotion(){
         if(Age > 30){
             std::cout << Name << ", you got promoted" << std::endl;
         }else
            std::cout << Name << ", sorry not promoted" << std::endl;
        
     }

};

class Developer:public Employee{
public:
    string FavProgLang;

    Developer(string name, string company, int age, string favProgLang)
        :Employee(name, company, age)
    {
        FavProgLang = favProgLang;
       
    
    }
     void fixbug(){
            std::cout << getName() << " , fixed it with " << FavProgLang << std::endl;
        }

};
class Teacher: public Employee{
    public:
        string Subject;
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
        
    }

};


int main(){
    Employee employee1 = Employee("peter G", "atom tech", 22);
    Employee employee2 = Employee("camelot", "tech", 72);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    Developer d = Developer("grey", "youtube", 7, "python");
    d.fixbug();
    d.AskForPromotion();

    Teacher teacher = Teacher("mwalimu", "school", 45, "programming");
    teacher.AskForPromotion();
    std::cout << teacher.getName() << ", is a teacher" << std::endl; 
}