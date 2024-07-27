/**
fruitMap.h file
   This is a header file designed to store the map<> containers used by
    WorldFruit.cpp for both ease of access, modifiability, to demonstrate understanding of 
    header files, and to simply keep WorldFruit.cpp clean of ugly walls of strings.

    This file uses map<> containers to store the values of locations and their fruits, following this example: 
      map<key value: country or state, mapped value: fruits>

*/

#include <map>
#include <string>

using namespace std;

 //North America
map<string, string> fruitsNA = {
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

//South America
map<string, string> fruitsSA = {
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