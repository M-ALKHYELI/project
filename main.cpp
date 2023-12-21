//hello world cpp

#include "inc/api.h"

static bool connec = false; //flag for connection

int userShow();
void loginPerson();

int main()
{   
    //show big beautiful welcome msg
    cout<<"\n\t\t\t=================================\n";
    cout<<"\t\t\t||        W E L L C O M E         ||\n";
    cout<<"\t\t\t||   Employee MANAGEMENT SYSTEM   ||\n";
    cout<<"\t\t\t==================================\n\n";        
    loginPerson(); int choice = 0;
    
    while(true){
        
        if(f == ForceExit){
            cout << "Thank you for using our system ! " << endl;
            return 0;
        }
        else{
            int choice = userShow();
            if(choice < 1 || choice > 5){
                //ERROR !
                cout << "Invalid choice" << endl;                
            }
            else {
                userFunctions(choice);
            }
        }
    
    }
    return 0;
}

void loginPerson(){

    cout<<"1. User \n2. Admin \n3. Exit"<<endl;
    int choice=0; string  password = ""; string  username = "";
    cin>>choice;
    if(choice < 1 || choice > 3){
        //ERROR !
        cout << "ERROR! Invalid choice" << endl;                
    }
    if(choice==1){
        username = "user"; password = "user";
        if(userLogin(username, password)){            

            cout << "\t\t\t================================\n";
            cout << "\t\t\t||     U S E R  P A N E L    || \n";
            cout << "\t\t\t================================\n";
        }
    }
    else if(choice==2){
        username = "admin"; password = "admin";
        if(userLogin(username, password)){
            
            cout << "\t\t\t================================\n";
            cout << "\t\t\t||    A D M I N  P A N E L    ||\n";
            cout << "\t\t\t================================\n";
        }
    }
    else{

        f = ForceExit;
    }
    
}

int userShow(){
    //show user options
    cout<<"\n\n1. Add Employee \n2. Delete Employee \n3. Update Employee \n4. Show Employee \n5. Exit"<<endl;
    
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    cout << endl << endl;

    return choice;
}

