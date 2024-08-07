// WorldFruit.cpp : This file contains the 'main' function.
// The main() queries the user for a specific country, then calls the findFruit()
//  method to find the right output based on the correct location.
//  
//  The data for each location key and fruit mapped data are stored in map<> containers, separated by continent, which are located
//   within the fruitMap.h file. 
// 
// - Gabriel Webbe
// - 06/29/2024
// 
// -Latest Update: 07/29/24
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


/* findFruit(string) function.Returns a string
*   -This function takes the input, a string, and compares it to strings that
*     are the seven continents using if-else() statements. 
*   -Each statement utilizes a separate map<> container from fruitMap.h
*/
string findFruit(string country)
{
    string region;

     //North American States, Provinces, Territories, and Countries
    if (country == "NORTH AMERICA")
    {
         //now, time to ask for a specific state in the USA
        cout << "North America! Choose a State, Province, Territory, or Country!\n";
        getline(cin, region);
         //convert user input wto all upper case to negate case sensitivity
        transform(region.begin(), region.end(), region.begin(), ::toupper);

        //first, let's check if the state given is actually in the fruits<> map
         //if it is, return the mapped value for the appropriate key
        if (fruitsNA.count(region) == 1) {
            return fruitsNA.at(region);
        }
        else
        {   //location not supported
            return "Oh no! We don't have support for " + region + ".\n";
        }
    }
     //South American countries and islands
    else if (country == "SOUTH AMERICA") //if not the USA - then see if South America
    {
        cout << "South America! Choose a Country!\n";
        getline(cin, region);
        transform(region.begin(), region.end(), region.begin(), ::toupper);

        if (fruitsSA.count(region) == 1) {
            return fruitsSA.at(region);
        }
        else
        {
            return "Oh no! We don't have support for " + region + ".\n";
        }
    }
     //African countries
    else if (country == "AFRICA")
    {
        cout << "Africa! Choose a Country!\n";
        getline(cin, region);
        transform(region.begin(), region.end(), region.begin(), ::toupper);

        if (fruitsAF.count(region) == 1) {
            return fruitsAF.at(region);
        }
        else
        {
            return "Oh no! We don't have support for " + region + ".\n";
        }
    }
     //Australian States and Territories
    else if (country == "AUSTRALIA")
    {
        cout << "Australia! Choose a State or Territory!\n";
        getline(cin, region);
        transform(region.begin(), region.end(), region.begin(), ::toupper);

        if (fruitsAU.count(region) == 1) {
            return fruitsAU.at(region);
        }
        else
        {
            return "Oh no! We don't have support for " + region + ".\n";
        }

    }
     //Antarctica -- does not have a map<> in fruitMap.h
    else if (country == "ANTARCTICA")
    {
        return "Antarctica! This continent has no natural fruit production!\n";
    }
    else
    {
        return "Oh no! We don't have support for " + country + "yet!\n";
    }
}