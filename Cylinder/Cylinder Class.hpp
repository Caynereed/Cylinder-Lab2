// Cylinder HPP File
#ifndef CYLINDER_H
#define CYLINDER_H

// Class Cylinder
class Cylinder
{
public:
    Cylinder();
    ~Cylinder();
    // Radius
    void setRadius(double radius_);
    double getRadius();
    // Height
    void setHeight(double height_);
    double getHeight();
    // Calculating Volume
    void setCalculateVoume (double radius_, double height_);
    double getCalculateVolume();
    // Calculating Surface Area
    void setSurfaceArea (double radius_, double height_);
    double getSurfaceArea();

private:
    double radius;
    double height;
    
};

#endif // !CYLINDER_H
