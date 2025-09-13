#ifndef TEMPSENSOR_HPP
#define TEMPSENSOR_HPP

inline int getTempFromSensor() {
	return 50;
}

inline bool g_mWaterCooling = true;

inline int clearTemp() {
	
	return getTempFromSensor() - 50;
}

#endif