#include "pch.h"
#include <iostream>
#include <stdexcept>
#include "Database.h"


using namespace std;

namespace AirlineReservation {

	Passenger& Database::addPassenger(const string& firstName,
		const string& lastName,const string& phoneNumber)
	{
		Passenger thePassenger(firstName, lastName, phoneNumber);
		thePassenger.setPassengerId(mnextPassengerId++);
		thePassenger.getPassenger();
		mpassengers.push_back(thePassenger);
		return mpassengers[mpassengers.size() - 1];
	}

	Passenger& Database::getPassenger(int pId)
	{
		for (auto& employee : mpassengers) {
			if (employee.getPassengerId() == pId) {
 return employee;
			}
		}
		throw logic_error("No Paasenger found.");
	}

	Passenger& Database::getPassenger(const string& firstName, const string& lastName)
	{
		for (auto& employee : mpassengers) {
			if (employee.getFirstName() == firstName &&
				employee.getLastName() == lastName) {
				return employee;
			}
		}
		throw logic_error("No employee found.");
	}

	void Database::displayAll() const
	{
		for (const auto& passenger : mpassengers) {
			passenger.displayPassengerDetails();
			
		}
	}

	void Database::displayAllFlights()const
	{
		cout << ".........................................." << endl;
		cout << "FlightName:"<<"\t\t" << "Source:" << "\t\t" << "Destination:" <<"\t\t" << "ArrivalTime:" << endl;
			
		cout << "Emirates1A1" << "\t\t" << "Dubai" << "\t\t" << " India" << "\t\t" <<"10.30am"<< endl;
		//cout << "..............................................." << endl;
		cout << "Available Seats:" << "\t\t" << " 101,102, 103, 104" << endl;
		
		cout << "Emirates2A2" << "\t\t" << "Seattle" <<"\t\t" <<" Dubai" <<"\t\t"<< "9.30pm" << endl;
		
		cout << "Available Seats:" << "\t\t" << "201,202,203,204" << endl;
		cout << ".........................................." << endl;
		cout << "Alaska3A3" << "\t\t" << "Seattle" << "\t\t" << " Newyork" << "\t\t" << "1.30pm" << endl;
		cout << "Available Seat Numbers:" << "\t\t" << "301---302---303---304" << endl;
		
		
	}
	void Database::displayAvailableSeats()const
	{
	    cout << "Emirates1A1"  << endl;
		cout << "Available Seats:" << "\t\t" << "101---102---103---104" << endl;
		cout << "==========================================================" << endl;
		cout << "AlaskaAirLine2A2"  << endl;
		cout << "Available Seat Numbers:" << "\t\t" << "201---202---203---204" << endl;


	}


	void Database::doReservation()
	{
		for (const auto& seat : mseats)
		{
			seat.makeReservation();
			//seat.displayPassengerDetails();
	}
	}

	void Database::reserveSeat(int seatNum)
	{
		for (const auto& seat : mseats)
		{
			seat.makeReservation();
	}
	}

	void Database::displayFlights() const
	{
		for (const auto& seat : mseats)
		{
			seat.displayFlights();
			
	     }
		
	}

	Flight & Database::
		addFlight(const int flightId, const int seatNum)
	{
		Flight theflight(flightId, seatNum);
		theflight.setSeatNum(nextSeatId++);
		theflight.reserveSeat();
		mseats.push_back(theflight);
		return mseats[mseats.size() - 1];
	}

	Flight & Database::addFlight(const int flightId, const int seatNum, const string& flightName,
		const string& flightSrc, const string& flightDest,const string& dateofjourney)
	{
		Flight theflight(flightId, seatNum, flightName, flightSrc, flightDest, dateofjourney);
		
		theflight.setSeatNum(nextSeatId++);
		theflight.getSeatNum();
		mseats.push_back(theflight);
		return mseats[mseats.size() - 1];
	}

}
