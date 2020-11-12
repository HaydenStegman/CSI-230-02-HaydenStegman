/**
* @file util.cpp
* @brief  Week 10, LAB 10.1
*
* @author Hayden Stegman
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits
* 
*/
#include "util.h"

string pickRandomElement(vector<string> vect)
{
    srand(time(0));
    int pos = rand()%6;
    return vect[pos];
}

void doubleCalculations(vector<double> vect)
{
    double sum;
    double lowest = vect[0];
    double average;
    
    for(double d: vect)
    {
        //Get Sum
        sum += d;

        //Get Lowest
        if(d < lowest)
            lowest = d;
    }

    //Get Average
    average = sum / vect.size();

    //Print Calculations
    cout << "Sum: " << sum << endl;
    cout << "Avg: " << average << endl;
    cout << "Low: " << lowest << endl;
}

string camelCase(string str)
{
    //Index of changes
    int chgIndex = 0;
    //Get the length of the string
    int len = str.length();

    //Loop over every character of the string
    for(int i = 0; i < len; i++)
    {
        //IF the current index is a space
        if(str[i] == ' ')
        {
            //Make the letter at the next position (after the space) an upper case letter
            str[i + 1] = toupper(str[i + 1]);
            continue;
        }
        //If the current index is not a space
        else
        {
            //If it is the first letter, make it lowerCase
            if(i == 0)
            {
                str[chgIndex++] = tolower(str[i]);
            }
            //If it is not the first letter, just copy the letter
            else
            {
                str[chgIndex++] = str[i];
            }
        }
    }

    //Return the new string
    return str.substr(0, chgIndex);
}