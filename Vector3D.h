
#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Vector3D
{
        vector<double>data={0.0,0.0,0.0}; //declare Vector in main.cpp example: Vector3D myVector(0.0,0.0,0.0);
        
public:
    
    Vector3D();
    Vector3D(double x, double y, double z);
    double& operator[](size_t);
    void print();
    Vector3D operator+(Vector3D& vec);
    Vector3D operator-(Vector3D& vec);
    void operator+=(Vector3D& vec);
    void operator-=(Vector3D& vec);
    Vector3D operator*(double var);
    double scalprod(Vector3D vec);
    double lenght();
};

#endif // VECTOR3D_H
