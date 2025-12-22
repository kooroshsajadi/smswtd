/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderwaterOceanographicSensorNetwork
//!	Generated Date	: Thu, 18, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderwaterOceanographicSensorNetwork.h
*********************************************************************/

#ifndef UnderwaterOceanographicSensorNetwork_H
#define UnderwaterOceanographicSensorNetwork_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## link itsSMSWTD
class SMSWTD;

//## package SMSTWD_ARCH

//## class UnderwaterOceanographicSensorNetwork
class UnderwaterOceanographicSensorNetwork {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUnderwaterOceanographicSensorNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UnderwaterOceanographicSensorNetwork(void);
    
    //## auto_generated
    ~UnderwaterOceanographicSensorNetwork(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUnderwaterOceanographicSensorNetwork : virtual public AOMInstance {
    DECLARE_META(UnderwaterOceanographicSensorNetwork, OMAnimatedUnderwaterOceanographicSensorNetwork)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderwaterOceanographicSensorNetwork.h
*********************************************************************/
