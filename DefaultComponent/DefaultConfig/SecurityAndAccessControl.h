/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SecurityAndAccessControl
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SecurityAndAccessControl.h
*********************************************************************/

#ifndef SecurityAndAccessControl_H
#define SecurityAndAccessControl_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsAdministrator
class Administrator;

//## link itsHumanMachineInterface
class HumanMachineInterface;

//## package SMSTWD_ARCH

//## class SecurityAndAccessControl
class SecurityAndAccessControl : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSecurityAndAccessControl;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SecurityAndAccessControl(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~SecurityAndAccessControl(void);
    
    ////    Operations    ////
    
    //## operation checkAccess()
    virtual void checkAccess(void);
    
    //## operation initializeSecurity()
    virtual void initializeSecurity(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Administrator* getItsAdministrator(void) const;
    
    //## auto_generated
    void setItsAdministrator(Administrator* const p_Administrator);
    
    //## auto_generated
    const HumanMachineInterface* getItsHumanMachineInterface(void) const;
    
    //## auto_generated
    void setItsHumanMachineInterface(HumanMachineInterface* const p_HumanMachineInterface);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Administrator* itsAdministrator;		//## link itsAdministrator
    
    HumanMachineInterface* itsHumanMachineInterface;		//## link itsHumanMachineInterface
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAdministrator(Administrator* const p_Administrator);
    
    //## auto_generated
    void _setItsAdministrator(Administrator* const p_Administrator);
    
    //## auto_generated
    void _clearItsAdministrator(void);
    
    //## auto_generated
    void __setItsHumanMachineInterface(HumanMachineInterface* const p_HumanMachineInterface);
    
    //## auto_generated
    void _setItsHumanMachineInterface(HumanMachineInterface* const p_HumanMachineInterface);
    
    //## auto_generated
    void _clearItsHumanMachineInterface(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum SecurityAndAccessControl_Enum {
        OMNonState = 0
    };
//#]

private :

//#[ ignore
    SecurityAndAccessControl_Enum rootState_subState;
    
    SecurityAndAccessControl_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSecurityAndAccessControl : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SecurityAndAccessControl, OMAnimatedSecurityAndAccessControl)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SecurityAndAccessControl::rootState_IN(void) const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SecurityAndAccessControl.h
*********************************************************************/
