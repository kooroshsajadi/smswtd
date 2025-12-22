/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AnalysisInputInterfaces
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AnalysisInputInterfaces.h
*********************************************************************/

#ifndef AnalysisInputInterfaces_H
#define AnalysisInputInterfaces_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class AnalysisInputInterfaces
class AnalysisInputInterfaces {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAnalysisInputInterfaces;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AnalysisInputInterfaces(void);
    
    //## auto_generated
    virtual ~AnalysisInputInterfaces(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAnalysisInputInterfaces : virtual public AOMInstance {
    DECLARE_META(AnalysisInputInterfaces, OMAnimatedAnalysisInputInterfaces)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AnalysisInputInterfaces.h
*********************************************************************/
