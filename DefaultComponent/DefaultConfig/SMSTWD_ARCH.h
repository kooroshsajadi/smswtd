/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSTWD_ARCH
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSTWD_ARCH.h
*********************************************************************/

#ifndef SMSTWD_ARCH_H
#define SMSTWD_ARCH_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class Administrator;

//## auto_generated
class AircraftSensorNetwork;

//## auto_generated
class AlertRecipients;

//## auto_generated
class AnalysisInputInterface;

//## auto_generated
class AnalysisInputInterfaces;

//## auto_generated
class DataCollectionSubsystem;

//## auto_generated
class DataProcessingAndAnalyticsSubsystem;

//## auto_generated
class HumanMachineInterface;

//## auto_generated
class RiskAssessmentAndAlertingSubsystem;

//## classInstance itsSMSWTD
class SMSWTD;

//## auto_generated
class SatelliteSystem;

//## auto_generated
class SecurityAndAccessControl;

//## auto_generated
class SensorDataInterface;

//## auto_generated
class SystemInfrastructure;

//## classInstance itsUnderwaterSeismicSensorNetwork
class UnderwaterSeismicSensorNetwork;

//## package SMSTWD_ARCH


//## type underwaterSensorData
struct underwaterSensorData {
    int horizontalAcceleration;		//## attribute horizontalAcceleration
    int verticalAcceleration;		//## attribute verticalAcceleration
};

//## classInstance itsSMSWTD
extern SMSWTD itsSMSWTD;

//## classInstance itsUnderwaterSeismicSensorNetwork
extern UnderwaterSeismicSensorNetwork itsUnderwaterSeismicSensorNetwork;

//## auto_generated
void SMSTWD_ARCH_initRelations(void);

//## auto_generated
bool SMSTWD_ARCH_startBehavior(void);

//#[ ignore
class SMSTWD_ARCH_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SMSTWD_ARCH_OMInitializer(void);
    
    //## auto_generated
    ~SMSTWD_ARCH_OMInitializer(void);
};
//#]

//## event evSMSWTDOn()
class evSMSWTDOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSMSWTDOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSMSWTDOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSMSWTDOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evSMSWTDOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evSMSWTDOn_SMSTWD_ARCH_id;
//#]

//## event eventSMSWTDOff()
class eventSMSWTDOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedeventSMSWTDOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    eventSMSWTDOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedeventSMSWTDOff : virtual public AOMEvent {
    DECLARE_META_EVENT(eventSMSWTDOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID eventSMSWTDOff_SMSTWD_ARCH_id;
//#]

//## event startSensing()
class startSensing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstartSensing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    startSensing(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstartSensing : virtual public AOMEvent {
    DECLARE_META_EVENT(startSensing)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID startSensing_SMSTWD_ARCH_id;
//#]

//## event stopSensing()
class stopSensing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstopSensing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    stopSensing(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstopSensing : virtual public AOMEvent {
    DECLARE_META_EVENT(stopSensing)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID stopSensing_SMSTWD_ARCH_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSTWD_ARCH.h
*********************************************************************/
