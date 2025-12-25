/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SecurityAndAccessControl
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SecurityAndAccessControl.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SecurityAndAccessControl.h"
//## link itsAdministrator
#include "Administrator.h"
//#[ ignore
#define SMSTWD_ARCH_SecurityAndAccessControl_SecurityAndAccessControl_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SecurityAndAccessControl_checkAccess_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SecurityAndAccessControl_initializeSecurity_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SecurityAndAccessControl
SecurityAndAccessControl::SecurityAndAccessControl(IOxfActive* const theActiveContext) : OMReactive(), itsAdministrator(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SecurityAndAccessControl, SecurityAndAccessControl(), 0, SMSTWD_ARCH_SecurityAndAccessControl_SecurityAndAccessControl_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

SecurityAndAccessControl::~SecurityAndAccessControl(void) {
    NOTIFY_DESTRUCTOR(~SecurityAndAccessControl, true);
    cleanUpRelations();
}

void SecurityAndAccessControl::checkAccess(void) {
    NOTIFY_OPERATION(checkAccess, checkAccess(), 0, SMSTWD_ARCH_SecurityAndAccessControl_checkAccess_SERIALIZE);
    //#[ operation checkAccess()
    
        // TODO: Implement data collection
    
    
    //#]
}

void SecurityAndAccessControl::initializeSecurity(void) {
    NOTIFY_OPERATION(initializeSecurity, initializeSecurity(), 0, SMSTWD_ARCH_SecurityAndAccessControl_initializeSecurity_SERIALIZE);
    //#[ operation initializeSecurity()
    
        // TODO: Implement data collection
    
    //#]
}

const Administrator* SecurityAndAccessControl::getItsAdministrator(void) const {
    return itsAdministrator;
}

void SecurityAndAccessControl::setItsAdministrator(Administrator* const p_Administrator) {
    if(p_Administrator != NULL)
        {
            p_Administrator->_setItsSecurityAndAccessControl(this);
        }
    _setItsAdministrator(p_Administrator);
}

bool SecurityAndAccessControl::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void SecurityAndAccessControl::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void SecurityAndAccessControl::cleanUpRelations(void) {
    if(itsAdministrator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAdministrator");
            const SecurityAndAccessControl* p_SecurityAndAccessControl = itsAdministrator->getItsSecurityAndAccessControl();
            if(p_SecurityAndAccessControl != NULL)
                {
                    itsAdministrator->__setItsSecurityAndAccessControl(NULL);
                }
            itsAdministrator = NULL;
        }
}

void SecurityAndAccessControl::__setItsAdministrator(Administrator* const p_Administrator) {
    itsAdministrator = p_Administrator;
    if(p_Administrator != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAdministrator", p_Administrator, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAdministrator");
        }
}

void SecurityAndAccessControl::_setItsAdministrator(Administrator* const p_Administrator) {
    if(itsAdministrator != NULL)
        {
            itsAdministrator->__setItsSecurityAndAccessControl(NULL);
        }
    __setItsAdministrator(p_Administrator);
}

void SecurityAndAccessControl::_clearItsAdministrator(void) {
    NOTIFY_RELATION_CLEARED("itsAdministrator");
    itsAdministrator = NULL;
}

void SecurityAndAccessControl::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus SecurityAndAccessControl::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSecurityAndAccessControl::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAdministrator", false, true);
    if(myReal->itsAdministrator)
        {
            aomsRelations->ADD_ITEM(myReal->itsAdministrator);
        }
}

void OMAnimatedSecurityAndAccessControl::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_P(SecurityAndAccessControl, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedSecurityAndAccessControl)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SecurityAndAccessControl.cpp
*********************************************************************/
