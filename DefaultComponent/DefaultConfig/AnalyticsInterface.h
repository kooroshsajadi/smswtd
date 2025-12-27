/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AnalyticsInterface
//!	Generated Date	: Sat, 27, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AnalyticsInterface.h
*********************************************************************/

#ifndef AnalyticsInterface_H
#define AnalyticsInterface_H

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
//## package SMSTWD_ARCH

//## class AnalyticsInterface
class AnalyticsInterface : virtual public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAnalyticsInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AnalyticsInterface(void);
    
    //## auto_generated
    virtual ~AnalyticsInterface(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAnalyticsInterface : virtual public AOMInstance {
    DECLARE_META(AnalyticsInterface, OMAnimatedAnalyticsInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AnalyticsInterface.h
*********************************************************************/
