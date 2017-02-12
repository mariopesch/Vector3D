#include "Vector3D.h"

void Vector3D::print(){

    cout <<data[0]<<endl;
    cout <<data[1]<<endl;
    cout <<data[2]<<endl;
    
}

Vector3D::Vector3D()
{
}

Vector3D::Vector3D(double x, double y, double z)
{
    data[0]=x;
    data[1]=y;
    data[2]=z;
    
}

double& Vector3D::operator[](size_t index){
    if (index > 2){
        cout <<"Error in routine Vector3D::operator[]"<<endl;
        exit(1);
    }
return data[index];
}
        
Vector3D Vector3D::operator+(Vector3D& vec) //Addition
{    
    double x = vec[0] + data[0];
    double y = vec[1] + data[1];
    double z = vec[2] + data[2];
    return Vector3D(x,y,z);
    
}

Vector3D Vector3D::operator-(Vector3D& vec) //Subtraction
{
    double x = vec[0] - data[0];
    double y = vec[1] - data[1];
    double z = vec[2] - data[2];
    return Vector3D(x,y,z);    
}

Vector3D Vector3D::operator*(double var) //Skalarmultiplication
{
    double x =  var * data[0];
    double y = var * data[1];
    double z = var * data[2];
    return Vector3D(x,y,z); 
}

double Vector3D::scalprod(Vector3D vec) //Sklarproduct
{
    double skp = vec[0] * data[0] + vec[1] * data[1] + vec[2] * data[2];
    return skp;
}

double Vector3D::lenght() //Vectorlenght
{
    double lenght = sqrt(data[0]*data[0]+data[1]*data[1]+data[2]*data[2]);
}




