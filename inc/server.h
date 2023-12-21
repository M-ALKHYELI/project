#if !defined(MACRO_SERVER_H)
#define MACRO_SERVER_H

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

enum flags{
    user, admin, ForceExit 
};

flags f ;

struct EmployeeDetails{

    string name;
    int id;
    string department;
    string position;
    string salary;
};

class Employe {

private:
    EmployeeDetails Emp;
public:
    Employe(){
        Emp.name = "";
        Emp.id = 0;
        Emp.department = "";
        Emp.position = "";
        Emp.salary = "";
    }
    Employe(string name, int id, string department, string position, string salary){
        Emp.name = name;
        Emp.id = id;
        Emp.department = department;
        Emp.position = position;
        Emp.salary = salary;
    }
    //setter for Emp
    void setName(string name){
        Emp.name = name;
    }
    void setId(int id){
        Emp.id = id;
    }
    void setDepartment(string department){
        Emp.department = department;
    }
    void setPosition(string position){
        Emp.position = position;
    }
    void setSalary(string salary){
        Emp.salary = salary;
    }
    //getter for Emp
    string getName(){
        return Emp.name;
    }
    int getId(){
        return Emp.id;
    }
    string getDepartment(){
        return Emp.department;
    }
    string getPosition(){
        return Emp.position;
    }
    string getSalary(){
        return Emp.salary;
    }
    
    ~Employe(){}
    
    void addEmployee();
    void showEmployee();
    bool deleteEmployee(int id);
    bool updateEmployee(int id);
    // void sortEmployee();
     
};

//vector list for storing employee details

vector<Employe> classEmpList;
Employe classEmp;


//define the funtions of Employe class
void Employe :: addEmployee(){
    
    string name, department, position, salary;
    int id;

    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Id : ";
    cin>>id;
    cout<<"Enter Department : ";
    cin>>department;
    cout<<"Enter Position : ";
    cin>>position;
    cout<<"Enter Salary : ";
    cin>>salary;

    classEmpList.push_back(Employe(name, id, department, position, salary));
    
}

void Employe :: showEmployee(){

    //show row wise    
    cout
        << left
        << setw(10)
        << "Name"
        << left
        << setw(5)
        << "ID"
        << left
        << setw(15)
        << "Department"
        << left
        << setw(15)
        << "Position"        
        << left
        << setw(10)
        << "Salary"
        << endl;
    for(int i=0; i<classEmpList.size(); i++){
        cout
            << left
            << setw(10)
            << classEmpList[i].getName()
            << left
            << setw(5)
            << classEmpList[i].getId()
            << left
            << setw(15)
            << classEmpList[i].getDepartment()
            << left
            << setw(15)
            << classEmpList[i].getPosition()
            << left
            << setw(10)
            << classEmpList[i].getSalary()
            << endl;
    }
        
}

bool Employe :: deleteEmployee(int id){
    //delete 
    for(int i=0; i<classEmpList.size(); i++){
        if(classEmpList[i].getId() == id){
            classEmpList.erase(classEmpList.begin()+i);
            return true;
        }
    }
    return false;
}

bool Employe :: updateEmployee(int id){
    
    //update
    for(int i=0; i<classEmpList.size(); i++){
        if(classEmpList[i].getId() == id){
            string name, department, position, salary;
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Id : ";
            cin>>id;
            cout<<"Enter Department : ";
            cin>>department;
            cout<<"Enter Position : ";
            cin>>position;
            cout<<"Enter Salary : ";
            cin>>salary;
            classEmpList[i].setName(name);
            classEmpList[i].setId(id);
            classEmpList[i].setDepartment(department);
            classEmpList[i].setPosition(position);
            classEmpList[i].setSalary(salary);
            return true;
        }
    }
    return false;
}

#endif // MACRO


