/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingAndAnalyticsSubsystem
//!	Generated Date	: Thu, 25, Dec 2025  
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
    std::cout << "Processing data.." << std::endl;
    //#]
}

int const DataProcessingAndAnalyticsSubsystem::getAtmosphericPressure(void) const {
    return atmosphericPressure;
}

void DataProcessingAndAnalyticsSubsystem::setAtmosphericPressure(const int p_atmosphericPressure) {
    atmosphericPressure = p_atmosphericPressure;
}

int const DataProcessingAndAnalyticsSubsystem::getHorizontalAcceleration(void) const {
    return horizontalAcceleration;
}

void DataProcessingAndAnalyticsSubsystem::setHorizontalAcceleration(const int p_horizontalAcceleration) {
    horizontalAcceleration = p_horizontalAcceleration;
}

int const DataProcessingAndAnalyticsSubsystem::getPrecipitationType(void) const {
    return precipitationType;
}

void DataProcessingAndAnalyticsSubsystem::setPrecipitationType(const int p_precipitationType) {
    precipitationType = p_precipitationType;
}

int const DataProcessingAndAnalyticsSubsystem::getTemperature(void) const {
    return temperature;
}

void DataProcessingAndAnalyticsSubsystem::setTemperature(const int p_temperature) {
    temperature = p_temperature;
}

int const DataProcessingAndAnalyticsSubsystem::getVerticalAcceleration(void) const {
    return verticalAcceleration;
}

void DataProcessingAndAnalyticsSubsystem::setVerticalAcceleration(const int p_verticalAcceleration) {
    verticalAcceleration = p_verticalAcceleration;
}

int const DataProcessingAndAnalyticsSubsystem::getWindSpeed(void) const {
    return windSpeed;
}

void DataProcessingAndAnalyticsSubsystem::setWindSpeed(const int p_windSpeed) {
    windSpeed = p_windSpeed;
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
    aomsAttributes->addAttribute("verticalAcceleration", x2String(myReal->verticalAcceleration));
    aomsAttributes->addAttribute("horizontalAcceleration", x2String(myReal->horizontalAcceleration));
    aomsAttributes->addAttribute("atmosphericPressure", x2String(myReal->atmosphericPressure));
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("precipitationType", x2String(myReal->precipitationType));
}
//#]

IMPLEMENT_META_P(DataProcessingAndAnalyticsSubsystem, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedDataProcessingAndAnalyticsSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.cpp
*********************************************************************/
