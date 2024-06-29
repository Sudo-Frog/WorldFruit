// WorldFruit.cpp : This file contains the 'main' function.
// Program execution begins and ends here
// 
// - Gabriel Webbe
// - 06/09/2024
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string country;

    //ask the user for a country name
    cout << "Hello! Choose a country:\n";
    //store that country name
    cin >> country;
    //for now, lets just repeat the country name
    cout << country << ": is the country you gave me!\n";

}