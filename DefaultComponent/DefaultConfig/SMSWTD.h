/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/

#ifndef SMSWTD_H
#define SMSWTD_H

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
//## class SMSWTD
#include "AnalysisInputInterfaces.h"
//## classInstance itsDataCollectionSubsystem
#include "DataCollectionSubsystem.h"
//## classInstance itsDataProcessingAndAnalyticsSubsystem
#include "DataProcessingAndAnalyticsSubsystem.h"
//## classInstance itsRiskAssessmentAndAlertingSubsystem
#include "RiskAssessmentAndAlertingSubsystem.h"
//## classInstance itsSecurityAndAccessControl
#include "SecurityAndAccessControl.h"
//## classInstance itsSystemInfrastructure
#include "SystemInfrastructure.h"
//## class port_Ocean_C
#include "SensorDataInterface.h"
//## class port_Satellite_C
#include "SatelliteDataInterface.h"
//## class port_Aircraft_C
#include "AircraftDataInterface.h"
//## link itsAircraftSensorNetwork
class AircraftSensorNetwork;

//## link itsAlertRecipients
class AlertRecipients;

//## link itsSatelliteSystem
class SatelliteSystem;

//## link itsUnderwaterSeismicSensorNetwork
class UnderwaterSeismicSensorNetwork;

//## package SMSTWD_ARCH

//## class SMSWTD
class SMSWTD : public OMReactive, public AnalysisInputInterfaces {
public :

//#[ ignore
    //## package SMSTWD_ARCH
    class port_Ocean_C : public SensorDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_Ocean_C(void);
        
        //## auto_generated
        virtual ~port_Ocean_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        SensorDataInterface* getItsSensorDataInterface(void);
        
        //## auto_generated
        SensorDataInterface* getOutBound(void);
        
        //## auto_generated
        virtual underwaterSensorData readUnderwaterSensorsData(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSensorDataInterface(SensorDataInterface* const p_SensorDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        SensorDataInterface* itsSensorDataInterface;		//## link itsSensorDataInterface
    };
    
    //## package SMSTWD_ARCH
    class port_Satellite_C : public SatelliteDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_Satellite_C(void);
        
        //## auto_generated
        virtual ~port_Satellite_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        SatelliteDataInterface* getItsSatelliteDataInterface(void);
        
        //## auto_generated
        SatelliteDataInterface* getOutBound(void);
        
        //## auto_generated
        virtual satelliteData readSatelliteData(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsSatelliteDataInterface(SatelliteDataInterface* const p_SatelliteDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        SatelliteDataInterface* itsSatelliteDataInterface;		//## link itsSatelliteDataInterface
    };
    
    //## package SMSTWD_ARCH
    class port_Aircraft_C : public AircraftDataInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_Aircraft_C(void);
        
        //## auto_generated
        virtual ~port_Aircraft_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        AircraftDataInterface* getItsAircraftDataInterface(void);
        
        //## auto_generated
        AircraftDataInterface* getOutBound(void);
        
        //## auto_generated
        virtual aircraftData readAircraftSensorsData(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsAircraftDataInterface(AircraftDataInterface* const p_AircraftDataInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        AircraftDataInterface* itsAircraftDataInterface;		//## link itsAircraftDataInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSMSWTD;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SMSWTD(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~SMSWTD(void);
    
    ////    Operations    ////
    
    //## operation getSensorsData()
    virtual void getSensorsData(void);
    
    //## operation run()
    virtual void run(void);

private :

    //## operation getAircraftData()
    virtual void getAircraftData(void);
    
    //## operation getUnderwaterData()
    virtual void getUnderwaterData(void);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    port_Ocean_C* getPort_Ocean(void) const;
    
    //## auto_generated
    port_Ocean_C* get_port_Ocean(void) const;
    
    //## auto_generated
    port_Satellite_C* getPort_Satellite(void) const;
    
    //## auto_generated
    port_Satellite_C* get_port_Satellite(void) const;
    
    //## auto_generated
    port_Aircraft_C* getPort_Aircraft(void) const;
    
    //## auto_generated
    port_Aircraft_C* get_port_Aircraft(void) const;
    
    //## auto_generated
    int const getAtmosphericPressure(void) const;
    
    //## auto_generated
    void setAtmosphericPressure(const int p_atmosphericPressure);
    
    //## auto_generated
    int const getHorizontalAcceleration(void) const;
    
    //## auto_generated
    void setHorizontalAcceleration(const int p_horizontalAcceleration);
    
    //## auto_generated
    int const getPrecipitationType(void) const;
    
    //## auto_generated
    void setPrecipitationType(const int p_precipitationType);
    
    //## auto_generated
    int const getTemperature(void) const;
    
    //## auto_generated
    void setTemperature(const int p_temperature);
    
    //## auto_generated
    underwaterSensorData const getUndewaterData(void) const;
    
    //## auto_generated
    void setUndewaterData(const underwaterSensorData p_undewaterData);
    
    //## auto_generated
    int const getVerticalAcceleration(void) const;
    
    //## auto_generated
    void setVerticalAcceleration(const int p_verticalAcceleration);
    
    //## auto_generated
    int const getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const int p_windSpeed);
    
    //## auto_generated
    const AircraftSensorNetwork* getItsAircraftSensorNetwork(void) const;
    
    //## auto_generated
    void setItsAircraftSensorNetwork(AircraftSensorNetwork* const p_AircraftSensorNetwork);
    
    //## auto_generated
    const AlertRecipients* getItsAlertRecipients(void) const;
    
    //## auto_generated
    void setItsAlertRecipients(AlertRecipients* const p_AlertRecipients);
    
    //## auto_generated
    const DataCollectionSubsystem* getItsDataCollectionSubsystem(void) const;
    
    //## auto_generated
    const DataProcessingAndAnalyticsSubsystem* getItsDataProcessingAndAnalyticsSubsystem(void) const;
    
    //## auto_generated
    const RiskAssessmentAndAlertingSubsystem* getItsRiskAssessmentAndAlertingSubsystem(void) const;
    
    //## auto_generated
    const SatelliteSystem* getItsSatelliteSystem(void) const;
    
    //## auto_generated
    void setItsSatelliteSystem(SatelliteSystem* const p_SatelliteSystem);
    
    //## auto_generated
    const SecurityAndAccessControl* getItsSecurityAndAccessControl(void) const;
    
    //## auto_generated
    const SystemInfrastructure* getItsSystemInfrastructure(void) const;
    
    //## auto_generated
    const UnderwaterSeismicSensorNetwork* getItsUnderwaterSeismicSensorNetwork(void) const;
    
    //## auto_generated
    void setItsUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* const p_UnderwaterSeismicSensorNetwork);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);

private :

    //## auto_generated
    bool const getIsRunning(void) const;
    
    //## auto_generated
    void setIsRunning(const bool p_isRunning);
    
    //## auto_generated
    char* const getSystemId(void) const;
    
    //## auto_generated
    void setSystemId(char* const p_systemId);
    
    ////    Attributes    ////
    
    int atmosphericPressure;		//## attribute atmosphericPressure
    
    int horizontalAcceleration;		//## attribute horizontalAcceleration
    
    bool isRunning;		//## attribute isRunning
    
    int precipitationType;		//## attribute precipitationType
    
    char* systemId;		//## attribute systemId
    
    int temperature;		//## attribute temperature
    
    underwaterSensorData undewaterData;		//## attribute undewaterData
    
    int verticalAcceleration;		//## attribute verticalAcceleration
    
    int windSpeed;		//## attribute windSpeed
    
    ////    Relations and components    ////
    
//#[ ignore
    port_Ocean_C port_Ocean;
    
    port_Satellite_C port_Satellite;
    
    port_Aircraft_C port_Aircraft;
//#]

    AircraftSensorNetwork* itsAircraftSensorNetwork;		//## link itsAircraftSensorNetwork
    
    AlertRecipients* itsAlertRecipients;		//## link itsAlertRecipients
    
    DataCollectionSubsystem itsDataCollectionSubsystem;		//## classInstance itsDataCollectionSubsystem
    
    DataProcessingAndAnalyticsSubsystem itsDataProcessingAndAnalyticsSubsystem;		//## classInstance itsDataProcessingAndAnalyticsSubsystem
    
    RiskAssessmentAndAlertingSubsystem itsRiskAssessmentAndAlertingSubsystem;		//## classInstance itsRiskAssessmentAndAlertingSubsystem
    
    SatelliteSystem* itsSatelliteSystem;		//## link itsSatelliteSystem
    
    SecurityAndAccessControl itsSecurityAndAccessControl;		//## classInstance itsSecurityAndAccessControl
    
    SystemInfrastructure itsSystemInfrastructure;		//## classInstance itsSystemInfrastructure
    
    UnderwaterSeismicSensorNetwork* itsUnderwaterSeismicSensorNetwork;		//## link itsUnderwaterSeismicSensorNetwork
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAircraftSensorNetwork(AircraftSensorNetwork* const p_AircraftSensorNetwork);
    
    //## auto_generated
    void _setItsAircraftSensorNetwork(AircraftSensorNetwork* const p_AircraftSensorNetwork);
    
    //## auto_generated
    void _clearItsAircraftSensorNetwork(void);
    
    //## auto_generated
    void __setItsAlertRecipients(AlertRecipients* const p_AlertRecipients);
    
    //## auto_generated
    void _setItsAlertRecipients(AlertRecipients* const p_AlertRecipients);
    
    //## auto_generated
    void _clearItsAlertRecipients(void);
    
    //## auto_generated
    void __setItsSatelliteSystem(SatelliteSystem* const p_SatelliteSystem);
    
    //## auto_generated
    void _setItsSatelliteSystem(SatelliteSystem* const p_SatelliteSystem);
    
    //## auto_generated
    void _clearItsSatelliteSystem(void);
    
    //## auto_generated
    void __setItsUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* const p_UnderwaterSeismicSensorNetwork);
    
    //## auto_generated
    void _setItsUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* const p_UnderwaterSeismicSensorNetwork);
    
    //## auto_generated
    void _clearItsUnderwaterSeismicSensorNetwork(void);
    
    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SMSWTDSensorsTimeEvent:
    //## statechart_method
    inline RhpBoolean SMSWTDSensorsTimeEvent_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum SMSWTD_Enum {
        OMNonState = 0,
        SMSWTDSensorsTimeEvent = 1,
        On = 2,
        Off = 3
    };
//#]

private :

//#[ ignore
    SMSWTD_Enum rootState_subState;
    
    SMSWTD_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : public OMAnimatedAnalysisInputInterfaces {
    DECLARE_REACTIVE_META(SMSWTD, OMAnimatedSMSWTD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SMSWTDSensorsTimeEvent_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SMSWTD::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SMSWTD::SMSWTDSensorsTimeEvent_IN(void) const {
    return rootState_subState == SMSWTDSensorsTimeEvent;
}

inline RhpBoolean SMSWTD::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean SMSWTD::Off_IN(void) const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSWTD.h
*********************************************************************/
