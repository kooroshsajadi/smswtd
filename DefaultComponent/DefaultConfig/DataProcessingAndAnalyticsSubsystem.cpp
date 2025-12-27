/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingAndAnalyticsSubsystem
//!	Generated Date	: Sat, 27, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "DataProcessingAndAnalyticsSubsystem.h"
//#[ ignore
#define SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_DataProcessingAndAnalyticsSubsystem_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_calculateGroundAcceleration_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_processData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class DataProcessingAndAnalyticsSubsystem
//#[ ignore
DataProcessingAndAnalyticsSubsystem::port_Analytics_C::port_Analytics_C(void) : underwaterSensorData_underwaterData_ProxyFlowPropertyInterface(), _p_(0), itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface(NULL) {
}

DataProcessingAndAnalyticsSubsystem::port_Analytics_C::~port_Analytics_C(void) {
    cleanUpRelations();
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::connectDataProcessingAndAnalyticsSubsystem(DataProcessingAndAnalyticsSubsystem* part) {
    setItsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface(part);
    
}

underwaterSensorData_underwaterData_ProxyFlowPropertyInterface* DataProcessingAndAnalyticsSubsystem::port_Analytics_C::getItsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface(void) {
    return this;
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::setUnderwaterData(underwaterSensorData p_underwaterData) {
    
    if (itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface != NULL) {
        itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface->setUnderwaterData(p_underwaterData);
    }
    
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::setItsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface(underwaterSensorData_underwaterData_ProxyFlowPropertyInterface* const p_underwaterSensorData_underwaterData_ProxyFlowPropertyInterface) {
    itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface = p_underwaterSensorData_underwaterData_ProxyFlowPropertyInterface;
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::cleanUpRelations(void) {
    if(itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface != NULL)
        {
            itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

DataProcessingAndAnalyticsSubsystem::DataProcessingAndAnalyticsSubsystem(IOxfActive* const theActiveContext) : OMReactive(), underwaterSensorData_underwaterData_ProxyFlowPropertyInterface() {
    NOTIFY_REACTIVE_CONSTRUCTOR(DataProcessingAndAnalyticsSubsystem, DataProcessingAndAnalyticsSubsystem(), 0, SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_DataProcessingAndAnalyticsSubsystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
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

//#[ ignore
void DataProcessingAndAnalyticsSubsystem::setUnderwaterData(underwaterSensorData p_underwaterData) {
    if (memcmp(&underwaterData, &p_underwaterData, sizeof(underwaterSensorData))) {
        underwaterData = p_underwaterData;
        FLOW_DATA_RECEIVE("underwaterData", underwaterData, UNKNOWN2STRING);
        GEN(chUnderwaterData);
    }
    
}
//#]

void DataProcessingAndAnalyticsSubsystem::calculateGroundAcceleration(void) {
    NOTIFY_OPERATION(calculateGroundAcceleration, calculateGroundAcceleration(), 0, SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_calculateGroundAcceleration_SERIALIZE);
    //#[ operation calculateGroundAcceleration()
    std::cout << "H: " << this->underwaterData.horizontalAcceleration << std::endl;
    std::cout << "V: " << this->underwaterData.verticalAcceleration << std::endl;
    setGroundAcceleration(std::sqrt(this->underwaterData.horizontalAcceleration * this->underwaterData.horizontalAcceleration + this->underwaterData.verticalAcceleration * this->underwaterData.verticalAcceleration));
    
    //#]
}

DataProcessingAndAnalyticsSubsystem::port_Analytics_C* DataProcessingAndAnalyticsSubsystem::getPort_Analytics(void) const {
    return (DataProcessingAndAnalyticsSubsystem::port_Analytics_C*) &port_Analytics;
}

DataProcessingAndAnalyticsSubsystem::port_Analytics_C* DataProcessingAndAnalyticsSubsystem::get_port_Analytics(void) const {
    return (DataProcessingAndAnalyticsSubsystem::port_Analytics_C*) &port_Analytics;
}

int const DataProcessingAndAnalyticsSubsystem::getAtmosphericPressure(void) const {
    return atmosphericPressure;
}

void DataProcessingAndAnalyticsSubsystem::setAtmosphericPressure(const int p_atmosphericPressure) {
    atmosphericPressure = p_atmosphericPressure;
}

int const DataProcessingAndAnalyticsSubsystem::getGroundAcceleration(void) const {
    return groundAcceleration;
}

void DataProcessingAndAnalyticsSubsystem::setGroundAcceleration(const int p_groundAcceleration) {
    groundAcceleration = p_groundAcceleration;
    NOTIFY_SET_OPERATION;
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

underwaterSensorData const DataProcessingAndAnalyticsSubsystem::getUnderwaterData(void) const {
    return underwaterData;
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

bool DataProcessingAndAnalyticsSubsystem::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void DataProcessingAndAnalyticsSubsystem::initRelations(void) {
    if (get_port_Analytics() != NULL) {
        get_port_Analytics()->connectDataProcessingAndAnalyticsSubsystem(this);
    }
}

void DataProcessingAndAnalyticsSubsystem::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
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

void DataProcessingAndAnalyticsSubsystem::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Processing");
        rootState_subState = Processing;
        rootState_active = Processing;
        //#[ state Processing.(Entry) 
        std::cout << "Being in the on-entry" << std::endl;
        calculateGroundAcceleration();
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DataProcessingAndAnalyticsSubsystem::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(startProcessing_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    //#[ transition 1 
                    std::cout << "Data analytics is on!" << std::endl;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Processing");
                    rootState_subState = Processing;
                    rootState_active = Processing;
                    //#[ state Processing.(Entry) 
                    std::cout << "Being in the on-entry" << std::endl;
                    calculateGroundAcceleration();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Processing
        case Processing:
        {
            if(IS_EVENT_TYPE_OF(chUnderwaterData_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Processing");
                    //#[ transition 2 
                    calculateGroundAcceleration();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Processing");
                    rootState_subState = Processing;
                    rootState_active = Processing;
                    //#[ state Processing.(Entry) 
                    std::cout << "Being in the on-entry" << std::endl;
                    calculateGroundAcceleration();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
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
    aomsAttributes->addAttribute("groundAcceleration", x2String(myReal->groundAcceleration));
    aomsAttributes->addAttribute("underwaterData", UNKNOWN2STRING(myReal->underwaterData));
}

void OMAnimatedDataProcessingAndAnalyticsSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedDataProcessingAndAnalyticsSubsystem::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case DataProcessingAndAnalyticsSubsystem::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case DataProcessingAndAnalyticsSubsystem::Processing:
        {
            Processing_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDataProcessingAndAnalyticsSubsystem::Processing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Processing");
}

void OMAnimatedDataProcessingAndAnalyticsSubsystem::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_P(DataProcessingAndAnalyticsSubsystem, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedDataProcessingAndAnalyticsSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.cpp
*********************************************************************/
