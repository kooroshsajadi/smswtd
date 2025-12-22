/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderwaterOceanographicSensorNetwork
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderwaterOceanographicSensorNetwork.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UnderwaterOceanographicSensorNetwork.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSTWD_ARCH_UnderwaterOceanographicSensorNetwork_UnderwaterOceanographicSensorNetwork_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class UnderwaterOceanographicSensorNetwork
UnderwaterOceanographicSensorNetwork::UnderwaterOceanographicSensorNetwork(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(UnderwaterOceanographicSensorNetwork, UnderwaterOceanographicSensorNetwork(), 0, SMSTWD_ARCH_UnderwaterOceanographicSensorNetwork_UnderwaterOceanographicSensorNetwork_SERIALIZE);
}

UnderwaterOceanographicSensorNetwork::~UnderwaterOceanographicSensorNetwork(void) {
    NOTIFY_DESTRUCTOR(~UnderwaterOceanographicSensorNetwork, true);
    cleanUpRelations();
}

const SMSWTD* UnderwaterOceanographicSensorNetwork::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void UnderwaterOceanographicSensorNetwork::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsUnderwaterOceanographicSensorNetwork(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void UnderwaterOceanographicSensorNetwork::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const UnderwaterOceanographicSensorNetwork* p_UnderwaterOceanographicSensorNetwork = itsSMSWTD->getItsUnderwaterOceanographicSensorNetwork();
            if(p_UnderwaterOceanographicSensorNetwork != NULL)
                {
                    itsSMSWTD->__setItsUnderwaterOceanographicSensorNetwork(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void UnderwaterOceanographicSensorNetwork::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void UnderwaterOceanographicSensorNetwork::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsUnderwaterOceanographicSensorNetwork(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void UnderwaterOceanographicSensorNetwork::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUnderwaterOceanographicSensorNetwork::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(UnderwaterOceanographicSensorNetwork, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedUnderwaterOceanographicSensorNetwork)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderwaterOceanographicSensorNetwork.cpp
*********************************************************************/
