/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SystemInfrastructure
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SystemInfrastructure.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SystemInfrastructure.h"
//#[ ignore
#define SMSTWD_ARCH_SystemInfrastructure_SystemInfrastructure_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SystemInfrastructure_initInfrastructure_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SystemInfrastructure_shutdownInfrastructure_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SystemInfrastructure
SystemInfrastructure::SystemInfrastructure(void) {
    NOTIFY_CONSTRUCTOR(SystemInfrastructure, SystemInfrastructure(), 0, SMSTWD_ARCH_SystemInfrastructure_SystemInfrastructure_SERIALIZE);
}

SystemInfrastructure::~SystemInfrastructure(void) {
    NOTIFY_DESTRUCTOR(~SystemInfrastructure, true);
}

void SystemInfrastructure::initInfrastructure(void) {
    NOTIFY_OPERATION(initInfrastructure, initInfrastructure(), 0, SMSTWD_ARCH_SystemInfrastructure_initInfrastructure_SERIALIZE);
    //#[ operation initInfrastructure()
    
        // TODO: Implement data collection
    
    //#]
}

void SystemInfrastructure::shutdownInfrastructure(void) {
    NOTIFY_OPERATION(shutdownInfrastructure, shutdownInfrastructure(), 0, SMSTWD_ARCH_SystemInfrastructure_shutdownInfrastructure_SERIALIZE);
    //#[ operation shutdownInfrastructure()
    
        // TODO: Implement data collection
    
    
    //#]
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(SystemInfrastructure, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSystemInfrastructure)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SystemInfrastructure.cpp
*********************************************************************/
