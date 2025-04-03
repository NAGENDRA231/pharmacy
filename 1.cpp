#include <iostream>
#include <conio.h>
using namespace std;

class Authentication_Management
{
public:
    string username, password;
    // Nagenfrr sdsfdsfs sfsddfs 
    void Display_Menu()
    {
        cout << "\n=============================================================" << endl;
        cout << "||\t\t    USER AUTHENTICATION                    ||" << endl;
        cout << "=============================================================" << endl;
    }
    void login()
    {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "1234")
        {
            cout << "Login Successful!\n";
        }
        else
        {
            cout << "Invalid Credentials!\n";
        }
    }
};

class inventory
{
public:
    int choice2;
    int Price, Quantity, Exp_date;
    string name;

    void Add_Medicine()
    {
        cout << " Enter Medicine Name = ";
        cin >> name;

        cout << " Enter Medicine Name = ";
        cin >> Price;

        cout << " Enter Medicine Name = ";
        cin >> Quantity;

        cout << " Enter Medicine Name = ";
        cin >> Exp_date;
    }

    void Update_Medicine()
    {
    }
    void Search_Medicine()
    {
    }
    void Delete_Medicine()
    {
    }
    void View_Medicine()
    {
    }

    void print2()
    {

        cout << "\n=============================================================" << endl;
        cout << "||\t\t    INVENTORY MANAGEMENT                   ||" << endl;
        cout << "=============================================================" << endl;
        cout << "   1> Add Medicine" << endl;
        cout << "   2> Update Medicine" << endl;
        cout << "   3> Search Medicine" << endl;
        cout << "   4> Delete Medicine" << endl;
        cout << "   5> View Medicine List" << endl;
        cout << "   6> Back Main Menu" << endl;
        // cout << "-------------------------------------------------------------" << endl;
        cout << "_____________________________________________________________" << endl;
        cout << "  Enter your choice = ";
        cin >> choice2;

        do
        {
            switch (choice2)
            {
            case 1:
            {
                Add_Medicine();
            }

            case 2:
            {
                // Update medicine
            }

            case 3:
            {
                // Search Medicine
            }

            case 4:
            {
                // Delete medicine
            }

            case 5:
            {
                // View Medicine List
            }

            default:
            {
                cout << "\n Invalid choice...!!\n";
            }
            }
        } while (choice2 != 5);
    }
};

int main()
{

    Authentication_Management A1;
    A1.Display_Menu();
    A1.login();

    inventory n1;

    int choice1;
    do
    {
        cout << "\n=============================================================" << endl;
        cout << "||\t\t      !!( Welcome )!!                      ||" << endl;
        cout << "||\t\t Pharmacy Management System                ||" << endl;
        cout << "||\t\t Biratnagar, Morang ( NEPAL )              ||" << endl;
        cout << "=============================================================" << endl
             << endl;

        cout << " 1> Inventory Management" << endl;
        cout << " 2> Sales and Billing Management" << endl;
        cout << " 3> Reports and Analytics Management" << endl;
        cout << " 4> Data Storage and Security " << endl;
        cout << " 5> Exit Program " << endl;

        cin >> choice1;
        switch (choice1)
        {
        case 1:
        {
            n1.print2();
            break;
        }

        case 2:
        {
            //  Sale and billing Management
            break;
        }

        case 3:
        {
            //  Reports and Analysis Management
            break;
        }

        case 4:
        {
            cout << "\n Exiting...!!\n";
            break;
        }

        default:
        {
            cout << "\n Invalid choice...!!\n";
        }
        }

    } while (choice1 != 4);

    return 0;
}
