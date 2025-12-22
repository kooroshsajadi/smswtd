/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Mon, 22, Dec 2025  
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

#define SMSTWD_ARCH_SMSWTD_getSensorData_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SMSWTD_run_SERIALIZE OM_NO_OP
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

underwaterSensorData SMSWTD::port_Ocean_C::readUnderwaterSensorData(void) {
    underwaterSensorData res;
    if (itsSensorDataInterface != NULL) {
        res = itsSensorDataInterface->readUnderwaterSensorData();
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
//#]

SMSWTD::SMSWTD(IOxfActive* const theActiveContext) : OMReactive(), horizontalAcceleration(20), verticalAcceleration(20), itsAircraftSensorNetwork(NULL), itsAlertRecipients(NULL), itsSatelliteSystem(NULL), itsUnderwaterSeismicSensorNetwork(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SMSWTD, SMSWTD(), 0, SMSTWD_ARCH_SMSWTD_SMSWTD_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsSecurityAndAccessControl.setShouldDelete(false);
        }
    }
    initStatechart();
}

SMSWTD::~SMSWTD(void) {
    NOTIFY_DESTRUCTOR(~SMSWTD, true);
    cleanUpRelations();
}

underwaterSensorData SMSWTD::getSensorData(void) {
    NOTIFY_OPERATION(getSensorData, getSensorData(), 0, SMSTWD_ARCH_SMSWTD_getSensorData_SERIALIZE);
    //#[ operation getSensorData()
    underwaterSensorData newData;
    
    newData.horizontalAcceleration = itsUnderwaterSeismicSensorNetwork->getHorizontalAcceleration();
    newData.verticalAcceleration = itsUnderwaterSeismicSensorNetwork->getVerticalAcceleration();
    
    return newData;
    //#]
}

void SMSWTD::run(void) {
    NOTIFY_OPERATION(run, run(), 0, SMSTWD_ARCH_SMSWTD_run_SERIALIZE);
    //#[ operation run()
    //## operation run()
    //void SMSWTD::run() {
    itsSystemInfrastructure.initInfrastructure();
    itsSecurityAndAccessControl.initializeSecurity();
    itsDataCollectionSubsystem.collectData();
    itsDataProcessingAndAnalyticsSubsystem.processData();
    itsRiskAssessmentAndAlertingSubsystem.assessRisk();
    itsRiskAssessmentAndAlertingSubsystem.sendAlerts();
    std::cout << "SMSWTD::run() completed pipeline\n" << std::endl;
    //}
    
    //#]
}

SMSWTD::port_Ocean_C* SMSWTD::getPort_Ocean(void) const {
    return (SMSWTD::port_Ocean_C*) &port_Ocean;
}

SMSWTD::port_Ocean_C* SMSWTD::get_port_Ocean(void) const {
    return (SMSWTD::port_Ocean_C*) &port_Ocean;
}

int const SMSWTD::getHorizontalAcceleration(void) const {
    return horizontalAcceleration;
}

void SMSWTD::setHorizontalAcceleration(const int p_horizontalAcceleration) {
    horizontalAcceleration = p_horizontalAcceleration;
}

int const SMSWTD::getVerticalAcceleration(void) const {
    return verticalAcceleration;
}

void SMSWTD::setVerticalAcceleration(const int p_verticalAcceleration) {
    verticalAcceleration = p_verticalAcceleration;
    NOTIFY_SET_OPERATION;
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

bool SMSWTD::startBehavior(void) {
    bool done = true;
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
        itsSecurityAndAccessControl.setActiveContext(theActiveContext, false);
    }
}

void SMSWTD::destroy(void) {
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
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus SMSWTD::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Off
    if(rootState_active == Off)
        {
            if(IS_EVENT_TYPE_OF(evSMSWTDOn_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 1 
                    underwaterSensorData data = OUT_PORT(port_Ocean)->readUnderwaterSensorData();
                    int sensorHorizontalAcceleration = data.horizontalAcceleration;
                    int sensorVerticalAcceleration = data.verticalAcceleration;
                    
                    this->horizontalAcceleration = sensorHorizontalAcceleration;
                    this->verticalAcceleration = sensorVerticalAcceleration;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    //#[ state On.(Entry) 
                    data = OUT_PORT(port_Ocean)->readUnderwaterSensorData();
                    sensorHorizontalAcceleration = data.horizontalAcceleration;
                    sensorVerticalAcceleration = data.verticalAcceleration;
                    
                    this->horizontalAcceleration = sensorHorizontalAcceleration;
                    this->verticalAcceleration = sensorVerticalAcceleration;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
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
        default:
            break;
    }
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
