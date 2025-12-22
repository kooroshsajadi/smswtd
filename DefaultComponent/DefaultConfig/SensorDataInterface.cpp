/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataInterface
//!	Generated Date	: Mon, 22, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorDataInterface.h"
//#[ ignore
#define SMSTWD_ARCH_SensorDataInterface_SensorDataInterface_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SensorDataInterface_readUnderwaterSensorData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SensorDataInterface
SensorDataInterface::SensorDataInterface(void) {
    NOTIFY_CONSTRUCTOR(SensorDataInterface, SensorDataInterface(), 0, SMSTWD_ARCH_SensorDataInterface_SensorDataInterface_SERIALIZE);
}

SensorDataInterface::~SensorDataInterface(void) {
    NOTIFY_DESTRUCTOR(~SensorDataInterface, true);
}

long const SensorDataInterface::getAltitude(void) const {
    return altitude;
}

void SensorDataInterface::setAltitude(const long p_altitude) {
    altitude = p_altitude;
}

char* const SensorDataInterface::getFlowDirection(void) const {
    return flowDirection;
}

void SensorDataInterface::setFlowDirection(char* const p_flowDirection) {
    flowDirection = p_flowDirection;
}

int const SensorDataInterface::getHorizontalAcceleration(void) const {
    return horizontalAcceleration;
}

void SensorDataInterface::setHorizontalAcceleration(const int p_horizontalAcceleration) {
    horizontalAcceleration = p_horizontalAcceleration;
}

long const SensorDataInterface::getLatitude(void) const {
    return latitude;
}

void SensorDataInterface::setLatitude(const long p_latitude) {
    latitude = p_latitude;
}

long const SensorDataInterface::getLongitude(void) const {
    return longitude;
}

void SensorDataInterface::setLongitude(const long p_longitude) {
    longitude = p_longitude;
}

long const SensorDataInterface::getPrecipitationAmount(void) const {
    return precipitationAmount;
}

void SensorDataInterface::setPrecipitationAmount(const long p_precipitationAmount) {
    precipitationAmount = p_precipitationAmount;
}

double const SensorDataInterface::getSeismicIntensity(void) const {
    return seismicIntensity;
}

void SensorDataInterface::setSeismicIntensity(const double p_seismicIntensity) {
    seismicIntensity = p_seismicIntensity;
}

int const SensorDataInterface::getVerticalAcceleration(void) const {
    return verticalAcceleration;
}

void SensorDataInterface::setVerticalAcceleration(const int p_verticalAcceleration) {
    verticalAcceleration = p_verticalAcceleration;
}

int const SensorDataInterface::getWaterPressure(void) const {
    return waterPressure;
}

void SensorDataInterface::setWaterPressure(const int p_waterPressure) {
    waterPressure = p_waterPressure;
}

double const SensorDataInterface::getWindSpeed(void) const {
    return windSpeed;
}

void SensorDataInterface::setWindSpeed(const double p_windSpeed) {
    windSpeed = p_windSpeed;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorDataInterface::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("latitude", x2String(myReal->latitude));
    aomsAttributes->addAttribute("longitude", x2String(myReal->longitude));
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("altitude", x2String(myReal->altitude));
    aomsAttributes->addAttribute("precipitationAmount", x2String(myReal->precipitationAmount));
    aomsAttributes->addAttribute("waterPressure", x2String(myReal->waterPressure));
    aomsAttributes->addAttribute("seismicIntensity", x2String(myReal->seismicIntensity));
    aomsAttributes->addAttribute("flowDirection", x2String(myReal->flowDirection));
    aomsAttributes->addAttribute("horizontalAcceleration", x2String(myReal->horizontalAcceleration));
    aomsAttributes->addAttribute("verticalAcceleration", x2String(myReal->verticalAcceleration));
}
//#]

IMPLEMENT_META_P(SensorDataInterface, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSensorDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataInterface.cpp
*********************************************************************/
