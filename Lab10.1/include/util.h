/**
* @file util.h
* @brief  Week 10, LAB 10.1
*
* @author Hayden Stegman
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits
* 
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

/**
 * @brief picks a random string from a Vector passes in.
 * @date 11/11/2020
 * @param Vector vect
 * @return string chosenString
 */ 
string pickRandomElement(vector<string> vect);

/**
 * @brief Calculate and print out the Sum, Average, and lowest double in the vector.
 * @date 11/11/2020
 * @param Vector vect
 * @return void
 */ 
void doubleCalculations(vector<double> vect);

/**
 * @brief converts the string inputed to camel case.
 * @date 11/11/2020
 * @param String str
 * @return string camelString
 */ 
string camelCase(string str);