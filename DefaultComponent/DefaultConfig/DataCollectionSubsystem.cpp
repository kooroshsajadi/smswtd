/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollectionSubsystem
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataCollectionSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataCollectionSubsystem.h"
//#[ ignore
#define SMSTWD_ARCH_DataCollectionSubsystem_DataCollectionSubsystem_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_DataCollectionSubsystem_collectData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class DataCollectionSubsystem
DataCollectionSubsystem::DataCollectionSubsystem(void) {
    NOTIFY_CONSTRUCTOR(DataCollectionSubsystem, DataCollectionSubsystem(), 0, SMSTWD_ARCH_DataCollectionSubsystem_DataCollectionSubsystem_SERIALIZE);
}

DataCollectionSubsystem::~DataCollectionSubsystem(void) {
    NOTIFY_DESTRUCTOR(~DataCollectionSubsystem, true);
}

void DataCollectionSubsystem::collectData(void) {
    NOTIFY_OPERATION(collectData, collectData(), 0, SMSTWD_ARCH_DataCollectionSubsystem_collectData_SERIALIZE);
    //#[ operation collectData()
    
        // TODO: Implement data collection
    
    //#]
}

long const DataCollectionSubsystem::getLastCollectionTime(void) const {
    return lastCollectionTime;
}

void DataCollectionSubsystem::setLastCollectionTime(const long p_lastCollectionTime) {
    lastCollectionTime = p_lastCollectionTime;
}

int const DataCollectionSubsystem::getSamplingInterval(void) const {
    return samplingInterval;
}

void DataCollectionSubsystem::setSamplingInterval(const int p_samplingInterval) {
    samplingInterval = p_samplingInterval;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataCollectionSubsystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("samplingInterval", x2String(myReal->samplingInterval));
    aomsAttributes->addAttribute("lastCollectionTime", x2String(myReal->lastCollectionTime));
}
//#]

IMPLEMENT_META_P(DataCollectionSubsystem, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedDataCollectionSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollectionSubsystem.cpp
*********************************************************************/
