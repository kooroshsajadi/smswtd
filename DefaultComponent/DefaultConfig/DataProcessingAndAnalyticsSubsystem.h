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
#include "underwaterSensorData_underwaterData_ProxyFlowPropertyInterface.h"
//## package SMSTWD_ARCH

//## class DataProcessingAndAnalyticsSubsystem
class DataProcessingAndAnalyticsSubsystem : public OMReactive, public underwaterSensorData_underwaterData_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package SMSTWD_ARCH
    class port_Analytics_C : public underwaterSensorData_underwaterData_ProxyFlowPropertyInterface {
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
        underwaterSensorData_underwaterData_ProxyFlowPropertyInterface* getItsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setUnderwaterData(underwaterSensorData p_underwaterData);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface(underwaterSensorData_underwaterData_ProxyFlowPropertyInterface* const p_underwaterSensorData_underwaterData_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        underwaterSensorData_underwaterData_ProxyFlowPropertyInterface* itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface;		//## link itsUnderwaterSensorData_underwaterData_ProxyFlowPropertyInterface
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
    void setUnderwaterData(underwaterSensorData p_underwaterData);
//#]

private :

    //## operation calculateGroundAcceleration()
    virtual void calculateGroundAcceleration(void);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    port_Analytics_C* getPort_Analytics(void) const;
    
    //## auto_generated
    port_Analytics_C* get_port_Analytics(void) const;
    
    //## auto_generated
    int const getAtmosphericPressure(void) const;
    
    //## auto_generated
    void setAtmosphericPressure(const int p_atmosphericPressure);
    
    //## auto_generated
    int const getGroundAcceleration(void) const;
    
    //## auto_generated
    void setGroundAcceleration(const int p_groundAcceleration);
    
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
    underwaterSensorData const getUnderwaterData(void) const;
    
    //## auto_generated
    int const getVerticalAcceleration(void) const;
    
    //## auto_generated
    void setVerticalAcceleration(const int p_verticalAcceleration);
    
    //## auto_generated
    int const getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const int p_windSpeed);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);

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
    
    int atmosphericPressure;		//## attribute atmosphericPressure
    
    int groundAcceleration;		//## attribute groundAcceleration
    
    int horizontalAcceleration;		//## attribute horizontalAcceleration
    
    char* modelVersion;		//## attribute modelVersion
    
    int precipitationType;		//## attribute precipitationType
    
    int temperature;		//## attribute temperature
    
    underwaterSensorData underwaterData;		//## attribute underwaterData
    
    int verticalAcceleration;		//## attribute verticalAcceleration
    
    int windSpeed;		//## attribute windSpeed
    
    int windowSize;		//## attribute windowSize
    
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
    
    // Idle:
    //## statechart_method
    inline RhpBoolean Idle_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum DataProcessingAndAnalyticsSubsystem_Enum {
        OMNonState = 0,
        Processing = 1,
        Idle = 2
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
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean DataProcessingAndAnalyticsSubsystem::rootState_IN(void) const {
    return true;
}

inline RhpBoolean DataProcessingAndAnalyticsSubsystem::Processing_IN(void) const {
    return rootState_subState == Processing;
}

inline RhpBoolean DataProcessingAndAnalyticsSubsystem::Idle_IN(void) const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataProcessingAndAnalyticsSubsystem.h
*********************************************************************/
