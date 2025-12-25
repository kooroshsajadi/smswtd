/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UnderwaterSeismicSensorNetwork
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSeismicSensorNetwork.h
*********************************************************************/

#ifndef UnderwaterSeismicSensorNetwork_H
#define UnderwaterSeismicSensorNetwork_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## class UnderwaterSeismicSensorNetwork
#include "SensorDataInterface.h"
//## link itsSMSWTD
class SMSWTD;

//## package SMSTWD_ARCH

//## class UnderwaterSeismicSensorNetwork
class UnderwaterSeismicSensorNetwork : public SensorDataInterface {
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
        void connectUnderwaterSeismicSensorNetwork(UnderwaterSeismicSensorNetwork* part);
        
        //## auto_generated
        SensorDataInterface* getItsSensorDataInterface(void);
        
        //## auto_generated
        virtual underwaterSensorData returnUnderwaterSensorsData(void);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
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
    friend class OMAnimatedUnderwaterSeismicSensorNetwork;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit UnderwaterSeismicSensorNetwork(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~UnderwaterSeismicSensorNetwork(void);
    
    ////    Operations    ////
    
    //## operation returnUnderwaterSensorsData()
    virtual underwaterSensorData returnUnderwaterSensorsData(void);

private :

    //## operation getHorizontalAcceleration()
    virtual void getHorizontalAcceleration(void);
    
    //## operation getVerticalAcceleration()
    virtual void getVerticalAcceleration(void);
    
    //## operation readSensorsData()
    virtual void readSensorsData(void);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    port_Ocean_C* getPort_Ocean(void) const;
    
    //## auto_generated
    port_Ocean_C* get_port_Ocean(void) const;
    
    //## auto_generated
    void setHorizontalAcceleration(const int p_horizontalAcceleration);
    
    //## auto_generated
    void setVerticalAcceleration(const int p_verticalAcceleration);
    
    //## auto_generated
    const SMSWTD* getItsSMSWTD(void) const;
    
    //## auto_generated
    void setItsSMSWTD(SMSWTD* const p_SMSWTD);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int horizontalAcceleration;		//## attribute horizontalAcceleration
    
    int verticalAcceleration;		//## attribute verticalAcceleration
    
    ////    Relations and components    ////
    
//#[ ignore
    port_Ocean_C port_Ocean;
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

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum UnderwaterSeismicSensorNetwork_Enum {
        OMNonState = 0,
        Sampling = 1,
        Idle = 2
    };
//#]

private :

//#[ ignore
    UnderwaterSeismicSensorNetwork_Enum rootState_subState;
    
    UnderwaterSeismicSensorNetwork_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUnderwaterSeismicSensorNetwork : public OMAnimatedSensorDataInterface {
    DECLARE_REACTIVE_META(UnderwaterSeismicSensorNetwork, OMAnimatedUnderwaterSeismicSensorNetwork)
    
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
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean UnderwaterSeismicSensorNetwork::rootState_IN(void) const {
    return true;
}

inline RhpBoolean UnderwaterSeismicSensorNetwork::Sampling_IN(void) const {
    return rootState_subState == Sampling;
}

inline RhpBoolean UnderwaterSeismicSensorNetwork::Idle_IN(void) const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UnderwaterSeismicSensorNetwork.h
*********************************************************************/
