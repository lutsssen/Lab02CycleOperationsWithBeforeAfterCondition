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
	int endOfCycle = 11;
	int i = 0;
	int middleOfCycle = 5;
	int stepOfCycle = 1;
	int secondStepOfCycle = 4;
	double SecondMultiplyForVolume = 0.5;

	while (i < endOfCycle) {
		for (int j = i;j == i;++j) {
			if (j < middleOfCycle) {
				gasVolume = (j + stepOfCycle) * firstMultiplyForVolume;
			} else {
				gasVolume = (j - secondStepOfCycle) * SecondMultiplyForVolume;
			}
		}

		isothermalPressure = constantA / gasVolume;
		adiabaticPressure = constantA / pow(gasVolume, degreeOfVolume);

		cout << "While gas volume = " << gasVolume << endl
			   << "Isothermal Pressure: " << isothermalPressure << endl
			   << "Adiabatic Pressure: " << adiabaticPressure << endl
			   << endl;

		++i;
	}
}