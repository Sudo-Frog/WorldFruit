// WorldFruit.cpp : This file contains the 'main' function.
// Program execution begins and ends here
// 
// - Gabriel Webbe
// - 06/29/2024
// 
// -Latest Update: 07/04/24
//
//  **Right now, the functionality of choosing the right country and region/state
//     are done as if-else statements in the main method. I want to move those to another class or method
//      for legibility and modifiability.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

//method declaration so my main() can stay at the top
void findFruit(string);


int main()
{
    string country;
    string state;

    //ask the user for a country name and store in a String
    cout << "Hello! Choose a country:\n";
    cin >> country;

    //the functionality for finding a fruit lives in this method
     //somewhere along the line, I could split the logic by having methods for specific regions
    findFruit(country);

}


//This method contains the functionality to answer the user when given a specific state in the United States
void findFruit(string country)
{
    string state;

    if (country == "USA" || country == "America")
    {
        //now, time to ask for a specific state in the USA
        cout << "United States! Choose a State!\n";
        cin >> state;

        //Using a lookup table, a map, to store the values that correspong to specific locations
        map<string, string> fruits = {
            {"Pennsylvania", "Pawpaw, American Persimmon, Wild Plum, and Red Mulberry."},
            {"New York", "Apples, Raspberries, Blackberries, and Strawberries."},
            {"Connecticut", "Apples, Peaches, and Pears."},
            {"Vermont", "Apples, Blueberries, Apricot, and Pears."},
            {"New Hampshire", "Apples, Blueberries, Apricot, and Pears."},
            {"Massachusetts", "Cranberries, Blueberries, and Grapes."},
            {"Rhode Island", "Greening Apples."},
            {"Maine", "Blueberries, Plums, and Chokeberries."},
            {"Maryland", "Apples, Cherries, and Grapes."},
            {"Delaware", "Strawberries and Peaches."},
            {"New Jersey", "Tomatoes, Cucumbers, and Olives."},
            {"Virginia", "Tomatoes, Grapes, Cucumbers, and Apples."},
            {"North Carolina", "Apples, Peaches, and Pecans."},
            {"South Carolina", "Apples, Peaches, Plums."},
            {"Georgia", "Apples, Watermelon, Pecans, and Peaches."},
            {"Florida", "Avocado, Mango, Fig, and Citrus."},
            //the other states will be appended here
        };

        cout << fruits[state];
    }
    else
    {
        cout << "Oh no! We don't have support for there yet.";
    }
}


