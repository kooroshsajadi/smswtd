/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Administrator
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\Administrator.h
*********************************************************************/

#ifndef Administrator_H
#define Administrator_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## link itsSecurityAndAccessControl
class SecurityAndAccessControl;

//## package SMSTWD_ARCH

//## class Administrator
class Administrator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAdministrator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Administrator(void);
    
    //## auto_generated
    ~Administrator(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SecurityAndAccessControl* getItsSecurityAndAccessControl(void) const;
    
    //## auto_generated
    void setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SecurityAndAccessControl* itsSecurityAndAccessControl;		//## link itsSecurityAndAccessControl
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl);
    
    //## auto_generated
    void _setItsSecurityAndAccessControl(SecurityAndAccessControl* const p_SecurityAndAccessControl);
    
    //## auto_generated
    void _clearItsSecurityAndAccessControl(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAdministrator : virtual public AOMInstance {
    DECLARE_META(Administrator, OMAnimatedAdministrator)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Administrator.h
*********************************************************************/
