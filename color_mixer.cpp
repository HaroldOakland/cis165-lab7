#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    int match;
    const int COLOR_SIZE = 20;

    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    cout << "Enter first primary color: " << endl;
    cin >> setw(COLOR_SIZE) >> first_color;

    if (strcmp(first_color, "red") != 0 &&
        strcmp(first_color, "blue") != 0 &&
        strcmp(first_color, "yellow") != 0)
    {   
        cout << "Invalid Color. Program Terminating." << endl;
        return 0;
    }
    
    cout << "Enter second primary color: " << endl;
    cin >> setw(COLOR_SIZE) >> second_color;
    
    if (strcmp(second_color, "red") != 0 &&
        strcmp(second_color, "blue") != 0 &&
        strcmp(second_color, "yellow") != 0)
    {    
        cout << "Invalid Color. Program Terminating." << endl;
        return 0;
    }
    
    if (strcmp(first_color, "red") == 0 &&
    strcmp(second_color, "red") == 0)
    {
        cout << "The color is red." << endl;
    }
    else if (strcmp(first_color, "blue") == 0 &&
    strcmp(second_color, "blue") == 0)
    {
        cout << "The color is blue." << endl;
    }
    else if (strcmp(first_color, "yellow") == 0 &&
    strcmp(second_color, "yellow") == 0)
    {
        cout << "The color is yellow." << endl;
    }
    else if (strcmp(first_color, "red") == 0 &&
    strcmp(second_color, "blue") == 0)
    {
        cout << "The color is purple." << endl;
    } 
    else if (strcmp(first_color, "blue") == 0 &&
    strcmp(second_color, "red") == 0)
    {
        cout << "The color is purple." << endl;
    } 
    else if (strcmp(first_color, "red") == 0 &&
    strcmp(second_color, "yellow") == 0)
    {
        cout << "The color is orange." << endl;
    }
    else if (strcmp(first_color, "yellow") == 0 &&
    strcmp(second_color, "red") == 0)
    {
        cout << "The color is orange." << endl;
    }
    else if (strcmp(first_color, "blue") == 0 &&
    strcmp(second_color, "yellow") == 0)
    {
        cout << "The color is green." << endl;
    }
    else if (strcmp(first_color, "yellow") == 0 &&
    strcmp(second_color, "blue") == 0)
    {
        cout << "The color is green." << endl;
    }
    return 0;
}
