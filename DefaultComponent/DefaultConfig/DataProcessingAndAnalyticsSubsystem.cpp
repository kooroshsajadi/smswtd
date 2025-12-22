/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingAndAnalyticsSubsystem
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataProcessingAndAnalyticsSubsystem.h"
//#[ ignore
#define SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_DataProcessingAndAnalyticsSubsystem_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_processData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class DataProcessingAndAnalyticsSubsystem
DataProcessingAndAnalyticsSubsystem::DataProcessingAndAnalyticsSubsystem(void) {
    NOTIFY_CONSTRUCTOR(DataProcessingAndAnalyticsSubsystem, DataProcessingAndAnalyticsSubsystem(), 0, SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_DataProcessingAndAnalyticsSubsystem_SERIALIZE);
}

DataProcessingAndAnalyticsSubsystem::~DataProcessingAndAnalyticsSubsystem(void) {
    NOTIFY_DESTRUCTOR(~DataProcessingAndAnalyticsSubsystem, true);
}

void DataProcessingAndAnalyticsSubsystem::processData(void) {
    NOTIFY_OPERATION(processData, processData(), 0, SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_processData_SERIALIZE);
    //#[ operation processData()
    
        // TODO: Implement data collection
    
    
    //#]
}

char* const DataProcessingAndAnalyticsSubsystem::getModelVersion(void) const {
    return modelVersion;
}

void DataProcessingAndAnalyticsSubsystem::setModelVersion(char* const p_modelVersion) {
    modelVersion = p_modelVersion;
}

int const DataProcessingAndAnalyticsSubsystem::getWindowSize(void) const {
    return windowSize;
}

void DataProcessingAndAnalyticsSubsystem::setWindowSize(const int p_windowSize) {
    windowSize = p_windowSize;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataProcessingAndAnalyticsSubsystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windowSize", x2String(myReal->windowSize));
    aomsAttributes->addAttribute("modelVersion", x2String(myReal->modelVersion));
}
//#]

IMPLEMENT_META_P(DataProcessingAndAnalyticsSubsystem, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedDataProcessingAndAnalyticsSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.cpp
*********************************************************************/
