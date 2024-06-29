// WorldFruit.cpp : This file contains the 'main' function.
// Program execution begins and ends here
// 
// - Gabriel Webbe
// - 06/09/2024
//
//  **Right now, the functionality of choosing the right country and region/state
//     are done as if-else statements in the main. I want to move those to another class or method
//      for legibility.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string country;
    string state;

    //ask the user for a country name and store in a String
    cout << "Hello! Choose a country:\n";
    cin >> country;

    //so far, ask to see if the user wants to see fruit information for the USA
    if (country == "USA")
    {
        //now, time to ask for a specific state in the USA
        cout << "United States! Choose a State!\n";
        cin >> state;

        //here, we can do functionality based on the given input, using if-else-if statements.
         //Eventually, should move this to another class or method to make it prettier
        if(state == "Pennsylvania")
        {
            cout << "Pawpaw, American Persimmon, Wild Plum, and Red Mulberry.\n";
        }
        else if (state == "New York")
        {
            cout << "Apples, Bramble Fruits, and Strawberries.\n";
        }
        else if (state == "Connecticut")
        {
            cout << "Apples, Peaches, and Pears.\n";
        }
        else if (state == "Vermont")
        {
            cout << "Apples, Kiwis, Aronia, and Haskap.\n";
        }
        else if (state == "New Hampshire")
        {
            cout << "Apples, Blueberries, Apricot, and Pears.\n";
        }
        else if (state == "Massachusetts")
        {
            cout << "Cranberries, Blueberries, and Grapes.\n";
        }
        else if (state == "Rhode Island")
        {
            cout << "Greening Apples.\n";
        }
        else if (state == "Maine")
        {
            cout << "Blueberries, Plums, and Chokeberries.\n";
        }
        else if (state == "Maryland")
        {
            cout << "Apples, Cherries, and Grapes.\n";
        }
        else if (state == "Delaware")
        {
            cout << "Strawberries and Peaches.\n";
        }
        else if (state == "New Jersey")
        {
            cout << "Tomatoes, Cucumbers, and Olives.\n";
        }
        else if (state == "Virginia")
        {
            cout << "Tomatoes, Grapes, Cucumbers, and Apples.\n";
        }
        else if (state == "North Carolina")
        {
            cout << "Apples, Peaches, and Pecans.\n";
        }
        else if (state == "South Carolina")
        {
            cout << "Apples, Peaches, Plums.\n";
        }
        else if (state == "Georgia")
        {
            cout << "Apples, Watermelon, Pecans, and Peaches.\n";
        }
        else if (state == "Florida")
        {
            cout << "Avocado, Mango, Fig, and Citrus.\n";
        }
        else
        {
            cout << "Oh no! We don't have support for there yet!\n";
        }



    }
    else
    {
        //if they don't choose USA, wthere's no support yet.
        cout << "Oh no! We don't have support for there yet!\n";
    }

}