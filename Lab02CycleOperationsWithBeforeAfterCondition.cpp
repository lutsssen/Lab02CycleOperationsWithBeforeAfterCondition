/***************************************
*Автор: Луцаев Владислав Николаевич    *
*Циклы с постусловием и предусловием   *
*Группа: ПИ-261                        *
*Вариант: 14                           *
***************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double constantA = 1.786;
    double gasVolume;
    double isothermalPressure;
    double adiabaticPressure;
    double degreeOfVolume = 1.2;
    double firstMultiplyForVolume = 0.1;
    double secondMultiplyForVolume = 0.5;
    int endOfCycle = 11;
    int cycleIndex = 0;
    int middleOfCycle = 5;
    int stepOfCycle = 1;
    int secondStepOfCycle = 4;

    // Цикл с предусловием
    while (cycleIndex < endOfCycle) {
        if (cycleIndex < middleOfCycle) {
            gasVolume = (cycleIndex + stepOfCycle)
                * firstMultiplyForVolume;
        }
        else {
            gasVolume = (cycleIndex - secondStepOfCycle)
                * secondMultiplyForVolume;
        }

        isothermalPressure = constantA / gasVolume;
        adiabaticPressure = constantA / pow(gasVolume, degreeOfVolume);

        cout << "While gas volume = " << gasVolume << endl
            << "Isothermal pressure: " << isothermalPressure << endl
            << "Adiabatic pressure: " << adiabaticPressure << endl
            << endl;

        ++cycleIndex;
    }

    cycleIndex = 0;

    // Цикл с постусловием
    do {
        if (cycleIndex < middleOfCycle) {
            gasVolume = (cycleIndex + stepOfCycle)
                * firstMultiplyForVolume;
        }
        else {
            gasVolume = (cycleIndex - secondStepOfCycle)
                * secondMultiplyForVolume;
        }

        isothermalPressure = constantA / gasVolume;
        adiabaticPressure = constantA / pow(gasVolume, degreeOfVolume);

        cout << "Do-while gas volume = " << gasVolume << endl
            << "Isothermal pressure: " << isothermalPressure << endl
            << "Adiabatic pressure: " << adiabaticPressure << endl
            << endl;

        ++cycleIndex;
    } while (cycleIndex < endOfCycle);

    return 0;
}
