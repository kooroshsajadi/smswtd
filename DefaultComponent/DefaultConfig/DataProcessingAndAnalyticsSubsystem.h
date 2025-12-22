/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingAndAnalyticsSubsystem
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.h
*********************************************************************/

#ifndef DataProcessingAndAnalyticsSubsystem_H
#define DataProcessingAndAnalyticsSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class DataProcessingAndAnalyticsSubsystem
class DataProcessingAndAnalyticsSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessingAndAnalyticsSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataProcessingAndAnalyticsSubsystem(void);
    
    //## auto_generated
    virtual ~DataProcessingAndAnalyticsSubsystem(void);
    
    ////    Operations    ////
    
    //## operation processData()
    virtual void processData(void);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    char* const getModelVersion(void) const;
    
    //## auto_generated
    void setModelVersion(char* const p_modelVersion);
    
    //## auto_generated
    int const getWindowSize(void) const;
    
    //## auto_generated
    void setWindowSize(const int p_windowSize);
    
    ////    Attributes    ////
    
    char* modelVersion;		//## attribute modelVersion
    
    int windowSize;		//## attribute windowSize
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataProcessingAndAnalyticsSubsystem : virtual public AOMInstance {
    DECLARE_META(DataProcessingAndAnalyticsSubsystem, OMAnimatedDataProcessingAndAnalyticsSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.h
*********************************************************************/
