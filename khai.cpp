#include <iostream>
#include <string>

using namespace std;

class abstractEmployee {
public:
    virtual void AskForPromotion()=0;
};

class Employee : abstractEmployee {
private:
    string Name;
    string Company;
    int Age;
    
    
public:
    Employee(string name, string company, int age) : Name(name), Company(company), Age(age) {
    }
    
    void IntroduceYourself() {
    cout << "Name-" << Name << endl;
    cout << "Company-" <<Company << endl;
    cout << "age-" << Age << endl;
    }  
    void AskForPromotion(){
        if (Age > 30)
            cout << Name << " promotion ";
        else 
            cout << Name << " cuts";
    }
    
};

class Developer:public Employee {
    public:
     Developer(string name, string company, int age) 
     : Employee(name, company, age) {}
    
};

int main()
{
    
    // Employee employee1= Employee("Saldina", "YT", 25);
    // // employee1.Name="Sadina";
    // // employee1.Company="codebeaty";
    // // employee1.Age=15;
    // // employee1.IntroduceYourself();
    // employee1.AskForPromotion();
    Developer dever = Developer("Saldina", "YT", 25);
    dever.AskForPromotion();
    return 0;
}

