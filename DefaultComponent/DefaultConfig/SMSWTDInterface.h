/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTDInterface
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTDInterface.h
*********************************************************************/

#ifndef SMSWTDInterface_H
#define SMSWTDInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class SMSWTDInterface
class SMSWTDInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTDInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSWTDInterface(void);
    
    //## auto_generated
    virtual ~SMSWTDInterface(void) = 0;
    
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
class OMAnimatedSMSWTDInterface : virtual public AOMInstance {
    DECLARE_META(SMSWTDInterface, OMAnimatedSMSWTDInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTDInterface.h
*********************************************************************/
