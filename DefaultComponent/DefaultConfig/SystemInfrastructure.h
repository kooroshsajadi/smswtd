/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SystemInfrastructure
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SystemInfrastructure.h
*********************************************************************/

#ifndef SystemInfrastructure_H
#define SystemInfrastructure_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class SystemInfrastructure
class SystemInfrastructure {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSystemInfrastructure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SystemInfrastructure(void);
    
    //## auto_generated
    virtual ~SystemInfrastructure(void);
    
    ////    Operations    ////
    
    //## operation initInfrastructure()
    virtual void initInfrastructure(void);
    
    //## operation shutdownInfrastructure()
    virtual void shutdownInfrastructure(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSystemInfrastructure : virtual public AOMInstance {
    DECLARE_META(SystemInfrastructure, OMAnimatedSystemInfrastructure)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SystemInfrastructure.h
*********************************************************************/
