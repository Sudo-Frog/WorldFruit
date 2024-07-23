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

        //Using a lookup table, a map, to store the values that correspong to specific locations
         //much smaller and easier to read than nested if-else statements
        map<string, string> fruits = {
             //Canadian Provinces/Territories
            {"ALBERTA","Gooseberries, Blueberries, Saskatoons, and Apricots."},
            {"BRITISH COLOMBIA","Apples, Plums, Peaches, and Grapes."},
            {"MANITOBA","Apples, Plums, Nectarines, Pears."},
            {"NEW BRUNSWICK","Strawberries, Currants, Blackberries, and Bearberries."},
            {"NEWFOUNDLAND AND LABRADOR","Raspberries, Strawberries, Lingonberries, and Cloudberries"},
            {"NOVA SCOTIA","Grapes, Strawberries, Plums, and Cranberries."},
            {"ONTARIO","Pears, Serviceberries, Grapes, and Apples."},
            {"PRINCE EDWARD ISLAND","Cranberries, Currants, Blueberries, and Haskap Berries"},
            {"QUEBEC","Gooseberries, Currants, Apples, and Strawberries."},
            {"SASKATCHEWAN","Saskatoons, Cranberries, Plums, and Buckthorn Berries."},
            {"NORTHWEST TERRITORIES","Currants, Bearberries, Cloudberries, and Currants."},
            {"NUNAVUT","Raspberries, Blackberries, Currants, and Cloudberries."},
            {"YUKON","Raspberries, Strawberries, Salmonberries, and Strawberries."},
             //United States of American States
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
            {"ALABAMA","Pecans, Blackberries, Peaches, and Muscadines."},
            {"OHIO","Pawpaw, Elderberries, Perimmons, and Black Raspberries."},
            {"KENTUCKY","Blueberries, Strawberries, Pawpaw, and Kiwi."},
            {"WEST VIRGINIA","Golden Apples, Peaches, Blueberries, and Watermelon."},
            {"TENNESSEE","Tomatoes, Bell Peppers, Cantaloupe, and Cherries."},
            {"INDIANA","Pears, Plums, Apples, and Black Cherries."},
            {"MICHIGAN","Cherries, Beans, Cucumber, and Peaches."},
            {"ILLINOIS","Goldrush Apple, Strawberries, Plums, and Nuts."},
            {"WISCONSIN","Cranberries, Cherries, Bush Fruits, and Bitter Melon."},
            {"MINNESOTA","Honeycrisp Apples, Blueberries, Watermelons, and Grapes."},
            {"IOWA","Hawkeye Apples, Pawpaw, Cherries, and Corn."},
            {"MISSOURI","Gooseberries, Currants, Apricots, and Nectarines."},
            {"ARKANSAS","Watermelon, Pears, Figs, and Black Apples."},
            {"MISSISSIPPI","Oranges, Figs, Gala Apples, and Plums."},
            {"LOUISIANA","Strawberries, Persimmons, Blackberries, and Tomatoes."},
            {"TEXAS","Grapefruit, Peppers, Cucumbers, and Mayhaw."},
            {"OKLAHOMA","Apples, Peaches, Peaches, and Elderberries."},
            {"KANSAS","Plums, Persimmons, Grapes, and Mulberries."},
            {"NEBRASKA","Pears, Plums, Grapes, and Cherries."},
            {"SOUTH DAKOTA","Cherries, Apples, Plums, Cantaloupes."},
            {"NORTH DAKOTA","Apricots, Pears, Currants, and Apples."},
            {"NEW MEXICO","Blackberries, Cherries, Peaches, and Apricots."},
            {"COLORADO","Plums, Strawberries, Cherries, and Apricots."},
            {"WYOMING","Chokecherries, Plums, Peaches, and Grapes."},
            {"MONTANA","Apricots, Plums, Pears, and Plums."},
            {"IDAHO","Pears, Huckleberries, Nectarines, and Grapes."},
            {"UTAH","Plums, Pears, Peaches, and Apricots."},
            {"ARIZONA","Melons, Lemons, Oranges, and Tomatoes."},
            {"CALIFORNIA","Grapes, Berries, Avocado, and Figs."},
            {"OREGON","Blueberries, Grapes, Pears, and Cherries."},
            {"WASHINGTON","Grapes, Apricots, Marionberries, and Blackberries."},
            {"NEVADA","Apricots, Plums, Pears, and Apples."},
            {"HAWAII","Mango, Coconuts, Rambutans, Lychee, and Guava."},
            {"ALASKA","Salmonberry, Currants, Lingonberries, and Strawberries."},
             //Central American countries
            {"MEXICO","Mango, Peppers, Papaya, and Avocado."},
            {"PANAMA","Mango, Jackfruit, Avocado, and Papaya."},
            {"NICARAGUA","Bananas, Lemon, Pineapple, and Mango."},
            {"HONDURAS","Plantain, Orange, Passion Fruit, and Chili Peppers."},
            {"GUATEMALA","Jocote, Mango, Star Fruit, Papaya."},
            {"EL SALVADOR","Loquat, Tamarind, Guava, and Mango."},
            {"COSTA RICA","Passion Fruit, Soursop, Papaya, and Dragon Fruit."},
            {"BELIZE","Soursop, Breadfruit, Dragon Fruit, and Papaya."},
             //Carribean Islands, although, just the recognized Countries (there are hundreds of islands)
            {"ANTIGUA AND BARBUDA","Coconut, Bananas, Cucumbers, and Pineapple."},
            {"DOMINICA","Guava, Pineapples, Breaduit, and Passion Fruit."},
            {"THE BAHAMAS","Soursop, Papaya, Limes, and Seagrapes."},
            {"BARBADOS","Passionfruit, Breadfruit, Goosebrrries, and Guava."},
            {"CUBA","Mango, Guava, Bananas, and Avocado."},
            {"DOMINICAN REPUBLIC","Soursop, Sapote, Avocado, and Pineapple."},
            {"GRENADA","Plantains, Mango, Passionfruit, and breadfruit."},
            {"HAITI","Avocado, Guava, Coconut, and Mango."},
            {"JAMAICA","Mango, Ackee, Jackfruit, and Plums."},
            {"ST. KITTS AND NEVIS","Soursop, Breadfruit, Mango, and Bananas."},
            {"ST. LUCIA","Coconut, Apples, Guava, and Papaya."},
            {"ST. VINCENT AND GRENADINES","Bananas, Soursop, Dragon Fruit, and Pineapples."},
            {"TRINIDAD AND TOBAGO","Papaya, Coconut, Ackee, and Breadfruit."},
        };

        //first, let's check if the state given is actually in the fruits<> map
         //if it is, return the mapped value for the appropriate key
          //otherwise, output that there is not support for that region yet.
        if (fruits.count(region) == 1) {
            return fruits[region];
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