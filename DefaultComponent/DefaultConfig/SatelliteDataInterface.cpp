/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteDataInterface
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SatelliteDataInterface.h"
//#[ ignore
#define SMSTWD_ARCH_SatelliteDataInterface_SatelliteDataInterface_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SatelliteDataInterface_readSatelliteData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SatelliteDataInterface
SatelliteDataInterface::SatelliteDataInterface(void) : OMReactive() {
    NOTIFY_CONSTRUCTOR(SatelliteDataInterface, SatelliteDataInterface(), 0, SMSTWD_ARCH_SatelliteDataInterface_SatelliteDataInterface_SERIALIZE);
}

SatelliteDataInterface::~SatelliteDataInterface(void) {
    NOTIFY_DESTRUCTOR(~SatelliteDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SatelliteDataInterface, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSatelliteDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteDataInterface.cpp
*********************************************************************/
