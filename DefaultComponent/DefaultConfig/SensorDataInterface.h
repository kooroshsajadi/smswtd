/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataInterface
//!	Generated Date	: Thu, 25, Dec 2025  
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
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## package SMSTWD_ARCH

//## class SensorDataInterface
class SensorDataInterface : virtual public OMReactive {
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
    
    //## operation returnUnderwaterSensorsData()
    virtual underwaterSensorData returnUnderwaterSensorsData(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorDataInterface : virtual public AOMInstance {
    DECLARE_META(SensorDataInterface, OMAnimatedSensorDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataInterface.h
*********************************************************************/
