/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftDataInterface
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AircraftDataInterface.h"
//#[ ignore
#define SMSTWD_ARCH_AircraftDataInterface_AircraftDataInterface_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AircraftDataInterface_readAircraftSensorsData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class AircraftDataInterface
AircraftDataInterface::AircraftDataInterface(void) {
    NOTIFY_CONSTRUCTOR(AircraftDataInterface, AircraftDataInterface(), 0, SMSTWD_ARCH_AircraftDataInterface_AircraftDataInterface_SERIALIZE);
}

AircraftDataInterface::~AircraftDataInterface(void) {
    NOTIFY_DESTRUCTOR(~AircraftDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(AircraftDataInterface, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedAircraftDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftDataInterface.cpp
*********************************************************************/
