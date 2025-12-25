/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AircraftSensorNetwork
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\AircraftSensorNetwork.h
*********************************************************************/

#ifndef AircraftSensorNetwork_H
#define AircraftSensorNetwork_H

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
//## class AircraftSensorNetwork
#include "AircraftDataInterface.h"
//## link itsSMSWTD
class SMSWTD;

//## package SMSTWD_ARCH

//## class AircraftSensorNetwork
class AircraftSensorNetwork : public OMReactive, public AircraftDataInterface {
public :

//#[ ignore
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
        void connectAircraftSensorNetwork(AircraftSensorNetwork* part);
        
        //## auto_generated
        AircraftDataInterface* getItsAircraftDataInterface(void);
        
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
    friend class OMAnimatedAircraftSensorNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit AircraftSensorNetwork(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~AircraftSensorNetwork(void);
    
    ////    Operations    ////
    
    //## operation readAircraftSensorsData()
    virtual aircraftData readAircraftSensorsData(void);

private :

    //## operation readSensorsData()
    virtual aircraftData readSensorsData(void);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    port_Aircraft_C* getPort_Aircraft(void) const;
    
    //## auto_generated
    port_Aircraft_C* get_port_Aircraft(void) const;
    
    //## auto_generated
    void setAtmosphericPressure(const int p_atmosphericPressure);
    
    //## auto_generated
    void setPrecipitationType(const int p_precipitationType);
    
    //## auto_generated
    void setTemperature(const int p_temperature);
    
    //## auto_generated
    void setWindSpeed(const int p_windSpeed);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);

private :

    //## auto_generated
    int const getAtmosphericPressure(void) const;
    
    //## auto_generated
    int const getPrecipitationType(void) const;
    
    //## auto_generated
    int const getTemperature(void) const;
    
    //## auto_generated
    int const getWindSpeed(void) const;
    
    ////    Attributes    ////
    
    int atmosphericPressure;		//## attribute atmosphericPressure
    
    int precipitationType;		//## attribute precipitationType
    
    int temperature;		//## attribute temperature
    
    int windSpeed;		//## attribute windSpeed
    
    ////    Relations and components    ////
    
//#[ ignore
    port_Aircraft_C port_Aircraft;
//#]

    SMSWTD* itsSMSWTD;		//## link itsSMSWTD
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    void _clearItsSMSWTD(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Sampling:
    //## statechart_method
    inline RhpBoolean Sampling_IN(void) const;
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;
    
    // accepttimeevent_2:
    //## statechart_method
    inline RhpBoolean accepttimeevent_2_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum AircraftSensorNetwork_Enum {
        OMNonState = 0,
        Sampling = 1,
        Idle = 2,
        accepttimeevent_2 = 3
    };
//#]

private :

//#[ ignore
    AircraftSensorNetwork_Enum rootState_subState;
    
    AircraftSensorNetwork_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAircraftSensorNetwork : public OMAnimatedAircraftDataInterface {
    DECLARE_REACTIVE_META(AircraftSensorNetwork, OMAnimatedAircraftSensorNetwork)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Sampling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_2_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean AircraftSensorNetwork::rootState_IN(void) const {
    return true;
}

inline RhpBoolean AircraftSensorNetwork::Sampling_IN(void) const {
    return rootState_subState == Sampling;
}

inline RhpBoolean AircraftSensorNetwork::Idle_IN(void) const {
    return rootState_subState == Idle;
}

inline RhpBoolean AircraftSensorNetwork::accepttimeevent_2_IN(void) const {
    return rootState_subState == accepttimeevent_2;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AircraftSensorNetwork.h
*********************************************************************/
