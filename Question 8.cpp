#include <iostream>
#include <cmath>
using namespace std;

inline double distanceBetween(double x1, double y1,
                              double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) +
                (y2 - y1) * (y2 - y1));
}

inline double toRadians(double degrees)
{
    return degrees * (M_PI / 180.0);
}

inline double clamp(double value, double minVal, double maxVal)
{
    if (value < minVal)
        return minVal;

    if (value > maxVal)
        return maxVal;

    return value;
}

inline bool isInSafeZone(double x, double y,
                         double cx, double cy,
                         double radius)
{
    double distance = distanceBetween(x, y, cx, cy);

    return distance <= radius;
}

int main()
{
  
    double homeX = 0.0;
    double homeY = 0.0;

    
    double radius = 50.0;

  
    double x1 = 30.0, y1 = 40.0;
    double x2 = 40.0, y2 = 30.0;
    double x3 = 60.0, y3 = 20.0;


    double d1 = distanceBetween(homeX, homeY, x1, y1);

    cout << "Waypoint 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Distance from home: " << d1 << endl;
    cout << "Inside Safe Zone: "
         << (isInSafeZone(x1, y1, homeX, homeY, radius) ? "Yes" : "No")
         << endl << endl;

  
    double d2 = distanceBetween(homeX, homeY, x2, y2);

    cout << "Waypoint 2: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Distance from home: " << d2 << endl;
    cout << "Inside Safe Zone: "
         << (isInSafeZone(x2, y2, homeX, homeY, radius) ? "Yes" : "No")
         << endl << endl;


    double d3 = distanceBetween(homeX, homeY, x3, y3);

    cout << "Waypoint 3: (" << x3 << ", " << y3 << ")" << endl;
    cout << "Distance from home: " << d3 << endl;
    cout << "Inside Safe Zone: "
         << (isInSafeZone(x3, y3, homeX, homeY, radius) ? "Yes" : "No")
         << endl;

    return 0;
}