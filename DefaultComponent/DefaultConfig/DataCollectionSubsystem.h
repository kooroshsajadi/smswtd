/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataCollectionSubsystem
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\DataCollectionSubsystem.h
*********************************************************************/

#ifndef DataCollectionSubsystem_H
#define DataCollectionSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class DataCollectionSubsystem
class DataCollectionSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataCollectionSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataCollectionSubsystem(void);
    
    //## auto_generated
    virtual ~DataCollectionSubsystem(void);
    
    ////    Operations    ////
    
    //## operation collectData()
    virtual void collectData(void);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    long const getLastCollectionTime(void) const;
    
    //## auto_generated
    void setLastCollectionTime(const long p_lastCollectionTime);
    
    //## auto_generated
    int const getSamplingInterval(void) const;
    
    //## auto_generated
    void setSamplingInterval(const int p_samplingInterval);
    
    ////    Attributes    ////
    
    long lastCollectionTime;		//## attribute lastCollectionTime
    
    int samplingInterval;		//## attribute samplingInterval
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataCollectionSubsystem : virtual public AOMInstance {
    DECLARE_META(DataCollectionSubsystem, OMAnimatedDataCollectionSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataCollectionSubsystem.h
*********************************************************************/
