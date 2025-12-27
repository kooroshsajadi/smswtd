/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AnalyticsProviderInterface
//!	Generated Date	: Fri, 26, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AnalyticsProviderInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AnalyticsProviderInterface.h"
//#[ ignore
#define SMSTWD_ARCH_AnalyticsProviderInterface_AnalyticsProviderInterface_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AnalyticsProviderInterface_sendAircraftData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AnalyticsProviderInterface_sendSatelliteData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AnalyticsProviderInterface_sendUnderwaterData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class AnalyticsProviderInterface
AnalyticsProviderInterface::AnalyticsProviderInterface(void) {
    NOTIFY_CONSTRUCTOR(AnalyticsProviderInterface, AnalyticsProviderInterface(), 0, SMSTWD_ARCH_AnalyticsProviderInterface_AnalyticsProviderInterface_SERIALIZE);
}

AnalyticsProviderInterface::~AnalyticsProviderInterface(void) {
    NOTIFY_DESTRUCTOR(~AnalyticsProviderInterface, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(AnalyticsProviderInterface, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedAnalyticsProviderInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AnalyticsProviderInterface.cpp
*********************************************************************/
