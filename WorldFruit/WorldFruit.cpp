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
#include "fruitMap.h"

using namespace std;

//method declaration so my main() can stay at the top
string findFruit(string);


int main()
{
    string country;
    string state;

    //ask the user for a country name and store in a String
    cout << "Hello! Choose a country:\n";
    getline(cin, country);
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
    string region;

    //if statement to ensure the given country is one supported
    if (country == "NORTH AMERICA")
    {
         //now, time to ask for a specific state in the USA
        cout << "North America! Choose a State, Province, Territory, or Country!\n";
        getline(cin, region);
         //convert user input wto all upper case to negate case sensitivity
        transform(region.begin(), region.end(), region.begin(), ::toupper);

        //first, let's check if the state given is actually in the fruits<> map
         //if it is, return the mapped value for the appropriate key
          //otherwise, output that there is not support for that region yet.
        if (fruits.count(region) == 1) {
            return fruits.at(region);
        }
        else
        {
            return "Oh no! We don't have support for there yet.\n";
        }
    }
    else if (country == "SOUTH AMERICA") //if not the USA - then see if South America
    {
        cout << "South America! Choose a Country!\n";
        getline(cin, region);
        //convert user input wto all upper case to negate case sensitivity
        transform(region.begin(), region.end(), region.begin(), ::toupper);

        map<string, string> fruits = {
            {"COLOMBIA", "Granadilla, Pitaya, Zapote, and Lulo."},
            {"VENEZUELA", "Passion Fruit, Mango, Guava, and and Bananas."},
            {"BRAZIL", "Acai, Guarana, Jabuticaba, and Papaya."},
            {"ECUADOR", "Soursop, Plantain, Pepino, and Naranjilla."},
            {"PERU", "Camu Camu, Chirimoya, Passionfruit, and Cocona."},
            {"BOLIVIA", "Coconut, Banana, Kiwi, and Pineapples."},
            {"CHILE", "Grapes, Papaya, Apples, and Lucama."},
            {"GUYANA", "Pitanga, Spice Mango, Golden Apple, and Passion Fruit."},
            {"SURINAME", "Milk Fruit, Surinam Cherry, Coconut, and Cherries."},
            {"FRENCH GUIANA", "Lemon, Orange, Chilli Peppers, and Apricots."},
            {"ARGENTINA", "Tangerines, Plums, Oranges, and Apples."},
            {"URUGUAY", "Guabiyu, Oranges, Blueberries, and Apples."},
        };

        if (fruits.count(region) == 1) {
            return fruits[region];
        }
        else
        {
            return "Oh no! We don't have support for there yet.\n";
        }
    }
    else
    {
        return "Oh no! We don't have support for that country, yet!\n";
    }
}