#include <iostream>
#include <string>
#include <map>
#include "map.h"
using namespace std;


void Datamap(map<string, string> stateDataMap) {
    for (map<string, string>::iterator search = stateDataMap.begin(); search != stateDataMap.end(); search++) {
        cout << "(" << search->first << ", " << search->second << ")" << endl;
    }
}

void capitalName(map<string, string> stateDataMap, string stateName) {
    map<string, string>::iterator search = stateDataMap.find(stateName);
    if (search == stateDataMap.end()) {
        cout << stateName << " is not found" << endl;
    }
    else {
        cout << "The Capital of " << stateName << " is " << search->second << endl;
    }
}