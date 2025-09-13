#ifndef SATELLITE_HPP
#define SATELLITE_HPP
#include <iostream>

inline int radioCheck;

inline int getPosition() 
{
	int g_sensor = 0x0;
	return g_sensor;
}
inline void checkSatellite() {
	// Position ro az sensor marbute daryaft mikone
	
	int position = getPosition();
	if (getPosition == 0x0) 
	{
		std::cout << "Checked!\n";
	}

	// Vaziyat Connect shodan barresi mishe
	int connectStatus = radioCheck;
	if (connectStatus != 0) 
	{
		std::cout << "Connected!\n";
	}

}



inline int g_temp2 = 0;

#endif