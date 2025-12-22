/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataInterface
//!	Generated Date	: Mon, 22, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataInterface.h
*********************************************************************/

#ifndef SensorDataInterface_H
#define SensorDataInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class SensorDataInterface
class SensorDataInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorDataInterface(void);
    
    //## auto_generated
    virtual ~SensorDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation readUnderwaterSensorData()
    virtual underwaterSensorData readUnderwaterSensorData(void) = 0;
    
    ////    Additional operations    ////

private :

    //## auto_generated
    long const getAltitude(void) const;
    
    //## auto_generated
    void setAltitude(const long p_altitude);
    
    //## auto_generated
    char* const getFlowDirection(void) const;
    
    //## auto_generated
    void setFlowDirection(char* const p_flowDirection);
    
    //## auto_generated
    int const getHorizontalAcceleration(void) const;
    
    //## auto_generated
    void setHorizontalAcceleration(const int p_horizontalAcceleration);
    
    //## auto_generated
    long const getLatitude(void) const;
    
    //## auto_generated
    void setLatitude(const long p_latitude);
    
    //## auto_generated
    long const getLongitude(void) const;
    
    //## auto_generated
    void setLongitude(const long p_longitude);
    
    //## auto_generated
    long const getPrecipitationAmount(void) const;
    
    //## auto_generated
    void setPrecipitationAmount(const long p_precipitationAmount);
    
    //## auto_generated
    double const getSeismicIntensity(void) const;
    
    //## auto_generated
    void setSeismicIntensity(const double p_seismicIntensity);
    
    //## auto_generated
    int const getVerticalAcceleration(void) const;
    
    //## auto_generated
    void setVerticalAcceleration(const int p_verticalAcceleration);
    
    //## auto_generated
    int const getWaterPressure(void) const;
    
    //## auto_generated
    void setWaterPressure(const int p_waterPressure);
    
    //## auto_generated
    double const getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const double p_windSpeed);
    
    ////    Attributes    ////
    
    long altitude;		//## attribute altitude
    
    char* flowDirection;		//## attribute flowDirection
    
    int horizontalAcceleration;		//## attribute horizontalAcceleration
    
    long latitude;		//## attribute latitude
    
    long longitude;		//## attribute longitude
    
    long precipitationAmount;		//## attribute precipitationAmount
    
    double seismicIntensity;		//## attribute seismicIntensity
    
    int verticalAcceleration;		//## attribute verticalAcceleration
    
    int waterPressure;		//## attribute waterPressure
    
    double windSpeed;		//## attribute windSpeed
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorDataInterface : virtual public AOMInstance {
    DECLARE_META(SensorDataInterface, OMAnimatedSensorDataInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataInterface.h
*********************************************************************/
