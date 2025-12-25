/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftDataInterface
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftDataInterface.h
*********************************************************************/

#ifndef AircraftDataInterface_H
#define AircraftDataInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## package SMSTWD_ARCH

//## class AircraftDataInterface
class AircraftDataInterface : virtual public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAircraftDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AircraftDataInterface(void);
    
    //## auto_generated
    virtual ~AircraftDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation returnAircraftSensorsData()
    virtual aircraftData returnAircraftSensorsData(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAircraftDataInterface : virtual public AOMInstance {
    DECLARE_META(AircraftDataInterface, OMAnimatedAircraftDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftDataInterface.h
*********************************************************************/
