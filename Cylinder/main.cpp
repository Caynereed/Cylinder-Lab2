// Cylinder Main File
#include <iostream>
#include <iomanip>
using namespace std;

double calculateVolume (double r, double h);
double calculateSurfaceArea (double r, double h);

int main(int argc, const char * argv[])
{
    // Definition for calculateVolume

    // Radius
    double r;
    r = 10.04;
    
    // Height
    double h;
    h = 12.068;
    
    //Outputting radius
    cout << "Radius is: " << r << endl;
    
    //Outputting height
    cout << "Height is: " << h << endl;
    
    // Outputing volume
    cout << "Volume proceeds to: " << calculateVolume (r, h) << endl;
   
    //Outputting surface area
    cout << "Surface Area proceeds to: " << calculateSurfaceArea (r, h) << endl;
    
    return 0;
}
// Calculates the surface area
double calculateSurfaceArea (double r, double h)
{
    return 2 * 3.14 * r * h + 2 * 3.14 * pow(r,2);
}
// Calculates the volume
double calculateVolume (double r, double h)
{
    return 3.14 * pow(r,2) * h;
}
