/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderwaterSeismicSensorNetwork
//!	Generated Date	: Mon, 22, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSeismicSensorNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UnderwaterSeismicSensorNetwork.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_UnderwaterSeismicSensorNetwork_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_getHorizontalAcceleration_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_getVerticalAcceleration_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_readUnderwaterSensorData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class UnderwaterSeismicSensorNetwork
//#[ ignore
UnderwaterSeismicSensorNetwork::port_Ocean_C::port_Ocean_C(void) : SensorDataInterface(), _p_(0), itsSensorDataInterface(NULL) {
}

UnderwaterSeismicSensorNetwork::port_Ocean_C::~port_Ocean_C(void) {
    cleanUpRelations();
}

void UnderwaterSeismicSensorNetwork::port_Ocean_C::connectUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* part) {
    setItsSensorDataInterface(part);
    
}

SensorDataInterface* UnderwaterSeismicSensorNetwork::port_Ocean_C::getItsSensorDataInterface(void) {
    return this;
}

underwaterSensorData UnderwaterSeismicSensorNetwork::port_Ocean_C::readUnderwaterSensorData(void) {
    underwaterSensorData res;
    if (itsSensorDataInterface != NULL) {
        res = itsSensorDataInterface->readUnderwaterSensorData();
    }
    return res;
}

void UnderwaterSeismicSensorNetwork::port_Ocean_C::setItsSensorDataInterface(SensorDataInterface* const p_SensorDataInterface) {
    itsSensorDataInterface = p_SensorDataInterface;
}

void UnderwaterSeismicSensorNetwork::port_Ocean_C::cleanUpRelations(void) {
    if(itsSensorDataInterface != NULL)
        {
            itsSensorDataInterface = NULL;
        }
}
//#]

UnderwaterSeismicSensorNetwork::UnderwaterSeismicSensorNetwork(IOxfActive* const theActiveContext) : OMReactive(), SensorDataInterface(), horizontalAcceleration(20), verticalAcceleration(20), itsSMSWTD(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UnderwaterSeismicSensorNetwork, UnderwaterSeismicSensorNetwork(), 0, SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_UnderwaterSeismicSensorNetwork_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

UnderwaterSeismicSensorNetwork::~UnderwaterSeismicSensorNetwork(void) {
    NOTIFY_DESTRUCTOR(~UnderwaterSeismicSensorNetwork, false);
    cleanUpRelations();
}

int UnderwaterSeismicSensorNetwork::getHorizontalAcceleration(void) {
    NOTIFY_OPERATION(getHorizontalAcceleration, getHorizontalAcceleration(), 0, SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_getHorizontalAcceleration_SERIALIZE);
    //#[ operation getHorizontalAcceleration()
    return horizontalAcceleration;
    //#]
}

int UnderwaterSeismicSensorNetwork::getVerticalAcceleration(void) {
    NOTIFY_OPERATION(getVerticalAcceleration, getVerticalAcceleration(), 0, SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_getVerticalAcceleration_SERIALIZE);
    //#[ operation getVerticalAcceleration()
    return verticalAcceleration;
    //#]
}

underwaterSensorData UnderwaterSeismicSensorNetwork::readUnderwaterSensorData(void) {
    NOTIFY_OPERATION(readUnderwaterSensorData, readUnderwaterSensorData(), 0, SMSTWD_ARCH_UnderwaterSeismicSensorNetwork_readUnderwaterSensorData_SERIALIZE);
    //#[ operation readUnderwaterSensorData()
    underwaterSensorData newData;
    
    newData.horizontalAcceleration = std::rand() % 201 + 900; // 900–110
    newData.verticalAcceleration = std::rand() % 201 + 900; // 900–110
    
    this->horizontalAcceleration = newData.horizontalAcceleration;
    this->verticalAcceleration = newData.verticalAcceleration;
    
    return newData;
    //#]
}

UnderwaterSeismicSensorNetwork::port_Ocean_C* UnderwaterSeismicSensorNetwork::getPort_Ocean(void) const {
    return (UnderwaterSeismicSensorNetwork::port_Ocean_C*) &port_Ocean;
}

UnderwaterSeismicSensorNetwork::port_Ocean_C* UnderwaterSeismicSensorNetwork::get_port_Ocean(void) const {
    return (UnderwaterSeismicSensorNetwork::port_Ocean_C*) &port_Ocean;
}

void UnderwaterSeismicSensorNetwork::setHorizontalAcceleration(const int p_horizontalAcceleration) {
    horizontalAcceleration = p_horizontalAcceleration;
}

void UnderwaterSeismicSensorNetwork::setVerticalAcceleration(const int p_verticalAcceleration) {
    verticalAcceleration = p_verticalAcceleration;
}

const SMSWTD* UnderwaterSeismicSensorNetwork::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void UnderwaterSeismicSensorNetwork::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsUnderwaterSeismicSensorNetwork(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

bool UnderwaterSeismicSensorNetwork::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UnderwaterSeismicSensorNetwork::initRelations(void) {
    if (get_port_Ocean() != NULL) {
        get_port_Ocean()->connectUnderwaterSeismicSensorNetwork(this);
    }
}

void UnderwaterSeismicSensorNetwork::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void UnderwaterSeismicSensorNetwork::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const UnderwaterSeismicSensorNetwork* p_UnderwaterSeismicSensorNetwork = itsSMSWTD->getItsUnderwaterSeismicSensorNetwork();
            if(p_UnderwaterSeismicSensorNetwork != NULL)
                {
                    itsSMSWTD->__setItsUnderwaterSeismicSensorNetwork(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void UnderwaterSeismicSensorNetwork::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void UnderwaterSeismicSensorNetwork::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsUnderwaterSeismicSensorNetwork(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void UnderwaterSeismicSensorNetwork::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void UnderwaterSeismicSensorNetwork::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UnderwaterSeismicSensorNetwork::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(startSensing_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    NOTIFY_STATE_ENTERED("ROOT.Sampling");
                    rootState_subState = Sampling;
                    rootState_active = Sampling;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Sampling
        case Sampling:
        {
            if(IS_EVENT_TYPE_OF(stopSensing_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Sampling");
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    NOTIFY_TRANSITION_TERMINATED("1");
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
void OMAnimatedUnderwaterSeismicSensorNetwork::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("verticalAcceleration", x2String(myReal->verticalAcceleration));
    aomsAttributes->addAttribute("horizontalAcceleration", x2String(myReal->horizontalAcceleration));
    OMAnimatedSensorDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedUnderwaterSeismicSensorNetwork::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    OMAnimatedSensorDataInterface::serializeRelations(aomsRelations);
}

void OMAnimatedUnderwaterSeismicSensorNetwork::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UnderwaterSeismicSensorNetwork::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case UnderwaterSeismicSensorNetwork::Sampling:
        {
            Sampling_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUnderwaterSeismicSensorNetwork::Sampling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Sampling");
}

void OMAnimatedUnderwaterSeismicSensorNetwork::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(UnderwaterSeismicSensorNetwork, SMSTWD_ARCH, false, SensorDataInterface, OMAnimatedSensorDataInterface, OMAnimatedUnderwaterSeismicSensorNetwork)

OMINIT_SUPERCLASS(SensorDataInterface, OMAnimatedSensorDataInterface)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSeismicSensorNetwork.cpp
*********************************************************************/
