/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSystem
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SatelliteSystem.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSTWD_ARCH_SatelliteSystem_SatelliteSystem_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SatelliteSystem
SatelliteSystem::SatelliteSystem(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(SatelliteSystem, SatelliteSystem(), 0, SMSTWD_ARCH_SatelliteSystem_SatelliteSystem_SERIALIZE);
}

SatelliteSystem::~SatelliteSystem(void) {
    NOTIFY_DESTRUCTOR(~SatelliteSystem, true);
    cleanUpRelations();
}

const SMSWTD* SatelliteSystem::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void SatelliteSystem::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSatelliteSystem(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void SatelliteSystem::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const SatelliteSystem* p_SatelliteSystem = itsSMSWTD->getItsSatelliteSystem();
            if(p_SatelliteSystem != NULL)
                {
                    itsSMSWTD->__setItsSatelliteSystem(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void SatelliteSystem::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void SatelliteSystem::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSatelliteSystem(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void SatelliteSystem::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(SatelliteSystem, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSatelliteSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystem.cpp
*********************************************************************/
