/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Sat, 27, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SMSWTD.h"
//## link itsAircraftSensorNetwork
#include "AircraftSensorNetwork.h"
//## link itsAlertRecipients
#include "AlertRecipients.h"
//## link itsSatelliteSystem
#include "SatelliteSystem.h"
//## link itsUnderwaterSeismicSensorNetwork
#include "UnderwaterSeismicSensorNetwork.h"
//#[ ignore
#define SMSTWD_ARCH_SMSWTD_SMSWTD_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTD_getAircraftData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTD_getSensorsData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTD_getUnderwaterData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTD_startSubsystems_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SMSWTD
//#[ ignore
SMSWTD::port_Ocean_C::port_Ocean_C(void) : SensorDataInterface(), _p_(0), itsSensorDataInterface(NULL) {
}

SMSWTD::port_Ocean_C::~port_Ocean_C(void) {
    cleanUpRelations();
}

SensorDataInterface* SMSWTD::port_Ocean_C::getItsSensorDataInterface(void) {
    return this;
}

SensorDataInterface* SMSWTD::port_Ocean_C::getOutBound(void) {
    return this;
}

underwaterSensorData SMSWTD::port_Ocean_C::returnUnderwaterSensorsData(void) {
    underwaterSensorData res;
    if (itsSensorDataInterface != NULL) {
        res = itsSensorDataInterface->returnUnderwaterSensorsData();
    }
    return res;
}

bool SMSWTD::port_Ocean_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsSensorDataInterface != NULL) {
            if (event->isTypeOf(redoSensing_SMSTWD_ARCH_id)) {
                res = itsSensorDataInterface->send(event, params);
            }
            else if (event->isTypeOf(startSensing_SMSTWD_ARCH_id)) {
                res = itsSensorDataInterface->send(event, params);
            }
            else {// Interface SensorDataInterface does not support any other events
            }
        }
    }
    return res;
    
}

bool SMSWTD::port_Ocean_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsSensorDataInterface != NULL) {
            if (event->isTypeOf(redoSensing_SMSTWD_ARCH_id)) {
                res = itsSensorDataInterface->send(event);
            }
            else if (event->isTypeOf(startSensing_SMSTWD_ARCH_id)) {
                res = itsSensorDataInterface->send(event);
            }
            else {// Interface SensorDataInterface does not support any other events
            }
        }
    }
    return res;
    
}

void SMSWTD::port_Ocean_C::setItsSensorDataInterface(SensorDataInterface* const p_SensorDataInterface) {
    itsSensorDataInterface = p_SensorDataInterface;
}

void SMSWTD::port_Ocean_C::cleanUpRelations(void) {
    if(itsSensorDataInterface != NULL)
        {
            itsSensorDataInterface = NULL;
        }
}

SMSWTD::port_Satellite_C::port_Satellite_C(void) : SatelliteDataInterface(), _p_(0), itsSatelliteDataInterface(NULL) {
}

SMSWTD::port_Satellite_C::~port_Satellite_C(void) {
    cleanUpRelations();
}

SatelliteDataInterface* SMSWTD::port_Satellite_C::getItsSatelliteDataInterface(void) {
    return this;
}

SatelliteDataInterface* SMSWTD::port_Satellite_C::getOutBound(void) {
    return this;
}

satelliteData SMSWTD::port_Satellite_C::readSatelliteData(void) {
    satelliteData res;
    if (itsSatelliteDataInterface != NULL) {
        res = itsSatelliteDataInterface->readSatelliteData();
    }
    return res;
}

bool SMSWTD::port_Satellite_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
        if (itsSatelliteDataInterface != NULL) {
            if (event->isTypeOf(startSensing_SMSTWD_ARCH_id)) {
                res = itsSatelliteDataInterface->send(event, params);
            }
            else if (event->isTypeOf(redoSensing_SMSTWD_ARCH_id)) {
                res = itsSatelliteDataInterface->send(event, params);
            }
            else {// Interface SatelliteDataInterface does not support any other events
            }
        }
    }
    return res;
    
}

bool SMSWTD::port_Satellite_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
        if (itsSatelliteDataInterface != NULL) {
            if (event->isTypeOf(startSensing_SMSTWD_ARCH_id)) {
                res = itsSatelliteDataInterface->send(event);
            }
            else if (event->isTypeOf(redoSensing_SMSTWD_ARCH_id)) {
                res = itsSatelliteDataInterface->send(event);
            }
            else {// Interface SatelliteDataInterface does not support any other events
            }
        }
    }
    return res;
    
}

void SMSWTD::port_Satellite_C::setItsSatelliteDataInterface(SatelliteDataInterface* const p_SatelliteDataInterface) {
    itsSatelliteDataInterface = p_SatelliteDataInterface;
}

void SMSWTD::port_Satellite_C::cleanUpRelations(void) {
    if(itsSatelliteDataInterface != NULL)
        {
            itsSatelliteDataInterface = NULL;
        }
}

SMSWTD::port_Aircraft_C::port_Aircraft_C(void) : AircraftDataInterface(), _p_(0), itsAircraftDataInterface(NULL) {
}

SMSWTD::port_Aircraft_C::~port_Aircraft_C(void) {
    cleanUpRelations();
}

AircraftDataInterface* SMSWTD::port_Aircraft_C::getItsAircraftDataInterface(void) {
    return this;
}

AircraftDataInterface* SMSWTD::port_Aircraft_C::getOutBound(void) {
    return this;
}

aircraftData SMSWTD::port_Aircraft_C::returnAircraftSensorsData(void) {
    aircraftData res;
    if (itsAircraftDataInterface != NULL) {
        res = itsAircraftDataInterface->returnAircraftSensorsData();
    }
    return res;
}

bool SMSWTD::port_Aircraft_C::send(IOxfEvent* event, const IOxfEventGenerationParams& params) {
    bool res = false;
    if (event != NULL) {
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

bool SMSWTD::port_Aircraft_C::send(IOxfEvent* event) {
    bool res = false;
    if (event != NULL) {
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

void SMSWTD::port_Aircraft_C::setItsAircraftDataInterface(AircraftDataInterface* const p_AircraftDataInterface) {
    itsAircraftDataInterface = p_AircraftDataInterface;
}

void SMSWTD::port_Aircraft_C::cleanUpRelations(void) {
    if(itsAircraftDataInterface != NULL)
        {
            itsAircraftDataInterface = NULL;
        }
}

SMSWTD::port_Analytics_C::port_Analytics_C(void) : underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(), aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(), _p_(0), itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(NULL), itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(NULL) {
}

SMSWTD::port_Analytics_C::~port_Analytics_C(void) {
    cleanUpRelations();
}

aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface* SMSWTD::port_Analytics_C::getItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(void) {
    return this;
}

underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface* SMSWTD::port_Analytics_C::getItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(void) {
    return this;
}

SMSWTD::port_Analytics_C* SMSWTD::port_Analytics_C::getOutBound(void) {
    return this;
}

void SMSWTD::port_Analytics_C::setAircraftsDataFlow(aircraftData p_aircraftsDataFlow) {
    
    if (itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface != NULL) {
        itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface->setAircraftsDataFlow(p_aircraftsDataFlow);
    }
    
}

void SMSWTD::port_Analytics_C::setUnderwaterDataFlow(underwaterSensorData p_underwaterDataFlow) {
    
    if (itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface != NULL) {
        itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface->setUnderwaterDataFlow(p_underwaterDataFlow);
    }
    
}

void SMSWTD::port_Analytics_C::setItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface* const p_aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface) {
    itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface = p_aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface;
}

void SMSWTD::port_Analytics_C::setItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface* const p_underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface) {
    itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface = p_underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface;
}

void SMSWTD::port_Analytics_C::cleanUpRelations(void) {
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

SMSWTD::SMSWTD(IOxfActive* const theActiveContext) : OMReactive(), itsAircraftSensorNetwork(NULL), itsAlertRecipients(NULL), itsSatelliteSystem(NULL), itsUnderwaterSeismicSensorNetwork(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, SMSTWD_ARCH_SMSWTD_SMSWTD_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDataProcessingAndAnalyticsSubsystem.setShouldDelete(false);
        }
        {
            itsSecurityAndAccessControl.setShouldDelete(false);
        }
    }
    initStatechart();
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
    cancelTimeouts();
}

void SMSWTD::getSensorsData(void) {
    NOTIFY_OPERATION(getSensorsData, getSensorsData(), 0, SMSTWD_ARCH_SMSWTD_getSensorsData_SERIALIZE);
    //#[ operation getSensorsData()
    getAircraftData();
    getUnderwaterData();
    
    //#]
}

//#[ ignore
void SMSWTD::setAircraftsDataFlow(aircraftData p_aircraftsDataFlow) {
    if (memcmp(&aircraftsDataFlow, &p_aircraftsDataFlow, sizeof(aircraftData)))  {
        aircraftsDataFlow = p_aircraftsDataFlow;
        FLOW_DATA_SEND(aircraftsDataFlow, port_Analytics, setAircraftsDataFlow, UNKNOWN2STRING);
    }
}

void SMSWTD::setUnderwaterDataFlow(underwaterSensorData p_underwaterDataFlow) {
    if (memcmp(&underwaterDataFlow, &p_underwaterDataFlow, sizeof(underwaterSensorData)))  {
        underwaterDataFlow = p_underwaterDataFlow;
        FLOW_DATA_SEND(underwaterDataFlow, port_Analytics, setUnderwaterDataFlow, UNKNOWN2STRING);
    }
}
//#]

void SMSWTD::startSubsystems(void) {
    NOTIFY_OPERATION(startSubsystems, startSubsystems(), 0, SMSTWD_ARCH_SMSWTD_startSubsystems_SERIALIZE);
    //#[ operation startSubsystems()
    //OUT_PORT(port_Control)->GEN(startProcessing());
    //#]
}

void SMSWTD::getAircraftData(void) {
    NOTIFY_OPERATION(getAircraftData, getAircraftData(), 0, SMSTWD_ARCH_SMSWTD_getAircraftData_SERIALIZE);
    //#[ operation getAircraftData()
    // Call aircraft sensing event.
    OUT_PORT(port_Aircraft)->GEN(redoSensing());
    
    aircraftData data = OUT_PORT(port_Aircraft)->returnAircraftSensorsData();
    
    setAircraftsData(data);
    
    setAircraftsDataFlow(data);
    
    //this->atmosphericPressure = data.atmosphericPressure;
    //this->precipitationType = data.precipitationType;
    //this->temperature = data.temperature;
    //this->windSpeed = data.windSpeed;
    //#]
}

void SMSWTD::getUnderwaterData(void) {
    NOTIFY_OPERATION(getUnderwaterData, getUnderwaterData(), 0, SMSTWD_ARCH_SMSWTD_getUnderwaterData_SERIALIZE);
    //#[ operation getUnderwaterData()
    // Call underwater sensing event.
    OUT_PORT(port_Ocean)->GEN(redoSensing());
    
    underwaterSensorData data = OUT_PORT(port_Ocean)->returnUnderwaterSensorsData();
    
    setUnderwaterData(data);
    
    setUnderwaterDataFlow(data);
    //#]
}

SMSWTD::port_Ocean_C* SMSWTD::getPort_Ocean(void) const {
    return (SMSWTD::port_Ocean_C*) &port_Ocean;
}

SMSWTD::port_Ocean_C* SMSWTD::get_port_Ocean(void) const {
    return (SMSWTD::port_Ocean_C*) &port_Ocean;
}

SMSWTD::port_Satellite_C* SMSWTD::getPort_Satellite(void) const {
    return (SMSWTD::port_Satellite_C*) &port_Satellite;
}

SMSWTD::port_Satellite_C* SMSWTD::get_port_Satellite(void) const {
    return (SMSWTD::port_Satellite_C*) &port_Satellite;
}

SMSWTD::port_Aircraft_C* SMSWTD::getPort_Aircraft(void) const {
    return (SMSWTD::port_Aircraft_C*) &port_Aircraft;
}

SMSWTD::port_Aircraft_C* SMSWTD::get_port_Aircraft(void) const {
    return (SMSWTD::port_Aircraft_C*) &port_Aircraft;
}

SMSWTD::port_Analytics_C* SMSWTD::getPort_Analytics(void) const {
    return (SMSWTD::port_Analytics_C*) &port_Analytics;
}

SMSWTD::port_Analytics_C* SMSWTD::get_port_Analytics(void) const {
    return (SMSWTD::port_Analytics_C*) &port_Analytics;
}

aircraftData const SMSWTD::getAircraftsDataFlow(void) const {
    return aircraftsDataFlow;
}

int const SMSWTD::getAtmosphericPressure(void) const {
    return atmosphericPressure;
}

void SMSWTD::setAtmosphericPressure(const int p_atmosphericPressure) {
    atmosphericPressure = p_atmosphericPressure;
}

int const SMSWTD::getHorizontalAcceleration(void) const {
    return horizontalAcceleration;
}

void SMSWTD::setHorizontalAcceleration(const int p_horizontalAcceleration) {
    horizontalAcceleration = p_horizontalAcceleration;
}

int const SMSWTD::getPrecipitationType(void) const {
    return precipitationType;
}

void SMSWTD::setPrecipitationType(const int p_precipitationType) {
    precipitationType = p_precipitationType;
}

int const SMSWTD::getTemperature(void) const {
    return temperature;
}

void SMSWTD::setTemperature(const int p_temperature) {
    temperature = p_temperature;
}

underwaterSensorData const SMSWTD::getUnderwaterDataFlow(void) const {
    return underwaterDataFlow;
}

int const SMSWTD::getVerticalAcceleration(void) const {
    return verticalAcceleration;
}

void SMSWTD::setVerticalAcceleration(const int p_verticalAcceleration) {
    verticalAcceleration = p_verticalAcceleration;
}

int const SMSWTD::getWindSpeed(void) const {
    return windSpeed;
}

void SMSWTD::setWindSpeed(const int p_windSpeed) {
    windSpeed = p_windSpeed;
}

const AircraftSensorNetwork* SMSWTD::getItsAircraftSensorNetwork(void) const {
    return itsAircraftSensorNetwork;
}

void SMSWTD::setItsAircraftSensorNetwork(AircraftSensorNetwork* const p_AircraftSensorNetwork) {
    if(p_AircraftSensorNetwork != NULL)
        {
            p_AircraftSensorNetwork->_setItsSMSWTD(this);
        }
    _setItsAircraftSensorNetwork(p_AircraftSensorNetwork);
}

const AlertRecipients* SMSWTD::getItsAlertRecipients(void) const {
    return itsAlertRecipients;
}

void SMSWTD::setItsAlertRecipients(AlertRecipients* const p_AlertRecipients) {
    if(p_AlertRecipients != NULL)
        {
            p_AlertRecipients->_setItsSMSWTD(this);
        }
    _setItsAlertRecipients(p_AlertRecipients);
}

const DataCollectionSubsystem* SMSWTD::getItsDataCollectionSubsystem(void) const {
    return &itsDataCollectionSubsystem;
}

const DataProcessingAndAnalyticsSubsystem* SMSWTD::getItsDataProcessingAndAnalyticsSubsystem(void) const {
    return &itsDataProcessingAndAnalyticsSubsystem;
}

const RiskAssessmentAndAlertingSubsystem* SMSWTD::getItsRiskAssessmentAndAlertingSubsystem(void) const {
    return &itsRiskAssessmentAndAlertingSubsystem;
}

const SatelliteSystem* SMSWTD::getItsSatelliteSystem(void) const {
    return itsSatelliteSystem;
}

void SMSWTD::setItsSatelliteSystem(SatelliteSystem* const p_SatelliteSystem) {
    if(p_SatelliteSystem != NULL)
        {
            p_SatelliteSystem->_setItsSMSWTD(this);
        }
    _setItsSatelliteSystem(p_SatelliteSystem);
}

const SecurityAndAccessControl* SMSWTD::getItsSecurityAndAccessControl(void) const {
    return &itsSecurityAndAccessControl;
}

const SystemInfrastructure* SMSWTD::getItsSystemInfrastructure(void) const {
    return &itsSystemInfrastructure;
}

const UnderwaterSeismicSensorNetwork* SMSWTD::getItsUnderwaterSeismicSensorNetwork(void) const {
    return itsUnderwaterSeismicSensorNetwork;
}

void SMSWTD::setItsUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* const p_UnderwaterSeismicSensorNetwork) {
    if(p_UnderwaterSeismicSensorNetwork != NULL)
        {
            p_UnderwaterSeismicSensorNetwork->_setItsSMSWTD(this);
        }
    _setItsUnderwaterSeismicSensorNetwork(p_UnderwaterSeismicSensorNetwork);
}

bool SMSWTD::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool SMSWTD::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsDataProcessingAndAnalyticsSubsystem.startBehavior();
        }
    if(done == true)
        {
            done = itsSecurityAndAccessControl.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void SMSWTD::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void SMSWTD::cleanUpRelations(void) {
    if(itsAircraftSensorNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAircraftSensorNetwork");
            const SMSWTD* p_SMSWTD = itsAircraftSensorNetwork->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsAircraftSensorNetwork->__setItsSMSWTD(NULL);
                }
            itsAircraftSensorNetwork = NULL;
        }
    if(itsAlertRecipients != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAlertRecipients");
            const SMSWTD* p_SMSWTD = itsAlertRecipients->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsAlertRecipients->__setItsSMSWTD(NULL);
                }
            itsAlertRecipients = NULL;
        }
    if(itsSatelliteSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSystem");
            const SMSWTD* p_SMSWTD = itsSatelliteSystem->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsSatelliteSystem->__setItsSMSWTD(NULL);
                }
            itsSatelliteSystem = NULL;
        }
    if(itsUnderwaterSeismicSensorNetwork != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUnderwaterSeismicSensorNetwork");
            const SMSWTD* p_SMSWTD = itsUnderwaterSeismicSensorNetwork->getItsSMSWTD();
            if(p_SMSWTD != NULL)
                {
                    itsUnderwaterSeismicSensorNetwork->__setItsSMSWTD(NULL);
                }
            itsUnderwaterSeismicSensorNetwork = NULL;
        }
}

void SMSWTD::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

aircraftData const SMSWTD::getAircraftsData(void) const {
    return AircraftsData;
}

void SMSWTD::setAircraftsData(const aircraftData p_AircraftsData) {
    AircraftsData = p_AircraftsData;
}

bool const SMSWTD::getIsRunning(void) const {
    return isRunning;
}

void SMSWTD::setIsRunning(const bool p_isRunning) {
    isRunning = p_isRunning;
}

char* const SMSWTD::getSystemId(void) const {
    return systemId;
}

void SMSWTD::setSystemId(char* const p_systemId) {
    systemId = p_systemId;
}

void SMSWTD::setUnderwaterData(const underwaterSensorData p_underwaterData) {
    underwaterData = p_underwaterData;
}

void SMSWTD::__setItsAircraftSensorNetwork(AircraftSensorNetwork* const p_AircraftSensorNetwork) {
    itsAircraftSensorNetwork = p_AircraftSensorNetwork;
    if(p_AircraftSensorNetwork != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAircraftSensorNetwork", p_AircraftSensorNetwork, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAircraftSensorNetwork");
        }
}

void SMSWTD::_setItsAircraftSensorNetwork(AircraftSensorNetwork* const p_AircraftSensorNetwork) {
    if(itsAircraftSensorNetwork != NULL)
        {
            itsAircraftSensorNetwork->__setItsSMSWTD(NULL);
        }
    __setItsAircraftSensorNetwork(p_AircraftSensorNetwork);
}

void SMSWTD::_clearItsAircraftSensorNetwork(void) {
    NOTIFY_RELATION_CLEARED("itsAircraftSensorNetwork");
    itsAircraftSensorNetwork = NULL;
}

void SMSWTD::__setItsAlertRecipients(AlertRecipients* const p_AlertRecipients) {
    itsAlertRecipients = p_AlertRecipients;
    if(p_AlertRecipients != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlertRecipients", p_AlertRecipients, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlertRecipients");
        }
}

void SMSWTD::_setItsAlertRecipients(AlertRecipients* const p_AlertRecipients) {
    if(itsAlertRecipients != NULL)
        {
            itsAlertRecipients->__setItsSMSWTD(NULL);
        }
    __setItsAlertRecipients(p_AlertRecipients);
}

void SMSWTD::_clearItsAlertRecipients(void) {
    NOTIFY_RELATION_CLEARED("itsAlertRecipients");
    itsAlertRecipients = NULL;
}

void SMSWTD::__setItsSatelliteSystem(SatelliteSystem* const p_SatelliteSystem) {
    itsSatelliteSystem = p_SatelliteSystem;
    if(p_SatelliteSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSatelliteSystem", p_SatelliteSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSatelliteSystem");
        }
}

void SMSWTD::_setItsSatelliteSystem(SatelliteSystem* const p_SatelliteSystem) {
    if(itsSatelliteSystem != NULL)
        {
            itsSatelliteSystem->__setItsSMSWTD(NULL);
        }
    __setItsSatelliteSystem(p_SatelliteSystem);
}

void SMSWTD::_clearItsSatelliteSystem(void) {
    NOTIFY_RELATION_CLEARED("itsSatelliteSystem");
    itsSatelliteSystem = NULL;
}

void SMSWTD::__setItsUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* const p_UnderwaterSeismicSensorNetwork) {
    itsUnderwaterSeismicSensorNetwork = p_UnderwaterSeismicSensorNetwork;
    if(p_UnderwaterSeismicSensorNetwork != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUnderwaterSeismicSensorNetwork", p_UnderwaterSeismicSensorNetwork, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUnderwaterSeismicSensorNetwork");
        }
}

void SMSWTD::_setItsUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* const p_UnderwaterSeismicSensorNetwork) {
    if(itsUnderwaterSeismicSensorNetwork != NULL)
        {
            itsUnderwaterSeismicSensorNetwork->__setItsSMSWTD(NULL);
        }
    __setItsUnderwaterSeismicSensorNetwork(p_UnderwaterSeismicSensorNetwork);
}

void SMSWTD::_clearItsUnderwaterSeismicSensorNetwork(void) {
    NOTIFY_RELATION_CLEARED("itsUnderwaterSeismicSensorNetwork");
    itsUnderwaterSeismicSensorNetwork = NULL;
}

void SMSWTD::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDataProcessingAndAnalyticsSubsystem.setActiveContext(theActiveContext, false);
        itsSecurityAndAccessControl.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD::destroy(void) {
    itsDataProcessingAndAnalyticsSubsystem.destroy();
    itsSecurityAndAccessControl.destroy();
    OMReactive::destroy();
}

void SMSWTD::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        //#[ state Off.(Entry) 
        std::cout << "SMSWTD is off!" << std::endl;
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SMSWTD::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(turn_on_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 1 
                    std::cout << "SMSWTD is on!" << std::endl;
                    
                    startSubsystems();
                    
                    // Start sensors.
                    OUT_PORT(port_Ocean)->GEN(startSensing());
                    OUT_PORT(port_Aircraft)->GEN(startSensing());
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state On.(Entry) 
                    getSensorsData();
                    //#]
                    rootState_timeout = scheduleTimeout(3000, "ROOT.On");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State On
        case On:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On");
                            NOTIFY_STATE_ENTERED("ROOT.SMSWTDSensorsTimeEvent");
                            pushNullTransition();
                            rootState_subState = SMSWTDSensorsTimeEvent;
                            rootState_active = SMSWTDSensorsTimeEvent;
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        case SMSWTDSensorsTimeEvent:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SMSWTDSensorsTimeEvent");
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state On.(Entry) 
                    getSensorsData();
                    //#]
                    rootState_timeout = scheduleTimeout(3000, "ROOT.On");
                    NOTIFY_TRANSITION_TERMINATED("3");
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
void OMAnimatedSMSWTD::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("systemId", x2String(myReal->systemId));
    aomsAttributes->addAttribute("isRunning", x2String(myReal->isRunning));
    aomsAttributes->addAttribute("verticalAcceleration", x2String(myReal->verticalAcceleration));
    aomsAttributes->addAttribute("horizontalAcceleration", x2String(myReal->horizontalAcceleration));
    aomsAttributes->addAttribute("atmosphericPressure", x2String(myReal->atmosphericPressure));
    aomsAttributes->addAttribute("precipitationType", x2String(myReal->precipitationType));
    aomsAttributes->addAttribute("temperature", x2String(myReal->temperature));
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("underwaterData", UNKNOWN2STRING(myReal->underwaterData));
    aomsAttributes->addAttribute("AircraftsData", UNKNOWN2STRING(myReal->AircraftsData));
    aomsAttributes->addAttribute("underwaterDataFlow", UNKNOWN2STRING(myReal->underwaterDataFlow));
    aomsAttributes->addAttribute("aircraftsDataFlow", UNKNOWN2STRING(myReal->aircraftsDataFlow));
}

void OMAnimatedSMSWTD::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDataCollectionSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDataCollectionSubsystem);
    aomsRelations->addRelation("itsDataProcessingAndAnalyticsSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDataProcessingAndAnalyticsSubsystem);
    aomsRelations->addRelation("itsRiskAssessmentAndAlertingSubsystem", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsRiskAssessmentAndAlertingSubsystem);
    aomsRelations->addRelation("itsSecurityAndAccessControl", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSecurityAndAccessControl);
    aomsRelations->addRelation("itsSystemInfrastructure", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSystemInfrastructure);
    aomsRelations->addRelation("itsSatelliteSystem", false, true);
    if(myReal->itsSatelliteSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsSatelliteSystem);
        }
    aomsRelations->addRelation("itsAircraftSensorNetwork", false, true);
    if(myReal->itsAircraftSensorNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsAircraftSensorNetwork);
        }
    aomsRelations->addRelation("itsUnderwaterSeismicSensorNetwork", false, true);
    if(myReal->itsUnderwaterSeismicSensorNetwork)
        {
            aomsRelations->ADD_ITEM(myReal->itsUnderwaterSeismicSensorNetwork);
        }
    aomsRelations->addRelation("itsAlertRecipients", false, true);
    if(myReal->itsAlertRecipients)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlertRecipients);
        }
}

void OMAnimatedSMSWTD::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SMSWTD::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case SMSWTD::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case SMSWTD::SMSWTDSensorsTimeEvent:
        {
            SMSWTDSensorsTimeEvent_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSMSWTD::SMSWTDSensorsTimeEvent_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SMSWTDSensorsTimeEvent");
}

void OMAnimatedSMSWTD::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedSMSWTD::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(SMSWTD, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSMSWTD)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.cpp
*********************************************************************/
