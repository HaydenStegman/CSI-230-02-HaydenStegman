/**
* @file main.cpp
* @brief  Week 10, LAB 10.1
*
* @author Hayden Stegman
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits
* 
*/

#include <iostream>
#include <vector>
#include "util.h"

using namespace std;

int main()
{
    cout << "-----------" << endl;
    //Create the 6 Element String Vector and Fill it.
    vector <string>  strVec;
    strVec.push_back("Hayden");
    strVec.push_back("Mike");
    strVec.push_back("Johny");
    strVec.push_back("Billy");
    strVec.push_back("Chris");
    strVec.push_back("Peter");

    // Print out the Vector
    cout << "Dumping the Vector of 6 Strings:";
    for(string s: strVec)
    {
        cout << " " << s;
    }
    cout << endl;

    //Pick Random Element and print it.
    cout << "Calling pickRandomElement" << endl;
    cout << "Element Picked: " << pickRandomElement(strVec) << endl;
    cout << "-----------" << endl;

    //Create the 6 Element Double Vector and Fill it.
    vector <double>  doubleVec;
    doubleVec.push_back(0.05);
    doubleVec.push_back(1.9);
    doubleVec.push_back(2.98);
    doubleVec.push_back(28.0);
    doubleVec.push_back(1.3);
    doubleVec.push_back(9.8);

    // Print out the Vector
    cout << "Dumping the Vector of 6 Doubles:";
    for(double d: doubleVec)
    {
        cout << " " << d;
    }
    cout << endl;

    //Make the double calculations
    cout << "Calling doubleCalculations" << endl;
    doubleCalculations(doubleVec);
    cout << "-----------" << endl;

    //String to make into camel case
    string stringToConvert = "A little bird with a yellow bill";
    cout << "Original: " << stringToConvert << endl;
    cout << "Camel Case: " << camelCase(stringToConvert) << endl;
    cout << "-----------" << endl;

    return EXIT_SUCCESS;
}