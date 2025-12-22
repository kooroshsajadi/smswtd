/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Administrator
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Administrator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Administrator.h"
//## link itsHumanMachineInterface
#include "HumanMachineInterface.h"
//## link itsSecurityAndAccessControl
#include "SecurityAndAccessControl.h"
//#[ ignore
#define SMSTWD_ARCH_Administrator_Administrator_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class Administrator
Administrator::Administrator(void) : itsHumanMachineInterface(NULL), itsSecurityAndAccessControl(NULL) {
    NOTIFY_CONSTRUCTOR(Administrator, Administrator(), 0, SMSTWD_ARCH_Administrator_Administrator_SERIALIZE);
}

Administrator::~Administrator(void) {
    NOTIFY_DESTRUCTOR(~Administrator, true);
    cleanUpRelations();
}

const HumanMachineInterface* Administrator::getItsHumanMachineInterface(void) const {
    return itsHumanMachineInterface;
}

void Administrator::setItsHumanMachineInterface(HumanMachineInterface* const p_HumanMachineInterface) {
    if(p_HumanMachineInterface != NULL)
        {
            p_HumanMachineInterface->_setItsAdministrator(this);
        }
    _setItsHumanMachineInterface(p_HumanMachineInterface);
}

const SecurityAndAccessControl* Administrator::getItsSecurityAndAccessControl(void) const {
    return itsSecurityAndAccessControl;
}

void Administrator::setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl) {
    if(p_SecurityAndAccessControl != NULL)
        {
            p_SecurityAndAccessControl->_setItsAdministrator(this);
        }
    _setItsSecurityAndAccessControl(p_SecurityAndAccessControl);
}

void Administrator::cleanUpRelations(void) {
    if(itsHumanMachineInterface != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHumanMachineInterface");
            const Administrator* p_Administrator = itsHumanMachineInterface->getItsAdministrator();
            if(p_Administrator != NULL)
                {
                    itsHumanMachineInterface->__setItsAdministrator(NULL);
                }
            itsHumanMachineInterface = NULL;
        }
    if(itsSecurityAndAccessControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSecurityAndAccessControl");
            const Administrator* p_Administrator = itsSecurityAndAccessControl->getItsAdministrator();
            if(p_Administrator != NULL)
                {
                    itsSecurityAndAccessControl->__setItsAdministrator(NULL);
                }
            itsSecurityAndAccessControl = NULL;
        }
}

void Administrator::__setItsHumanMachineInterface(HumanMachineInterface* const p_HumanMachineInterface) {
    itsHumanMachineInterface = p_HumanMachineInterface;
    if(p_HumanMachineInterface != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHumanMachineInterface", p_HumanMachineInterface, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHumanMachineInterface");
        }
}

void Administrator::_setItsHumanMachineInterface(HumanMachineInterface* const p_HumanMachineInterface) {
    if(itsHumanMachineInterface != NULL)
        {
            itsHumanMachineInterface->__setItsAdministrator(NULL);
        }
    __setItsHumanMachineInterface(p_HumanMachineInterface);
}

void Administrator::_clearItsHumanMachineInterface(void) {
    NOTIFY_RELATION_CLEARED("itsHumanMachineInterface");
    itsHumanMachineInterface = NULL;
}

void Administrator::__setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl) {
    itsSecurityAndAccessControl = p_SecurityAndAccessControl;
    if(p_SecurityAndAccessControl != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSecurityAndAccessControl", p_SecurityAndAccessControl, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSecurityAndAccessControl");
        }
}

void Administrator::_setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl) {
    if(itsSecurityAndAccessControl != NULL)
        {
            itsSecurityAndAccessControl->__setItsAdministrator(NULL);
        }
    __setItsSecurityAndAccessControl(p_SecurityAndAccessControl);
}

void Administrator::_clearItsSecurityAndAccessControl(void) {
    NOTIFY_RELATION_CLEARED("itsSecurityAndAccessControl");
    itsSecurityAndAccessControl = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAdministrator::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHumanMachineInterface", false, true);
    if(myReal->itsHumanMachineInterface)
        {
            aomsRelations->ADD_ITEM(myReal->itsHumanMachineInterface);
        }
    aomsRelations->addRelation("itsSecurityAndAccessControl", false, true);
    if(myReal->itsSecurityAndAccessControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsSecurityAndAccessControl);
        }
}
//#]

IMPLEMENT_META_P(Administrator, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedAdministrator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Administrator.cpp
*********************************************************************/
