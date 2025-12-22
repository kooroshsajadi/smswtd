/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AnalysisInputInterface
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AnalysisInputInterface.h
*********************************************************************/

#ifndef AnalysisInputInterface_H
#define AnalysisInputInterface_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class AnalysisInputInterface
class AnalysisInputInterface {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAnalysisInputInterface;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AnalysisInputInterface(void);
    
    //## auto_generated
    ~AnalysisInputInterface(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAnalysisInputInterface : virtual public AOMInstance {
    DECLARE_META(AnalysisInputInterface, OMAnimatedAnalysisInputInterface)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AnalysisInputInterface.h
*********************************************************************/
