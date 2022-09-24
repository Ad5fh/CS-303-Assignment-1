//This is the header file which contains the declaration of my functions
#pragma once
#include <iostream>
#include <fstream>
using namespace std;

int checkNum(int* array, int size, int target);
void addNum(int*& array, int newNum, int& size);
void delNum(int*& array, int index, int& size);
int modifyNum(int*& array, int index, int newValue, int& size);