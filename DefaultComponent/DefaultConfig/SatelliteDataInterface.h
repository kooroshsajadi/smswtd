/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteDataInterface
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteDataInterface.h
*********************************************************************/

#ifndef SatelliteDataInterface_H
#define SatelliteDataInterface_H

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

//## class SatelliteDataInterface
class SatelliteDataInterface : virtual public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteDataInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SatelliteDataInterface(void);
    
    //## auto_generated
    virtual ~SatelliteDataInterface(void) = 0;
    
    ////    Operations    ////
    
    //## operation readSatelliteData()
    virtual satelliteData readSatelliteData(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteDataInterface : virtual public AOMInstance {
    DECLARE_META(SatelliteDataInterface, OMAnimatedSatelliteDataInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteDataInterface.h
*********************************************************************/
