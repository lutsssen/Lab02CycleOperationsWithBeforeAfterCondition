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

  int volumeIndex = 0;
  int endOfCycle = 11;

  do {
    if (volumeIndex < 5) {
      gasVolume = (volumeIndex + 1) * 0.1;
    } else {
        gasVolume = (volumeIndex - 4) * 0.5;
    }

    isothermalPressure = constantA / gasVolume;
    adiabaticPressure = constantA / pow(gasVolume, degreeOfVolume);

    cout << "Gas volume = " << gasVolume << endl
      << "Isothermal Pressure: " << isothermalPressure << endl
      << "Adiabatic Pressure: " << adiabaticPressure << endl
      << endl;

    volumeIndex++;
  } while (volumeIndex < endOfCycle);

  return 0;
}