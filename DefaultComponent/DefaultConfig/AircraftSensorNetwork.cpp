/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftSensorNetwork
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftSensorNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AircraftSensorNetwork.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSTWD_ARCH_AircraftSensorNetwork_AircraftSensorNetwork_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class AircraftSensorNetwork
AircraftSensorNetwork::AircraftSensorNetwork(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(AircraftSensorNetwork, AircraftSensorNetwork(), 0, SMSTWD_ARCH_AircraftSensorNetwork_AircraftSensorNetwork_SERIALIZE);
}

AircraftSensorNetwork::~AircraftSensorNetwork(void) {
    NOTIFY_DESTRUCTOR(~AircraftSensorNetwork, true);
    cleanUpRelations();
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAircraftSensorNetwork::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(AircraftSensorNetwork, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedAircraftSensorNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftSensorNetwork.cpp
*********************************************************************/
