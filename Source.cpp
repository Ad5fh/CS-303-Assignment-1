#include <iostream>
#include <fstream>
#include "Functions.h"

using namespace std;


int main() {
    int* line;
    int size = 100;
    int num;
    //The code below allow us to verify if the file exist and to open it
    ifstream MyFile;
    MyFile.open("input1.txt");
    if (MyFile.fail()) {
        cout << "Input file opening failed" << endl;
        exit(1);
    }
    //The code below reads the elements in the file line by line.
    while (!MyFile.eof()) {
        line = new int[size];
        for (int i = 0; i < size; i++) {
            MyFile >> num;
            line[i] = num;
        }
        //The codes below output the elements in the file.
        cout << endl;
        cout << "The numbers in the file are: " << endl;
        cout << endl;
        for (int i = 0; i < size; i++) {
            cout << line[i] << " ";
        }
        cout << endl;
        //The code below verify if a number exist in the file or not
        cout << "\nWhich number do you want to verify the existence in the file? " << endl;
        cout << "The number I want to check is: " << endl;
        cin >> num;
        if (checkNum(line, size, num) == -1) {
            cout << "The number does not exist in the file." << endl;
        }
        else {
            cout << "The number exists at index " << checkNum(line, size, num) << endl;
        }
        cout << endl;
        char choice;
        //The code below ask the user to add element in the list
        cout << "Do you want to add a number to the list?" << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            cout << "What new number would you like to add to the list? " << endl;
            cout << "The number I want to add is: ";
            cin >> num;
            addNum(line, num, size);
        }
        //The code below output the new list with/without the added number
        for (int i = 0; i < size; i++) {
            cout << line[i] << " ";
        }
        cout << endl;
        //The code below ask the user to delete an index in the list
        cout << "Would you like to delete an index from the list?" << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            cout << "What index would you like to delete? " << endl;
            cout << "The index is: ";
            cin >> num;
            delNum(line, num, size);
        }
        //The code below ask the user to output the new list with a zero on the place of the deleted number
        for (int i = 0; i < size; i++) {
            cout << line[i] << " ";
        }
        cout << endl;
        //The code below ask the user to modify an existing number by using its index
        cout << "Would you like to modify a number?" << endl;
        cin >> choice;
        int index, newNum;
        if (choice == 'y' || choice == 'Y') {
            cout << "What's your new number: ";
            cin >> newNum; //asking the new number 
            cout << "In which position do you want to put it?" << endl;
            cin >> index; //asking the index of the number to modify
            modifyNum(line, index, newNum, size);
        }
        cout << "The new list of number is : " << endl;

        for (int i = 0; i < size; i++) {
            cout << line[i] << " ";
        }
    }
    MyFile.close();
    return 0;
}