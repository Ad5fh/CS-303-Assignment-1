//This is the implementation file and i have the definition of the different functions asked in the assignment
#include <iostream>
#include "Functions.h"//This line is to include the header file
using namespace std;

//The function below check if the number inserted by the user exist in the file or not
int checkNum(int* array, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}
//The function below add a number at the end of the list in the file
void addNum(int*& array, int newNum, int& size) {
    int* newArray = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }
    newArray[size] = newNum;
    size++;
    int* element = array;
    array = newArray;
    delete[] element;
}
//The function below delete a number based on its index and replace it by zero
void delNum(int*& array, int index, int& size) {
    if (index < size) {
        array[index] = 0;
    }
    else {
        cout << "The index provided is out of range" << endl;
    }
}
//The function below modify a number so it choose a number that exist and replace it by a new one based on it's index
int modifyNum(int*& array, int index, int newValue, int& size) {
    int oldValue;
    if (index < size) {
        oldValue = array[index];
        array[index] = newValue;
    }
    return oldValue;
}