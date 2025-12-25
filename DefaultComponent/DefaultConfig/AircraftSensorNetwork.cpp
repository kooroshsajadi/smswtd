/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftSensorNetwork
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftSensorNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "AircraftSensorNetwork.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSTWD_ARCH_AircraftSensorNetwork_AircraftSensorNetwork_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AircraftSensorNetwork_getAtmosphericPressure_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AircraftSensorNetwork_getPrecipitationType_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AircraftSensorNetwork_getTemperature_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AircraftSensorNetwork_getWindSpeed_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AircraftSensorNetwork_readSensorsData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_AircraftSensorNetwork_returnAircraftSensorsData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class AircraftSensorNetwork
//#[ ignore
AircraftSensorNetwork::port_Aircraft_C::port_Aircraft_C(void) : AircraftDataInterface(), _p_(0), itsAircraftDataInterface(NULL) {
}

AircraftSensorNetwork::port_Aircraft_C::~port_Aircraft_C(void) {
    cleanUpRelations();
}

void AircraftSensorNetwork::port_Aircraft_C::connectAircraftSensorNetwork(AircraftSensorNetwork* part) {
    setItsAircraftDataInterface(part);
    
}

AircraftDataInterface* AircraftSensorNetwork::port_Aircraft_C::getItsAircraftDataInterface(void) {
    return this;
}

aircraftData AircraftSensorNetwork::port_Aircraft_C::returnAircraftSensorsData(void) {
    aircraftData res;
    if (itsAircraftDataInterface != NULL) {
        res = itsAircraftDataInterface->returnAircraftSensorsData();
    }
    return res;
}

bool AircraftSensorNetwork::port_Aircraft_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsAircraftDataInterface != NULL) {
            if (event->isTypeOf(startSensing_SMSTWD_ARCH_id)) {
                res = itsAircraftDataInterface->send(event, params);
            }
            else if (event->isTypeOf(redoSensing_SMSTWD_ARCH_id)) {
                res = itsAircraftDataInterface->send(event, params);
            }
            else {// Interface AircraftDataInterface does not support any other events
            }
        }
    }
    return res;
    
}

bool AircraftSensorNetwork::port_Aircraft_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        event->setPort(this);
        if (itsAircraftDataInterface != NULL) {
            if (event->isTypeOf(startSensing_SMSTWD_ARCH_id)) {
                res = itsAircraftDataInterface->send(event);
            }
            else if (event->isTypeOf(redoSensing_SMSTWD_ARCH_id)) {
                res = itsAircraftDataInterface->send(event);
            }
            else {// Interface AircraftDataInterface does not support any other events
            }
        }
    }
    return res;
    
}

void AircraftSensorNetwork::port_Aircraft_C::setItsAircraftDataInterface(AircraftDataInterface* const p_AircraftDataInterface) {
    itsAircraftDataInterface = p_AircraftDataInterface;
}

void AircraftSensorNetwork::port_Aircraft_C::cleanUpRelations(void) {
    if(itsAircraftDataInterface != NULL)
        {
            itsAircraftDataInterface = NULL;
        }
}
//#]

AircraftSensorNetwork::AircraftSensorNetwork(IOxfActive* const theActiveContext) : AircraftDataInterface(), itsSMSWTD(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(AircraftSensorNetwork, AircraftSensorNetwork(), 0, SMSTWD_ARCH_AircraftSensorNetwork_AircraftSensorNetwork_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

AircraftSensorNetwork::~AircraftSensorNetwork(void) {
    NOTIFY_DESTRUCTOR(~AircraftSensorNetwork, false);
    cleanUpRelations();
}

aircraftData AircraftSensorNetwork::returnAircraftSensorsData(void) {
    NOTIFY_OPERATION(returnAircraftSensorsData, returnAircraftSensorsData(), 0, SMSTWD_ARCH_AircraftSensorNetwork_returnAircraftSensorsData_SERIALIZE);
    //#[ operation returnAircraftSensorsData()
    aircraftData data;
    
    data.atmosphericPressure = atmosphericPressure;
    data.precipitationType = precipitationType;
    data.temperature = temperature;
    data.windSpeed = windSpeed;
    
    return data;
    //#]
}

void AircraftSensorNetwork::getAtmosphericPressure(void) {
    NOTIFY_OPERATION(getAtmosphericPressure, getAtmosphericPressure(), 0, SMSTWD_ARCH_AircraftSensorNetwork_getAtmosphericPressure_SERIALIZE);
    //#[ operation getAtmosphericPressure()
    // Atmospheric pressure: 950 to 1013 hPa (mb)
    // Normal sea-level is 1013 hPa; hurricanes can drop to 950 or lower
    this->atmosphericPressure = std::rand() % 64 + 950; // 950-1013 hPa
    //#]
}

void AircraftSensorNetwork::getPrecipitationType(void) {
    NOTIFY_OPERATION(getPrecipitationType, getPrecipitationType(), 0, SMSTWD_ARCH_AircraftSensorNetwork_getPrecipitationType_SERIALIZE);
    //#[ operation getPrecipitationType()
    // Precipitation type: 0=none, 1=rain, 2=snow, 3=hail
    // Encoded categorical value for different precipitation types
    this->precipitationType = std::rand() % 4; // 0-3
    //#]
}

void AircraftSensorNetwork::getTemperature(void) {
    NOTIFY_OPERATION(getTemperature, getTemperature(), 0, SMSTWD_ARCH_AircraftSensorNetwork_getTemperature_SERIALIZE);
    //#[ operation getTemperature()
    // Temperature: -20 to 25°C
    // Flight level temperatures vary based on altitude and storm conditions
    this->temperature = std::rand() % 46 - 20; // -20 to 25°C
    //#]
}

void AircraftSensorNetwork::getWindSpeed(void) {
    NOTIFY_OPERATION(getWindSpeed, getWindSpeed(), 0, SMSTWD_ARCH_AircraftSensorNetwork_getWindSpeed_SERIALIZE);
    //#[ operation getWindSpeed()
    // Wind speed: 10 to 150 knots (or 5 to 75 m/s)
    // From calm to hurricane force winds at flight level
    this->windSpeed = std::rand() % 141 + 10; // 10-150 knots
    //#]
}

void AircraftSensorNetwork::readSensorsData(void) {
    NOTIFY_OPERATION(readSensorsData, readSensorsData(), 0, SMSTWD_ARCH_AircraftSensorNetwork_readSensorsData_SERIALIZE);
    //#[ operation readSensorsData()
    std::cout << "Reading aircraft sensors data!" << std::endl;
    
    getAtmosphericPressure();
    getPrecipitationType();
    getTemperature();
    getWindSpeed();
    //#]
}

AircraftSensorNetwork::port_Aircraft_C* AircraftSensorNetwork::getPort_Aircraft(void) const {
    return (AircraftSensorNetwork::port_Aircraft_C*) &port_Aircraft;
}

AircraftSensorNetwork::port_Aircraft_C* AircraftSensorNetwork::get_port_Aircraft(void) const {
    return (AircraftSensorNetwork::port_Aircraft_C*) &port_Aircraft;
}

void AircraftSensorNetwork::setAtmosphericPressure(const int p_atmosphericPressure) {
    atmosphericPressure = p_atmosphericPressure;
    NOTIFY_SET_OPERATION;
}

void AircraftSensorNetwork::setPrecipitationType(const int p_precipitationType) {
    precipitationType = p_precipitationType;
    NOTIFY_SET_OPERATION;
}

void AircraftSensorNetwork::setTemperature(const int p_temperature) {
    temperature = p_temperature;
    NOTIFY_SET_OPERATION;
}

void AircraftSensorNetwork::setWindSpeed(const int p_windSpeed) {
    windSpeed = p_windSpeed;
    NOTIFY_SET_OPERATION;
}

const SMSWTD* AircraftSensorNetwork::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void AircraftSensorNetwork::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsAircraftSensorNetwork(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

bool AircraftSensorNetwork::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void AircraftSensorNetwork::initRelations(void) {
    if (get_port_Aircraft() != NULL) {
        get_port_Aircraft()->connectAircraftSensorNetwork(this);
    }
}

void AircraftSensorNetwork::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void AircraftSensorNetwork::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const AircraftSensorNetwork* p_AircraftSensorNetwork = itsSMSWTD->getItsAircraftSensorNetwork();
            if(p_AircraftSensorNetwork != NULL)
                {
                    itsSMSWTD->__setItsAircraftSensorNetwork(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void AircraftSensorNetwork::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void AircraftSensorNetwork::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAircraftSensorNetwork(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void AircraftSensorNetwork::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void AircraftSensorNetwork::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        //#[ state Idle.(Entry) 
        std::cout << "Aircraft sensing is off!" << std::endl;
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus AircraftSensorNetwork::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(startSensing_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    //#[ transition 1 
                    std::cout << "Aircraft sensing is on!" << std::endl;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Sampling");
                    rootState_subState = Sampling;
                    rootState_active = Sampling;
                    //#[ state Sampling.(Entry) 
                    readSensorsData();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Sampling
        case Sampling:
        {
            if(IS_EVENT_TYPE_OF(stopSensing_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Sampling");
                    //#[ transition 2 
                    std::cout << "Stopping aircraft sensing..." << std::endl;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    //#[ state Idle.(Entry) 
                    std::cout << "Aircraft sensing is off!" << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else {
                if(IS_EVENT_TYPE_OF(redoSensing_SMSTWD_ARCH_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("3");
                        NOTIFY_STATE_EXITED("ROOT.Sampling");
                        NOTIFY_STATE_ENTERED("ROOT.Sampling");
                        rootState_subState = Sampling;
                        rootState_active = Sampling;
                        //#[ state Sampling.(Entry) 
                        readSensorsData();
                        //#]
                        NOTIFY_TRANSITION_TERMINATED("3");
                        res = eventConsumed;
                    }
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
void OMAnimatedAircraftSensorNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("atmosphericPressure", x2String(myReal->atmosphericPressure));
    aomsAttributes->addAttribute("precipitationType", x2String(myReal->precipitationType));
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
    OMAnimatedAircraftDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedAircraftSensorNetwork::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    OMAnimatedAircraftDataInterface::serializeRelations(aomsRelations);
}

void OMAnimatedAircraftSensorNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case AircraftSensorNetwork::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case AircraftSensorNetwork::Sampling:
        {
            Sampling_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedAircraftSensorNetwork::Sampling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Sampling");
}

void OMAnimatedAircraftSensorNetwork::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(AircraftSensorNetwork, SMSTWD_ARCH, false, AircraftDataInterface, OMAnimatedAircraftDataInterface, OMAnimatedAircraftSensorNetwork)

OMINIT_SUPERCLASS(AircraftDataInterface, OMAnimatedAircraftDataInterface)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftSensorNetwork.cpp
*********************************************************************/
