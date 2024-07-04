// WorldFruit.cpp : This file contains the 'main' function.
// The main() queries the user for a specific country, then calls the findFruit()
//  method to find the right output based on the correct location.
//  
// 
// - Gabriel Webbe
// - 06/29/2024
// 
// -Latest Update: 07/04/24
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

//method declaration so my main() can stay at the top
string findFruit(string);


int main()
{
    string country;
    string state;

    //ask the user for a country name and store in a String
    cout << "Hello! Choose a country:\n";
    cin >> country;
    //convert user input to all upper case to negate case sensitivity
     //transform is included with <algorithm>
    transform(country.begin(), country.end(), country.begin(),::toupper);

    //the functionality for finding a fruit lives in this method
     //somewhere along the line, I could split the logic by having methods for specific regions, but i'm sure that'd
      //end up cantankerous to later modification
    cout << findFruit(country);
}


//This method contains the functionality to answer the user when given a specific state in the United States
string findFruit(string country)
{
    string state;

    if (country == "USA" || country == "AMERICA")
    {
        //now, time to ask for a specific state in the USA
        cout << "United States! Choose a State!\n";
        cin >> state;
        //convert user input wto all upper case to negate case sensitivity
        transform(state.begin(), state.end(), state.begin(), ::toupper);

        //Using a lookup table, a map, to store the values that correspong to specific locations
         //much smaller and easier to read than nested if-else statements
        map<string, string> fruits = {
            {"PENNSYLVANIA", "Pawpaw, American Persimmon, Wild Plum, and Red Mulberry."},
            {"NEW YORK", "Apples, Raspberries, Blackberries, and Strawberries."},
            {"CONNECTICUT", "Apples, Peaches, and Pears."},
            {"VERMONT", "Apples, Blueberries, Apricot, and Pears."},
            {"NEW HAMPSHIRE", "Apples, Blueberries, Apricot, and Pears."},
            {"MASSACHUSETTS", "Cranberries, Blueberries, and Grapes."},
            {"RHODE ISLAND", "Greening Apples."},
            {"MAINE", "Blueberries, Plums, and Chokeberries."},
            {"MARYLAND", "Apples, Cherries, and Grapes."},
            {"DELAWARE", "Strawberries and Peaches."},
            {"NEW JERSEY", "Tomatoes, Cucumbers, and Olives."},
            {"VIRGINIA", "Tomatoes, Grapes, Cucumbers, and Apples."},
            {"NORTH CAROLINA", "Apples, Peaches, and Pecans."},
            {"SOUTH CAROLINA", "Apples, Peaches, Plums."},
            {"GEORGIA", "Apples, Watermelon, Pecans, and Peaches."},
            {"FLORIDA", "Avocado, Mango, Fig, and Citrus."},
            //the other states will be appended here
        };

        //this is less user-friendly through the terminal, because if the input given is not
         //available, this returns 0 and exits
        return fruits[state];
    }
    else
    {
        return "Oh no! We don't have support for there yet.\n";
    }
}


