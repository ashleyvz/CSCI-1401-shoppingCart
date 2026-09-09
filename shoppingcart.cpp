///////////////////////////////////////////////////////////////
// Name: Ashley Villela
// Date: 9/8/26
// Course: CSCI 1470.04
// Semester: Fall 2026
// Instructor: Dr. Jonatan Reyes
// Program Description: Shopping Cart Simulation
///////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <algorithm> // library for transform function
#include <cctype> // library for toupper function
using namespace std;

int main()
{
    string name, p1, p2, p3, p4, p5;
    double price1, price2, price3, price4, price5, subtotal, tax, total;

    cout << "Enter employee's name: ";
    getline(cin, name);
    
    //first item
    cout << endl << "Enter item #1: ";
    getline(cin, p1);
    
    cout << "Enter price: ";
    cin >> price1;
    
    //second item
    cin.ignore();
    cout << endl << "Enter item #2: ";
    getline(cin, p2);
    
    cout << "Enter price: ";
    cin >> price2;
    
    //third item
    cin.ignore();
    cout << endl << "Enter item #3: ";
    getline(cin, p3);
    
    cout << "Enter price: ";
    cin >> price3;
    
    //fourth item
    cin.ignore();
    cout << endl << "Enter item #4: ";
    getline(cin, p4);
    
    cout << "Enter price: ";
    cin >> price4;
    
    //fith item
    cin.ignore();
    cout << endl << "Enter item #5: ";
    getline(cin, p5);
    
    cout << "Enter price: ";
    cin >> price5;
    
    subtotal = price1 + price2 + price3 + price4 + price5;
    tax = subtotal * 0.15;
    total = subtotal + tax;
    
    cin.ignore();
    cin.get();
    system("clear");
    
    cout << setw(35) << "THANK YOU FOR SHOPPING AT" << endl;
    cout << setw(33) << "ASHLEY'S GROCERY STORE" << endl;
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << endl << "ASSOCIATE: " << name << endl;
    cout << "STORE#: 1 \nWESLACO, TX 78596" << endl;
    

    cout << fixed << setprecision(2);
    cout << endl;
    //1st
    transform(p1.begin(), p1.end(), p1.begin(), ::toupper);
    cout << left << setw(15) << p1 << right << setw(12) << "$" << setw(7) << price1 << endl;
    
    //2nd
    transform(p2.begin(), p2.end(), p2.begin(), ::toupper);
    cout << left << setw(15) << p2 << right << setw(12) << "$" << setw(7) << price2 << endl;
    
    //3rd
    transform(p3.begin(), p3.end(), p3.begin(), ::toupper);
    cout << left << setw(15) << p3 << right << setw(12) << "$" << setw(7) << price3 << endl;
    
    //4th
    transform(p4.begin(), p4.end(), p4.begin(), ::toupper);
    cout << left << setw(15) << p4 << right << setw(12) << "$" << setw(7) << price4 << endl;
    
    //5th
    transform(p5.begin(), p5.end(), p5.begin(), ::toupper);
    cout << left << setw(15) << p5 << right << setw(12) << "$" << setw(7) << price5 << endl;

    cout << endl << right << setw(19) << "SUBTOTAL" << setw(8) << "$" << setw(8) << subtotal << endl;
    cout << right << setw(14) << "TAX" << setw(13) << "$"  << setw(8) << tax << endl;
    cout << right << setw(16) << "TOTAL" << setw(11) << "$" << setw(8) << total << endl;
    //cout << setw(14) << "TOTAL" << right << setw(11) << "$" << setw(8) << total;
    cout << endl << right << setw(32) << "*** CUSTOMER COPY ***" << endl;
    
    return 0;
}
