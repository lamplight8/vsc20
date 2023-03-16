export module airline_ticket;

import <string>;

export class AirlineTicket
{
public:
	double calculatePriceInDollars();
	
	std::string getPassengerName();
	void setPassengerName(std::string name);

	int getNumberOfMiles();
	void setNumberOfMiles(int miles);
	
	bool getHasEliteSuperRewardsStatus();
	void setHasEliteSuperRewardsStatus(bool status);

private:
	std::string m_passengerName{ "Unknown Passenger" };
	int m_numberOfMiles{ 0 };
	bool m_hasEliteSuperRewardsStatus{ false };
};
