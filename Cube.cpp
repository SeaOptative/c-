
// Program name : cubeobject.cpp
// Author : EMMANUEL ADEBANJO
// Date last updated : 1 / 30 / 2023
// Purpose : displays the volume of a cube object

#include <iostream>
#include <string>
using namespace std;

class Cube
{
private:
    int length;
    int width;
    int height;
    string color;

public:
    // constructor for the class that receives the length, width, height and color 
    Cube(int l, int w, int h, string c)
    {
        length = l;
        width = w;
        height = h;
        color = c;
    }
    //Accessor methods, returns appropriate attribute of the cube
    int getLength()
    {
        return length;
    }

    int getWidth()
    {
        return width;
    }

    int getHeight()
    {
        return height;
    }
    string getColor()
    {
        return color;
    }

    //Mutator methods, allows the attributes of the cube to be changed
    void setLength(int l)
    {
        length = l;
    }

    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }
    void setColor(string c)
    {
        color = c;
    }

    //calculate and return the volume of the cube.

    int calculateVolume()
    {
        int volume = length * width * height;
        return volume;
    }
};

int main()
{
    int length;
    int width;
    int height;
    string color;

    cout << "This program calculates the volume of a cube. " << endl;
    cout << "****************************************************" << endl;

    // asks the user for the length and stores the value
    cout << "Please enter the length of the cube:";
    cin >> length;

    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for length";
        return 0;
    }

    // asks the user for the width and stores the value
    cout << "Please enter the width of the cube:";
    cin >> width;
    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for width";
        return 0;
    }

    // asks the user for the height and stores the value
    cout << "Please enter the height of the cube:";
    cin >> height;

    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for height";
        return 0;
    }

    // asks the user for the color and stores the value
    cout << "Please enter the color of the cube:";
    cin >> color;

    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for color";
        return 0;
    }

    cout << "****************************************************" << endl;

    //displays the length, width,height, color of the cube according to the information gotten from the user
    Cube c1(length, width, height, color);
    cout << "According to the information provided, " << endl;
    cout << "The Length of the cube is: " << c1.getLength() << endl;
    cout << "The Width of the cube is: " << c1.getWidth() << endl;
    cout << "The Height of the cube is: " << c1.getHeight() << endl;
    cout << "The Color of the cube is: " << c1.getColor() << endl;

    // displays the value of the volume 
    cout << "The Volume of the cube is: " << c1.calculateVolume() << endl << endl;


    cout << "             " << endl;
    cout << "****************************************************" << endl;
   
    // gets new value for length
    cout << "Enter new length:";
    cin >> length;

    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for length!";
        return 0;
    }

    //updates the value
    c1.setLength(length);

    // gets new value for width
    cout << "Enter new width:";
    cin >> width;
    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for width";
        return 0;
    }
    //updates the value
    c1.setWidth(width);


    // gets new value for height
    cout << "Enter new height:";
    cin >> height;
    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for height";
        return 0;
    }
    //updates the value
    c1.setHeight(height);

    // gets new value for color
    cout << "Enter new color:";
    cin >> color;
    // input validation, validates if the user is entering the right value.
    if (!cin.good())
    {
        cout << "Invalid value for color";
        return 0;
    }
    //updates the value
    c1.setColor(color);

    cout << "             " << endl;
    cout << "****************************************************" << endl;
   
    //displays the length, width,height, color of the cube according to the information gotten from the user
    cout << "According to the new information provided, " << endl;
    cout << "The Length of the cube is: " << c1.getLength() << endl;
    cout << "The Width of the cube is: " << c1.getWidth() << endl;
    cout << "The Height of the cube is: " << c1.getHeight() << endl;
    cout << "The Color of the cube is: " << c1.getColor() << endl;

    // displays the value of the volume 
    cout << "The Volume of the cube is: " << c1.calculateVolume() << endl << endl;


    return 0;
}