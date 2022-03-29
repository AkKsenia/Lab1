#include "library.h"

void menu() {
    cout << "You have the opportunity to choose one of the following actions, enter the number you like: " << endl;
    cout << "1 - Create and display a square matrix" << endl;
    cout << "2 - Process data" << endl;
}

void menu1() {
    cout << "What type of numbers will the matrix consist of? Choose what you think is necessary: " << endl;
    cout << "1 - integer" << endl;
    cout << "2 - complex" << endl;
}

void menu2() {
    cout << "It is necessary to enter the elements of the matrix. What do you want to do?" << endl;
    cout << "1 - enter data from the keyboard" << endl;
    cout << "2 - entrust data entry to a computer" << endl;
}

void menu3() {
    cout << "What do you intend to do with the entered data? Choose what you think is necessary: " << endl;
    cout << "1 - perform matrix addition" << endl;
    cout << "2 - perform matrix multiplication" << endl;
    cout << "3 - multiply the matrix by a scalar" << endl;
}
