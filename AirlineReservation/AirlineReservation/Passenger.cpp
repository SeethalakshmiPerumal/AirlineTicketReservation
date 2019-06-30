#include "pch.h"
#include <iostream>
#include "Passenger.h"

using namespace std;
namespace AirlineReservation
{
	Passenger::Passenger(const std::string& firstName,
		const std::string& lastName, const std::string& phoneNum)
		:pfirstName(firstName), plastName(lastName), phoneNumber(phoneNum)
	{

	}
	Flight::Flight(const int flightId, const int seatNum)
		: flight_id(flightId), seat_num(seatNum)
	{

	}

	Flight::Flight(const int flightId, const int seatNum,const std::string & flightName, const std::string & flightSrc,
		const std::string & flightDest, const std::string & dateofJourney)
		: flight_id(flightId), seat_num(seatNum),flight_name(flightName),
		flight_source(flightSrc),flight_dest(flightDest),dateof_journey(dateofJourney)
	{

	}
	
	void Passenger::getPassenger()
	{
		addedPassenger = true;
	}
	void Flight::getFlight()
	{
		addedFlight = true;
	}

	void Passenger::setFirstName(const string& firstName)
	{
		pfirstName = firstName;
	}

	const string& Passenger::getFirstName() const
	{
		return pfirstName;
	}

	void Passenger::setLastName(const string& lastName)
	{
		plastName = lastName;
	}

	const string& Passenger::getLastName() const
	{
		return plastName;
	}
	void Passenger::setPhoneNumber(int phonenumber) {
		phoneNumber = phonenumber;
	}

	const string& Passenger::getPhoneNumber() const {
		return phoneNumber;
	}
	void Passenger::setPassengerId(int pId) {
		passengerId = pId;
	}

	int Passenger::getPassengerId() const
	{
		return passengerId;
	}
	//fromflight class
	void Flight::setSeatNum(int seatNum) {
		seat_num = seatNum;
	}
	int Flight::getSeatNum()const
	{
		return seat_num;

	}

	void Flight::setFlightId(int flightId)
	{
		flight_id = flightId;
	}

	int Flight::getFlightId() const
	{
		return flight_id;
	}

	void Flight::setFlightName(const std::string & FlightName)
	{
		flight_name = FlightName;
	}

	const std::string & Flight::getFlightName() const
	{
		return flight_name;
	}
	void Flight::setFlightSrc(const std::string & FlightSrc)
	{
		flight_source = FlightSrc;
	}

	const std::string & Flight::getFlightSrc() const
	{
		return flight_source;
	}

	void Flight::setFlightDest(const std::string & FlightDest)
	{
		flight_dest = FlightDest;

	}

	const std::string & Flight::getFlightDest() const
	{
		return flight_dest;
	}


	
		
	void Flight::setReserveSeat(int newreserveSeat)
	{
		seat_num = newreserveSeat;
	}

	int Flight::getReserveSeat() const {
		return seat_num;
	}

	void Flight::setDateofJourney(const std::string& dateOfJouney)
	{
		dateof_journey = dateOfJouney;
	}

	const std::string&  Flight::getDateofJourney() const
	{
		return dateof_journey;
	}
		
	//methods displaying Pssengerdetails

	void Passenger::displayPassengerDetails() const
	{
		cout << "-------------------------" << endl;
		cout << "Passenger: " <<"FirstName:"<< getFirstName() << "\t\t" <<"LastName:"<< getLastName() << endl;
		cout << "Passenger Id: " << getPassengerId() << endl;
		cout << "Passenger PassportNo" << getPhoneNumber() << endl;
		cout << "-------------------------" << endl;
		cout << endl;
	}
	
	// for reservation of seat
	void Flight::reserveSeat(int seatNum)
	{
		return setReserveSeat(getReserveSeat() - seatNum);

	}

	void Flight::makeReservation()  const
	{
		cout << "++++++++++++++++++++++++++++++" << endl;
		cout << "Booked Ticket Information:" << endl;
			cout << "FlightName:" << "\t\t" <<  getFlightName()  << "\t\t" << "BookingId" << getFlightId() << endl;
			cout << "Seatnumber" << "\t\t" << getSeatNum() << "\t\t" << "DateOfJourney" << "\t\t" << getDateofJourney() << endl;
		cout <<"Passenger Details:" <<","<<"FirstName:"<<"Seetha" <<"\t\t"<<"LastName:"<<"Perumal"<< endl;
		cout<<"Status:Booked"<<endl;
		cout << "++++++++++++++++++++++++++++++" << endl;
		
	}
	void Flight::displayFlights() const
	{
		cout << "++++++++++++++++++++++++++++++" << endl;
		cout << "Flight Name:" << getFlightName() <<"\t\t"<<"BookingId"<<getFlightId()<<endl;
		cout<< "Source:"<< getFlightSrc() << "\t\t" <<"Destination:"<< getFlightDest() << endl;
		cout << "Seatnumber:" << getSeatNum()<< "\t\t" <<"Arrivaltime: 10.30 am" << endl;
		cout << "Date of Journey:" << getDateofJourney() << endl;
		cout << "++++++++++++++++++++++++++++++" << endl;

	}

}
