/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorDataInterface
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SensorDataInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorDataInterface.h"
//#[ ignore
#define SMSTWD_ARCH_SensorDataInterface_SensorDataInterface_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SensorDataInterface_readUnderwaterSensorsData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SensorDataInterface
SensorDataInterface::SensorDataInterface(void) {
    NOTIFY_CONSTRUCTOR(SensorDataInterface, SensorDataInterface(), 0, SMSTWD_ARCH_SensorDataInterface_SensorDataInterface_SERIALIZE);
}

SensorDataInterface::~SensorDataInterface(void) {
    NOTIFY_DESTRUCTOR(~SensorDataInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SensorDataInterface, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSensorDataInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorDataInterface.cpp
*********************************************************************/
