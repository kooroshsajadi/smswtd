/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AnalyticsProviderInterface
//!	Generated Date	: Fri, 26, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AnalyticsProviderInterface.h
*********************************************************************/

#ifndef AnalyticsProviderInterface_H
#define AnalyticsProviderInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class AnalyticsProviderInterface
class AnalyticsProviderInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAnalyticsProviderInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AnalyticsProviderInterface(void);
    
    //## auto_generated
    virtual ~AnalyticsProviderInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation sendAircraftData()
    virtual aircraftData sendAircraftData(void) = 0;
    
    //## operation sendSatelliteData()
    virtual satelliteData sendSatelliteData(void) = 0;
    
    //## operation sendUnderwaterData()
    virtual underwaterSensorData sendUnderwaterData(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAnalyticsProviderInterface : virtual public AOMInstance {
    DECLARE_META(AnalyticsProviderInterface, OMAnimatedAnalyticsProviderInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AnalyticsProviderInterface.h
*********************************************************************/
