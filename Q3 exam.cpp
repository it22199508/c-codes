#include <stdio.h>
#include <math.h>

double VolumeOfCone(double radius, double height)
{
    return (M_PI * pow(radius, 2) * height) / 3;
}

double VolumeOfCylinder(double radius, double height)
{
    return M_PI * pow(radius, 2) * height;
}

int main()
{
    double radius, height = 200;

    printf("Radius\t\tVolume of Cone\tVolume of Cylinder\n");

    for (radius = 50; radius <= 150; radius += 10)
    {
        printf("%.2f\t\t%.2f\t\t%.2f\n", radius, VolumeOfCone(radius, height), VolumeOfCylinder(radius, height));
    }

    return 0;
}