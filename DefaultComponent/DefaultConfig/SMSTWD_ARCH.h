/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSTWD_ARCH
//!	Generated Date	: Sun, 28, Dec 2025  
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
class AircraftDataInterface;

//## classInstance itsAircraftSensorNetwork
class AircraftSensorNetwork;

//## auto_generated
class AlertRecipients;

//## auto_generated
class AnalyticsInterface;

//## auto_generated
class DataCollectionSubsystem;

//## classInstance itsDataProcessingAndAnalyticsSubsystem
class DataProcessingAndAnalyticsSubsystem;

//## auto_generated
class RiskAssessmentAndAlertingSubsystem;

//## classInstance itsSMSWTD
class SMSWTD;

//## auto_generated
class SatelliteDataInterface;

//## classInstance itsSatelliteSystem
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

//## type aircraftData
struct aircraftData {
    double atmosphericPressure;		//## attribute atmosphericPressure
    int precipitationType;		//## attribute precipitationType
    int temperature;		//## attribute temperature
    double windSpeed;		//## attribute windSpeed
};

//## type satelliteData
struct satelliteData {
    int cloudTopTemperature;		//## attribute cloudTopTemperature
    int precipitationRate;		//## attribute precipitationRate
    double stormDiameter;		//## attribute stormDiameter
    double windSpeed;		//## attribute windSpeed
};

//## classInstance itsAircraftSensorNetwork
extern AircraftSensorNetwork itsAircraftSensorNetwork;

//## classInstance itsDataProcessingAndAnalyticsSubsystem
extern DataProcessingAndAnalyticsSubsystem itsDataProcessingAndAnalyticsSubsystem;

//## classInstance itsDataProcessingAndAnalyticsSubsystem_1
extern DataProcessingAndAnalyticsSubsystem itsDataProcessingAndAnalyticsSubsystem_1;

//## classInstance itsSMSWTD
extern SMSWTD itsSMSWTD;

//## classInstance itsSMSWTD_1
extern SMSWTD itsSMSWTD_1;

//## classInstance itsSatelliteSystem
extern SatelliteSystem itsSatelliteSystem;

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

//## event SMSTD_On()
class SMSTD_On : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSTD_On;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SMSTD_On(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSTD_On : virtual public AOMEvent {
    DECLARE_META_EVENT(SMSTD_On)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID SMSTD_On_SMSTWD_ARCH_id;
//#]

//## event turn_on()
class turn_on : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedturn_on;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    turn_on(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedturn_on : virtual public AOMEvent {
    DECLARE_META_EVENT(turn_on)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID turn_on_SMSTWD_ARCH_id;
//#]

//## event start_sensing()
class start_sensing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstart_sensing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    start_sensing(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstart_sensing : virtual public AOMEvent {
    DECLARE_META_EVENT(start_sensing)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID start_sensing_SMSTWD_ARCH_id;
//#]

//## event redoSensing()
class redoSensing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedredoSensing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    redoSensing(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedredoSensing : virtual public AOMEvent {
    DECLARE_META_EVENT(redoSensing)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID redoSensing_SMSTWD_ARCH_id;
//#]

//## event startProcessing()
class startProcessing : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstartProcessing;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    startProcessing(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstartProcessing : virtual public AOMEvent {
    DECLARE_META_EVENT(startProcessing)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID startProcessing_SMSTWD_ARCH_id;
//#]

//## event processData()
class processData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedprocessData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    processData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedprocessData : virtual public AOMEvent {
    DECLARE_META_EVENT(processData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID processData_SMSTWD_ARCH_id;
//#]

//## event chUnderwaterData()
class chUnderwaterData : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedchUnderwaterData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    chUnderwaterData(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedchUnderwaterData : virtual public AOMEvent {
    DECLARE_META_EVENT(chUnderwaterData)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID chUnderwaterData_SMSTWD_ARCH_id;
//#]

//## event chUnderwaterDataFlow()
class chUnderwaterDataFlow : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedchUnderwaterDataFlow;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    chUnderwaterDataFlow(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedchUnderwaterDataFlow : virtual public AOMEvent {
    DECLARE_META_EVENT(chUnderwaterDataFlow)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID chUnderwaterDataFlow_SMSTWD_ARCH_id;
//#]

//## event chAircraftsDataFlow()
class chAircraftsDataFlow : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedchAircraftsDataFlow;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    chAircraftsDataFlow(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedchAircraftsDataFlow : virtual public AOMEvent {
    DECLARE_META_EVENT(chAircraftsDataFlow)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID chAircraftsDataFlow_SMSTWD_ARCH_id;
//#]

//## event turnOn()
class turnOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedturnOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    turnOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedturnOn : virtual public AOMEvent {
    DECLARE_META_EVENT(turnOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID turnOn_SMSTWD_ARCH_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSTWD_ARCH.h
*********************************************************************/
