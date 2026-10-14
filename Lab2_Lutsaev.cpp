﻿/*********************************
*Луцаев Владислав Николаевич     *
*Циклы с пред- и постусловиями   *
*Вариант 14                      *
*********************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double height;
    double riseTime = 0.0;
    double averageTemperature;
    double startOfCounting = 10.0;
    double countingTime = 0.5;

    while (riseTime < startOfCounting) do {
        riseTime = riseTime + countingTime;
        height = 4.87 * sqrt(riseTime);

        if (height < 11.0) {
            averageTemperature = 15.2 - 6.55 * height;
        }
        else {
            averageTemperature = -56.6 + 0.01 * height;
        }

        do {
            cout << "Rise time = " << riseTime << endl
                << "Height = " << height << endl
                << "Average temperature = " << averageTemperature << endl;
        } while (riseTime == 0.5 || riseTime == 1.0 || riseTime == 2.0 || riseTime == 5.0 || riseTime == 10.0);
    }
}