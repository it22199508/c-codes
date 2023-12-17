#include <stdio.h>
#include <math.h>

double VolumeOfCube(double length)
{
    return pow(length, 3);
}

double VolumeOfSphere(double diameter)
{
    double radius = diameter/2;
    return (4.0/3.0)*M_PI*pow(radius, 3);
}

int main()
{
    double length, diameter;

    printf("Length/Diameter\tVolume of Cube\tVolume of Sphere\n");

    for (length = 100; length <= 150; length += 15)
    {
        diameter = 2*length;
        printf("%.2f\t\t\t%.2f\t\t%.2f\n", length, VolumeOfCube(length), VolumeOfSphere(diameter));
    }

    return 0;
}