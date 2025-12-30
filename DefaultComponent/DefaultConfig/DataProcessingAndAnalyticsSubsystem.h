/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataProcessingAndAnalyticsSubsystem
//!	Generated Date	: Sat, 27, Dec 2025  
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
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class DataProcessingAndAnalyticsSubsystem
#include "aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface.h"
//## class DataProcessingAndAnalyticsSubsystem
#include "underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface.h"
//## package SMSTWD_ARCH

//## class DataProcessingAndAnalyticsSubsystem
class DataProcessingAndAnalyticsSubsystem : public OMReactive, public underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface, public aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSTWD_ARCH
    class port_Analytics_C : public underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface, public aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_Analytics_C(void);
        
        //## auto_generated
        virtual ~port_Analytics_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectDataProcessingAndAnalyticsSubsystem(DataProcessingAndAnalyticsSubsystem* part);
        
        //## auto_generated
        aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface* getItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface* getItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setAircraftsDataFlow(aircraftData p_aircraftsDataFlow);
        
        //## auto_generated
        virtual void setUnderwaterDataFlow(underwaterSensorData p_underwaterDataFlow);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface* const p_aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface* const p_underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        aircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface* itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface;		//## link itsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface
        
        underwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface* itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface;		//## link itsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataProcessingAndAnalyticsSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit DataProcessingAndAnalyticsSubsystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~DataProcessingAndAnalyticsSubsystem(void);
    
    ////    Operations    ////
    
    //## operation processData()
    virtual void processData(void);
    
//#[ ignore
    void setAircraftsDataFlow(aircraftData p_aircraftsDataFlow);
    
    void setUnderwaterDataFlow(underwaterSensorData p_underwaterDataFlow);
//#]

private :

    //## operation calculateGroundAcceleration()
    virtual void calculateGroundAcceleration(void);
    
    //## operation calculateWeatherSeverityScore()
    virtual void calculateWeatherSeverityScore(void);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    port_Analytics_C* getPort_Analytics(void) const;
    
    //## auto_generated
    port_Analytics_C* get_port_Analytics(void) const;
    
    //## auto_generated
    aircraftData const getAircraftsDataFlow(void) const;
    
    //## auto_generated
    void setGroundAcceleration(const int p_groundAcceleration);
    
    //## auto_generated
    underwaterSensorData const getUnderwaterDataFlow(void) const;
    
    //## auto_generated
    void setWeatherSeverityScore(const int p_weatherSeverityScore);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);

private :

    //## auto_generated
    int const getGroundAcceleration(void) const;
    
    //## auto_generated
    int const getWeatherSeverityScore(void) const;
    
    ////    Attributes    ////
    
    aircraftData aircraftsDataFlow;		//## attribute aircraftsDataFlow
    
    int groundAcceleration;		//## attribute groundAcceleration
    
    underwaterSensorData underwaterDataFlow;		//## attribute underwaterDataFlow
    
    int weatherSeverityScore;		//## attribute weatherSeverityScore
    
    ////    Relations and components    ////
    
//#[ ignore
    port_Analytics_C port_Analytics;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Processing:
    //## statechart_method
    inline RhpBoolean Processing_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum DataProcessingAndAnalyticsSubsystem_Enum {
        OMNonState = 0,
        Processing = 1
    };
//#]

private :

//#[ ignore
    DataProcessingAndAnalyticsSubsystem_Enum rootState_subState;
    
    DataProcessingAndAnalyticsSubsystem_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataProcessingAndAnalyticsSubsystem : virtual public AOMInstance {
    DECLARE_REACTIVE_META(DataProcessingAndAnalyticsSubsystem, OMAnimatedDataProcessingAndAnalyticsSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Processing_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean DataProcessingAndAnalyticsSubsystem::rootState_IN(void) const {
    return true;
}

inline RhpBoolean DataProcessingAndAnalyticsSubsystem::Processing_IN(void) const {
    return rootState_subState == Processing;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.h
*********************************************************************/
