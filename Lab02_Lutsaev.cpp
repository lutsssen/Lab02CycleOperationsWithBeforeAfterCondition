/************************************
*   Луцаев Владислав Николаевич     *
*             ПИ-261                *
*  Циклы с пред- и постусловиями    *
*           Вариант 14              *
************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double height;
    double riseTime = 0;
    double averageTemperature;

    while (riseTime < 10) {
        riseTime = riseTime + 0.5;
        height = 4.87 * sqrt(riseTime);

        if (height < 11) {
            averageTemperature = 15.2 - 6.55 * height;
        }
        else {
            averageTemperature = -56.6 + 0.01 * height;
        }

        if (riseTime == 0.5 || riseTime == 1 || riseTime == 2 || riseTime == 5 || riseTime == 10) {
            cout << "Rise time = " << riseTime << endl;
            cout << "Height = " << height << endl;
            cout << "Average temperature = " << averageTemperature << endl;
            cout << endl;
        }
    }
    return 0;
}