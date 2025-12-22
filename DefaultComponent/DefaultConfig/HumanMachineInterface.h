/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HumanMachineInterface
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\HumanMachineInterface.h
*********************************************************************/

#ifndef HumanMachineInterface_H
#define HumanMachineInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## link itsAdministrator
class Administrator;

//## link itsSecurityAndAccessControl
class SecurityAndAccessControl;

//## package SMSTWD_ARCH

//## class HumanMachineInterface
class HumanMachineInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHumanMachineInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HumanMachineInterface(void);
    
    //## auto_generated
    ~HumanMachineInterface(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Administrator* getItsAdministrator(void) const;
    
    //## auto_generated
    void setItsAdministrator(Administrator* const p_Administrator);
    
    //## auto_generated
    const SecurityAndAccessControl* getItsSecurityAndAccessControl(void) const;
    
    //## auto_generated
    void setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Administrator* itsAdministrator;		//## link itsAdministrator
    
    SecurityAndAccessControl* itsSecurityAndAccessControl;		//## link itsSecurityAndAccessControl
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAdministrator(Administrator* const p_Administrator);
    
    //## auto_generated
    void _setItsAdministrator(Administrator* const p_Administrator);
    
    //## auto_generated
    void _clearItsAdministrator(void);
    
    //## auto_generated
    void __setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl);
    
    //## auto_generated
    void _setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl);
    
    //## auto_generated
    void _clearItsSecurityAndAccessControl(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHumanMachineInterface : virtual public AOMInstance {
    DECLARE_META(HumanMachineInterface, OMAnimatedHumanMachineInterface)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HumanMachineInterface.h
*********************************************************************/
