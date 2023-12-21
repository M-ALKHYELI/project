#if !defined(MACRO_API_H)
#define MACRO_API_H
#include "server.h"



bool userLogin(string username, string password){

    if(username == "user" && password == "user"){
        f = user;
        return true;
    }
    else if(username == "admin" && password == "admin"){
        f = admin;
        return true;   //val for admin in enum
    }
    else{
        cout << "Invalid username or password" << endl;
        return false;
    }
}


void userFunctions(int choice){
    //switch b/w choices class functions Employee
    static int id;
    switch(choice){
        case 1:
            classEmp.addEmployee();
            break;
        case 2:
            if(f==user){
                cout<<"PERMISSION ERROR\nLogin As Admin Please"<<endl;
                break;
            }
            cout<<"Enter id : "; cin>>id;
            classEmp.deleteEmployee(id);
            break;
        case 3:
            if(f==user){
                cout<<"PERMISSION ERROR\nLogin As Admin Please"<<endl;
                break;
            }
            cout<<"Enter id : "; cin>>id;
            classEmp.updateEmployee(id);
            break;
        case 4:
            classEmp.showEmployee();
            break;
        case 5:
            f = ForceExit;
            break;
        default:
            cout<<"Invalid Choice";
            break;
    }
}

#endif // _AP

