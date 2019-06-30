#pragma once
#include<iostream>
#include<vector>
#include"Passenger.h"
#include "pch.h"

namespace AirlineReservation {
	const int kPassengerId = 1;
	const int kseatId = 101;
	class Database {

	public :
		Passenger& addPassenger(const std::string& firstName,
			const std::string& lastName,const std::string& phoneNumber);
		Passenger& getPassenger(int passengerId);
		Passenger& getPassenger(const std::string& firstName,
		const std::string& lastName);
		void displayAll() const;
		
		
		
		//void displayAllSeats() ;const
		
		//from Flight class
	 
		void doReservation();
		void reserveSeat(int seatNum);
		void displayFlights() const;
		void displayAvailableSeats() const;
		void displayAllFlights() const;
		Flight& addFlight(const int flightId, const int seatNum);
		Flight& addFlight(const int flightId, const int seatNum,const std::string& flightName,
			const std::string& flightSrc, const std::string& flightDest,
			const std::string& dateofjourney);
	private:
		std::vector<Passenger> mpassengers;
		int mnextPassengerId = kPassengerId;

		std::vector<Flight> mseats;
		int nextSeatId = kseatId;

	

	};
}