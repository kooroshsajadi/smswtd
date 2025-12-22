/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AlertRecipients
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AlertRecipients.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AlertRecipients.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSTWD_ARCH_AlertRecipients_AlertRecipients_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class AlertRecipients
AlertRecipients::AlertRecipients(void) : itsSMSWTD(NULL) {
    NOTIFY_CONSTRUCTOR(AlertRecipients, AlertRecipients(), 0, SMSTWD_ARCH_AlertRecipients_AlertRecipients_SERIALIZE);
}

AlertRecipients::~AlertRecipients(void) {
    NOTIFY_DESTRUCTOR(~AlertRecipients, true);
    cleanUpRelations();
}

const SMSWTD* AlertRecipients::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void AlertRecipients::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsAlertRecipients(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

void AlertRecipients::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const AlertRecipients* p_AlertRecipients = itsSMSWTD->getItsAlertRecipients();
            if(p_AlertRecipients != NULL)
                {
                    itsSMSWTD->__setItsAlertRecipients(NULL);
                }
            itsSMSWTD = NULL;
        }
}

void AlertRecipients::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
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

void AlertRecipients::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsAlertRecipients(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void AlertRecipients::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAlertRecipients::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
}
//#]

IMPLEMENT_META_P(AlertRecipients, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedAlertRecipients)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AlertRecipients.cpp
*********************************************************************/
