/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTDInterface
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTDInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSWTDInterface.h"
//#[ ignore
#define SMSTWD_ARCH_SMSWTDInterface_SMSWTDInterface_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTDInterface_sendAircraftData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTDInterface_sendSatelliteData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTDInterface_sendUnderwaterData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SMSWTDInterface
SMSWTDInterface::SMSWTDInterface(void) {
    NOTIFY_CONSTRUCTOR(SMSWTDInterface, SMSWTDInterface(), 0, SMSTWD_ARCH_SMSWTDInterface_SMSWTDInterface_SERIALIZE);
}

SMSWTDInterface::~SMSWTDInterface(void) {
    NOTIFY_DESTRUCTOR(~SMSWTDInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SMSWTDInterface, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSMSWTDInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTDInterface.cpp
*********************************************************************/
