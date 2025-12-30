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

#define SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_calculateWeatherSeverityScore_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_processData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class DataProcessingAndAnalyticsSubsystem
//#[ ignore
DataProcessingAndAnalyticsSubsystem::port_Analytics_C::port_Analytics_C(void) : underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(), aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(), _p_(0), itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(NULL), itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(NULL) {
}

DataProcessingAndAnalyticsSubsystem::port_Analytics_C::~port_Analytics_C(void) {
    cleanUpRelations();
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::connectDataProcessingAndAnalyticsSubsystem(DataProcessingAndAnalyticsSubsystem* part) {
    setItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(part);
    setItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(part);
    
}

aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface* DataProcessingAndAnalyticsSubsystem::port_Analytics_C::getItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(void) {
    return this;
}

underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface* DataProcessingAndAnalyticsSubsystem::port_Analytics_C::getItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(void) {
    return this;
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::setAircraftsDataFlow(aircraftData p_aircraftsDataFlow) {
    
    if (itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface != NULL) {
        itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface->setAircraftsDataFlow(p_aircraftsDataFlow);
    }
    
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::setUnderwaterDataFlow(underwaterSensorData p_underwaterDataFlow) {
    
    if (itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface != NULL) {
        itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface->setUnderwaterDataFlow(p_underwaterDataFlow);
    }
    
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::setItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface* const p_aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface) {
    itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface = p_aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface;
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::setItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface* const p_underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface) {
    itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface = p_underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface;
}

void DataProcessingAndAnalyticsSubsystem::port_Analytics_C::cleanUpRelations(void) {
    if(itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface != NULL)
        {
            itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface = NULL;
        }
    if(itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface != NULL)
        {
            itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

DataProcessingAndAnalyticsSubsystem::DataProcessingAndAnalyticsSubsystem(IOxfActive* const theActiveContext) : OMReactive(), underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(), aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface() {
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
void DataProcessingAndAnalyticsSubsystem::setAircraftsDataFlow(aircraftData p_aircraftsDataFlow) {
    if (memcmp(&aircraftsDataFlow, &p_aircraftsDataFlow, sizeof(aircraftData))) {
        aircraftsDataFlow = p_aircraftsDataFlow;
        FLOW_DATA_RECEIVE("aircraftsDataFlow", aircraftsDataFlow, UNKNOWN2STRING);
        GEN(chAircraftsDataFlow);
    }
    
}

void DataProcessingAndAnalyticsSubsystem::setUnderwaterDataFlow(underwaterSensorData p_underwaterDataFlow) {
    if (memcmp(&underwaterDataFlow, &p_underwaterDataFlow, sizeof(underwaterSensorData))) {
        underwaterDataFlow = p_underwaterDataFlow;
        FLOW_DATA_RECEIVE("underwaterDataFlow", underwaterDataFlow, UNKNOWN2STRING);
        GEN(chUnderwaterDataFlow);
    }
    
}
//#]

void DataProcessingAndAnalyticsSubsystem::calculateGroundAcceleration(void) {
    NOTIFY_OPERATION(calculateGroundAcceleration, calculateGroundAcceleration(), 0, SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_calculateGroundAcceleration_SERIALIZE);
    //#[ operation calculateGroundAcceleration()
    setGroundAcceleration(std::sqrt(this->underwaterDataFlow.horizontalAcceleration * this->underwaterDataFlow.horizontalAcceleration + this->underwaterDataFlow.verticalAcceleration * this->underwaterDataFlow.verticalAcceleration));
    
    //#]
}

void DataProcessingAndAnalyticsSubsystem::calculateWeatherSeverityScore(void) {
    NOTIFY_OPERATION(calculateWeatherSeverityScore, calculateWeatherSeverityScore(), 0, SMSTWD_ARCH_DataProcessingAndAnalyticsSubsystem_calculateWeatherSeverityScore_SERIALIZE);
    //#[ operation calculateWeatherSeverityScore()
    setWeatherSeverityScore((this->aircraftsDataFlow.windSpeed * 0.5) + (1013.0 - this->aircraftsDataFlow.atmosphericPressure) + (this->aircraftsDataFlow.precipitationType * 10.0));
    //#]
}

DataProcessingAndAnalyticsSubsystem::port_Analytics_C* DataProcessingAndAnalyticsSubsystem::getPort_Analytics(void) const {
    return (DataProcessingAndAnalyticsSubsystem::port_Analytics_C*) &port_Analytics;
}

DataProcessingAndAnalyticsSubsystem::port_Analytics_C* DataProcessingAndAnalyticsSubsystem::get_port_Analytics(void) const {
    return (DataProcessingAndAnalyticsSubsystem::port_Analytics_C*) &port_Analytics;
}

aircraftData const DataProcessingAndAnalyticsSubsystem::getAircraftsDataFlow(void) const {
    return aircraftsDataFlow;
}

void DataProcessingAndAnalyticsSubsystem::setGroundAcceleration(const int p_groundAcceleration) {
    groundAcceleration = p_groundAcceleration;
    NOTIFY_SET_OPERATION;
}

underwaterSensorData const DataProcessingAndAnalyticsSubsystem::getUnderwaterDataFlow(void) const {
    return underwaterDataFlow;
}

void DataProcessingAndAnalyticsSubsystem::setWeatherSeverityScore(const int p_weatherSeverityScore) {
    weatherSeverityScore = p_weatherSeverityScore;
    NOTIFY_SET_OPERATION;
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

int const DataProcessingAndAnalyticsSubsystem::getGroundAcceleration(void) const {
    return groundAcceleration;
}

int const DataProcessingAndAnalyticsSubsystem::getWeatherSeverityScore(void) const {
    return weatherSeverityScore;
}

void DataProcessingAndAnalyticsSubsystem::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Processing");
        rootState_subState = Processing;
        rootState_active = Processing;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus DataProcessingAndAnalyticsSubsystem::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Processing
    if(rootState_active == Processing)
        {
            if(IS_EVENT_TYPE_OF(chUnderwaterDataFlow_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Processing");
                    //#[ transition 1 
                    calculateGroundAcceleration();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Processing");
                    rootState_subState = Processing;
                    rootState_active = Processing;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(chAircraftsDataFlow_SMSTWD_ARCH_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("2");
                        NOTIFY_STATE_EXITED("ROOT.Processing");
                        //#[ transition 2 
                        calculateWeatherSeverityScore();
                        //#]
                        NOTIFY_STATE_ENTERED("ROOT.Processing");
                        rootState_subState = Processing;
                        rootState_active = Processing;
                        NOTIFY_TRANSITION_TERMINATED("2");
                        res = eventConsumed;
                    }
                }
                
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataProcessingAndAnalyticsSubsystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("groundAcceleration", x2String(myReal->groundAcceleration));
    aomsAttributes->addAttribute("weatherSeverityScore", x2String(myReal->weatherSeverityScore));
    aomsAttributes->addAttribute("underwaterDataFlow", UNKNOWN2STRING(myReal->underwaterDataFlow));
    aomsAttributes->addAttribute("aircraftsDataFlow", UNKNOWN2STRING(myReal->aircraftsDataFlow));
}

void OMAnimatedDataProcessingAndAnalyticsSubsystem::serializeRelations(AOMSRelations* aomsRelations) const {
}

void OMAnimatedDataProcessingAndAnalyticsSubsystem::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == DataProcessingAndAnalyticsSubsystem::Processing)
        {
            Processing_serializeStates(aomsState);
        }
}

void OMAnimatedDataProcessingAndAnalyticsSubsystem::Processing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Processing");
}
//#]

IMPLEMENT_REACTIVE_META_P(DataProcessingAndAnalyticsSubsystem, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedDataProcessingAndAnalyticsSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.cpp
*********************************************************************/
