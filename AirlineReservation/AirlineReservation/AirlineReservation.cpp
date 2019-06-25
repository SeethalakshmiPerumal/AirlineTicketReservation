// AirlineReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Database.h"
using namespace std;

using namespace AirlineReservation;

int displayMenu();
void doPassenger(Database& db);
//void doReserveSeat(Database& db);
void doBooking(Database& db);
Database employeeDB;

int main()
{
	

	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			employeeDB.displayAvailableSeats();
			//doBooking(employeeDB);
			break;
		
		case 2:
			doBooking(employeeDB);
			
			break;
		case 3:
			doPassenger(employeeDB);
				break;
		case 4:
			employeeDB.displayAllSeats();
			break;
		case 5:
			employeeDB.doReservation();
			break;
		default:
			cerr << "Unknown command." << endl;
			break;
		}
	}

	return 0;
}
int displayMenu()
{
	int selection;

	cout << endl;
	cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "\t     WELCOME TO AIRLINE RESERVATION SYSTEM \n";
	cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << " ..................... MENU OPTIONS .............................\n" << endl;
	cout << "-----------------" << endl;
	cout << "1) Reserve Seat" << endl;
	cout << "2) Flight Schedule" << endl;
	cout << "3) Passenger details" << endl;
	cout << "4) Flight details" << endl;
	cout << "5) User Ticket information" << endl;
	cout << "7) Exit the Program" << endl;
	cout << endl;
	cout << "Enter Option:: ";

	cin >> selection;

	return selection;
}

void doPassenger(Database& db)
{
	string firstName;
	string lastName;
	string phoneNumber;

	cout << "First name: ";
	cin >> firstName;
	cout << "Last name: ";
	cin >> lastName;
	cout << "PassportNumber:";
	cin >> phoneNumber;
	


	db.addPassenger(firstName, lastName,phoneNumber);
	employeeDB.displayAll();
}

/*void doReserveSeat(Database& db)
{
	int seatNum;
	int flightId;
	string flightName;
	string flightSrc;
	string flightDest;
	cout << "Flight Name:";
	cin >> flightName;
	cout << "Source:";
	cin >> flightSrc;
	cout << "Destination";
	cin >> flightDest;
	cout << "Seat Number:";
	cin >> seatNum;
	cout << "FlightId:";
cin >> flightId;
	db.addFlight(seatNum, flightId, flightName, flightSrc, flightDest);

}*/
void doBooking(Database & db)
{
	//employeeDB.displayAllSeats();
	int seatNum;
	int flightId;
	string flightName;
	string flightSrc;
	string flightDest;
	string dateofjourney;
	cout << "Flight Name:";
	cin >> flightName;
	cout << "Source:";
	cin >> flightSrc;
	cout << "Destination:";
	cin >> flightDest;
	cout << "Seat Number:";
	cin >> seatNum;
	cout << "FlightId:";
	cin >> flightId;
	cout << "Date of Journey:";
	cin >> dateofjourney;


	db.addFlight(seatNum, flightId, flightName, flightSrc, flightDest,dateofjourney);
	employeeDB.displayFlights();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
