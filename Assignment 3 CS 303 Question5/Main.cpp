#include <iostream>
#include <string>
#include <map>
#include "map.h"
using namespace std;


int main() {

    map<string, string> stateDataMap;
    string state;
    char choice;
    cout << "The initial map in the form of (State, Capital) is: " << endl;
    //Below are the statement that add the pairs provided by the assignment to the stateDataMap
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";
    Datamap(stateDataMap);//Output the data stored in the StateDataMap
    cout << endl;
    cout << "Enter the name of the state you want to update: ";
    stateDataMap["California"] = "Los Angeles"; //Statement that changes the capital of California to Los Angeles

    getline(cin, state);
    capitalName(stateDataMap, state);
    cout << endl;
    cout << "The updated map is: " << endl;
    Datamap(stateDataMap);
    cout << endl;
    //Below you have the statements that outputs the capital name using the state name which is entered by the user
    while (1) {
        cout << "Enter state name: ";
        getline(cin, state);
        capitalName(stateDataMap, state);
    }
    return 0;
}