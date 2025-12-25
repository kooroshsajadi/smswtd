/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingAndAnalyticsSubsystem
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.h
*********************************************************************/

#ifndef DataProcessingAndAnalyticsSubsystem_H
#define DataProcessingAndAnalyticsSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class DataProcessingAndAnalyticsSubsystem
class DataProcessingAndAnalyticsSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessingAndAnalyticsSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataProcessingAndAnalyticsSubsystem(void);
    
    //## auto_generated
    virtual ~DataProcessingAndAnalyticsSubsystem(void);
    
    ////    Operations    ////
    
    //## operation processData()
    virtual void processData(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int const getAtmosphericPressure(void) const;
    
    //## auto_generated
    void setAtmosphericPressure(const int p_atmosphericPressure);
    
    //## auto_generated
    int const getHorizontalAcceleration(void) const;
    
    //## auto_generated
    void setHorizontalAcceleration(const int p_horizontalAcceleration);
    
    //## auto_generated
    int const getPrecipitationType(void) const;
    
    //## auto_generated
    void setPrecipitationType(const int p_precipitationType);
    
    //## auto_generated
    int const getTemperature(void) const;
    
    //## auto_generated
    void setTemperature(const int p_temperature);
    
    //## auto_generated
    int const getVerticalAcceleration(void) const;
    
    //## auto_generated
    void setVerticalAcceleration(const int p_verticalAcceleration);
    
    //## auto_generated
    int const getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const int p_windSpeed);

private :

    //## auto_generated
    char* const getModelVersion(void) const;
    
    //## auto_generated
    void setModelVersion(char* const p_modelVersion);
    
    //## auto_generated
    int const getWindowSize(void) const;
    
    //## auto_generated
    void setWindowSize(const int p_windowSize);
    
    ////    Attributes    ////
    
    int atmosphericPressure;		//## attribute atmosphericPressure
    
    int horizontalAcceleration;		//## attribute horizontalAcceleration
    
    char* modelVersion;		//## attribute modelVersion
    
    int precipitationType;		//## attribute precipitationType
    
    int temperature;		//## attribute temperature
    
    int verticalAcceleration;		//## attribute verticalAcceleration
    
    int windSpeed;		//## attribute windSpeed
    
    int windowSize;		//## attribute windowSize
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataProcessingAndAnalyticsSubsystem : virtual public AOMInstance {
    DECLARE_META(DataProcessingAndAnalyticsSubsystem, OMAnimatedDataProcessingAndAnalyticsSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.h
*********************************************************************/
