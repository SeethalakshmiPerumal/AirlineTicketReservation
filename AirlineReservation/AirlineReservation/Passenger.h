#pragma once
#include "pch.h"
#include <string>


 namespace AirlineReservation
{
	class Passenger
	{
		
	public:
		Passenger() = default;
		Passenger(const std::string& firstName, const std::string& lastName,
			const std::string& phoneNumber);
		//void getPassengerDetails();
		void displayPassengerDetails() const;
		void getPassenger();
		
		
		
		//Getters and setters
		void setPassengerId(int passengerId);
		int getPassengerId() const;
		void setFirstName(const std::string& firsName);
		const std::string& getFirstName() const;
		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;
		//void setAge(int age);
		//int getAge(int age) const;
		void setPhoneNumber(int phoneNumber);
		const std::string& getPhoneNumber() const;
		

			


	private:
		int passengerId =-1;
		std::string pfirstName;
		std::string plastName;
		std::string gender;
		int age;
		std::string phoneNumber;
		bool addedPassenger = false;
		//std::string passportNo;
		//std::string address;
		//int dateofBirth;
		


	};
	class Flight: public Passenger
	{
		const int kReserveSeat = 100;
	public:
		Flight() = default;
		Flight(const int flightId, const int seatNum);
	Flight (const int flightId, const int seatNum,const std::string& flightName, 
		const std::string& flightSrc,const std::string& flightDest,const std::string& dateofJourney);
		
		void reserveSeat(int seatNum=1);
		void getFlight();
		//void booking();

		void makeReservation() const;
		void displayFlights()const;
		//getters and setters
		void setSeatNum(int seatNum);
		int getSeatNum() const;
		void setFlightId(int flightId);
		int getFlightId() const;
		void setFlightName(const std::string& FlightName);
		const std::string& getFlightName() const;
		void setFlightSrc(const std::string& Flightsrc);
		const std::string& getFlightSrc() const;
		void setFlightDest(const std::string& FlightDest);
		const std::string& getFlightDest() const;
		void setReserveSeat(int newreserveSeat);
		int getReserveSeat() const;
		void setDateofJourney(const std::string&  dateOfJouney);
		const std::string&  getDateofJourney() const;


	private:
		int seat_num; 
			int flight_id; 
			std::string flight_name; 
		std::string flight_source;
	    std::string flight_dest; 
		std::string dateof_journey;
		int reserve_seat = kReserveSeat;
		bool addedFlight = false;
		std::string pfirstName;
		std::string plastName;
	};
}
