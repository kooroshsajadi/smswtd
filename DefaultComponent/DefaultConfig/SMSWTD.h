/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSWTD
//!	Generated Date	: Mon, 22, Dec 2025  
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
class SMSWTD : public OMReactive {
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
        virtual underwaterSensorData readUnderwaterSensorData(void);
        
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
    
    //## operation getSensorData()
    virtual underwaterSensorData getSensorData(void);
    
    //## operation run()
    virtual void run(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_Ocean_C* getPort_Ocean(void) const;
    
    //## auto_generated
    port_Ocean_C* get_port_Ocean(void) const;
    
    //## auto_generated
    int const getHorizontalAcceleration(void) const;
    
    //## auto_generated
    void setHorizontalAcceleration(const int p_horizontalAcceleration);
    
    //## auto_generated
    int const getVerticalAcceleration(void) const;
    
    //## auto_generated
    void setVerticalAcceleration(const int p_verticalAcceleration);
    
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
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);

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
    
    int horizontalAcceleration;		//## attribute horizontalAcceleration
    
    bool isRunning;		//## attribute isRunning
    
    char* systemId;		//## attribute systemId
    
    int verticalAcceleration;		//## attribute verticalAcceleration
    
    ////    Relations and components    ////
    
//#[ ignore
    port_Ocean_C port_Ocean;
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
        On = 1,
        Off = 2
    };
//#]

private :

//#[ ignore
    SMSWTD_Enum rootState_subState;
    
    SMSWTD_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSMSWTD : virtual public AOMInstance {
    DECLARE_REACTIVE_META(SMSWTD, OMAnimatedSMSWTD)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
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
