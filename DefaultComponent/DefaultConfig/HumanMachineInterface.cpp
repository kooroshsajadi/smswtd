/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HumanMachineInterface
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\HumanMachineInterface.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HumanMachineInterface.h"
//## link itsAdministrator
#include "Administrator.h"
//## link itsSecurityAndAccessControl
#include "SecurityAndAccessControl.h"
//#[ ignore
#define SMSTWD_ARCH_HumanMachineInterface_HumanMachineInterface_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class HumanMachineInterface
HumanMachineInterface::HumanMachineInterface(void) : itsAdministrator(NULL), itsSecurityAndAccessControl(NULL) {
    NOTIFY_CONSTRUCTOR(HumanMachineInterface, HumanMachineInterface(), 0, SMSTWD_ARCH_HumanMachineInterface_HumanMachineInterface_SERIALIZE);
}

HumanMachineInterface::~HumanMachineInterface(void) {
    NOTIFY_DESTRUCTOR(~HumanMachineInterface, true);
    cleanUpRelations();
}

const Administrator* HumanMachineInterface::getItsAdministrator(void) const {
    return itsAdministrator;
}

void HumanMachineInterface::setItsAdministrator(Administrator* const p_Administrator) {
    if(p_Administrator != NULL)
        {
            p_Administrator->_setItsHumanMachineInterface(this);
        }
    _setItsAdministrator(p_Administrator);
}

const SecurityAndAccessControl* HumanMachineInterface::getItsSecurityAndAccessControl(void) const {
    return itsSecurityAndAccessControl;
}

void HumanMachineInterface::setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl) {
    if(p_SecurityAndAccessControl != NULL)
        {
            p_SecurityAndAccessControl->_setItsHumanMachineInterface(this);
        }
    _setItsSecurityAndAccessControl(p_SecurityAndAccessControl);
}

void HumanMachineInterface::cleanUpRelations(void) {
    if(itsAdministrator != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAdministrator");
            const HumanMachineInterface* p_HumanMachineInterface = itsAdministrator->getItsHumanMachineInterface();
            if(p_HumanMachineInterface != NULL)
                {
                    itsAdministrator->__setItsHumanMachineInterface(NULL);
                }
            itsAdministrator = NULL;
        }
    if(itsSecurityAndAccessControl != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSecurityAndAccessControl");
            const HumanMachineInterface* p_HumanMachineInterface = itsSecurityAndAccessControl->getItsHumanMachineInterface();
            if(p_HumanMachineInterface != NULL)
                {
                    itsSecurityAndAccessControl->__setItsHumanMachineInterface(NULL);
                }
            itsSecurityAndAccessControl = NULL;
        }
}

void HumanMachineInterface::__setItsAdministrator(Administrator* const p_Administrator) {
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

void HumanMachineInterface::_setItsAdministrator(Administrator* const p_Administrator) {
    if(itsAdministrator != NULL)
        {
            itsAdministrator->__setItsHumanMachineInterface(NULL);
        }
    __setItsAdministrator(p_Administrator);
}

void HumanMachineInterface::_clearItsAdministrator(void) {
    NOTIFY_RELATION_CLEARED("itsAdministrator");
    itsAdministrator = NULL;
}

void HumanMachineInterface::__setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl) {
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

void HumanMachineInterface::_setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl) {
    if(itsSecurityAndAccessControl != NULL)
        {
            itsSecurityAndAccessControl->__setItsHumanMachineInterface(NULL);
        }
    __setItsSecurityAndAccessControl(p_SecurityAndAccessControl);
}

void HumanMachineInterface::_clearItsSecurityAndAccessControl(void) {
    NOTIFY_RELATION_CLEARED("itsSecurityAndAccessControl");
    itsSecurityAndAccessControl = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHumanMachineInterface::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsAdministrator", false, true);
    if(myReal->itsAdministrator)
        {
            aomsRelations->ADD_ITEM(myReal->itsAdministrator);
        }
    aomsRelations->addRelation("itsSecurityAndAccessControl", false, true);
    if(myReal->itsSecurityAndAccessControl)
        {
            aomsRelations->ADD_ITEM(myReal->itsSecurityAndAccessControl);
        }
}
//#]

IMPLEMENT_META_P(HumanMachineInterface, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedHumanMachineInterface)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HumanMachineInterface.cpp
*********************************************************************/
