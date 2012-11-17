/*
 * gasMileageCalculator.cpp
 *
 *  Created on: Nov 10, 2012
 *      Author: Jonathan David Livesay
 *
 *  Program to calculate the gas mileage I'm getting in the car between
 *  filling up at the gas station
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	// Declare and initialize the variables
	double beginMiles = 0.0;
	double endMiles = 0.0;
	double gallonsOfGas = 0.0;
	double gasPrice = 0.0;
	double pricePerGallon = 0.0;
	double averagePricePerGallon = 0.0; //TODO
	int counter = 0; // TODO
	double gasSubTotal = 0.0; // TODO
	double milesTotal = 0.0;
	double gasTotal = 0.0; // TODO
	double priceTotal = 0.0; // TODO
	double milesSubTotal = 0.0;
	double pricePerMile = 0.0;
	double milesPerGallon = 0.0;
	double mpgSubTotal = 0.0;
	char anotherIndicator = 'Y';
	char anotherMilesIndicator = 'Y';


	while (anotherIndicator == 'Y')
	{
		counter++;
		milesTotal = 0.0;
		milesPerGallon = 0.0;
		gallonsOfGas = 0.0;

		// Prompt the user for the initial variables
		if (counter < 2)
		{
			cout << "Please enter the begin miles: " ;
			cin >> beginMiles;
			cout << "Please enter the ending miles: ";
			cin >> endMiles;
			cout << "Please enter the gas gallons pumped: ";
			cin >> gallonsOfGas;
			cout << "Please enter the gas cost: $ ";
			cin >> gasPrice;
		}
		else
		{
			beginMiles = endMiles;
			endMiles = 0.0;

			cout << "Please enter the begin miles: " << setprecision(0) << beginMiles << endl;
			cout << "Please enter the ending miles: ";
			cin >> endMiles;
			cout << "Please enter the gas gallons pumped: ";
			cin >> gallonsOfGas;
			cout << "Please enter the gas cost: $ ";
			cin >> gasPrice;
		}



		// Calculate the miles traveled between gas fill ups
		milesTotal = endMiles - beginMiles;

		// Calculate the miles per gallon
		milesPerGallon = milesTotal / gallonsOfGas;

		cout << fixed << setprecision(2);

		if (counter < 2 )
		{
			cout << "You have traveled " << milesTotal << " miles. " << endl;
			cout <<  "Gallons of gas used " << gallonsOfGas << ". " << endl;
			cout << "Miles per gallon = " << milesPerGallon << ". " << endl << endl;
		}
		else
		{
			cout << "\nYou have entered " << counter << " requests to calculate Miles"<< endl;
			cout << "You have traveled " << milesTotal << " milesTotal. " << endl;
			cout << "You have traveled " << milesSubTotal << " milesSubTotal" << endl;
			cout <<  "Gallons of gas used " << gallonsOfGas << ". " << endl;
			cout << "Total Gallons used " << gasTotal << ". " << endl;
			cout << "Miles per gallon = " << milesPerGallon << ". " << endl;
			cout << "Average Miles per gallon " << mpgSubTotal << ". " << endl << endl;
		}
		cout << "Would you like to check another? (Y for Yes, N for No): ";
		cin >> anotherIndicator;
		anotherIndicator = toupper(anotherIndicator);

		// Updated Accumulator Variables
		mpgSubTotal += milesPerGallon;
		milesSubTotal += milesTotal;
		priceTotal += gasPrice;
	}


	cout << "*** End of Program***" << endl;

	return 0;

}

