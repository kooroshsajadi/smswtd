/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSystem
//!	Generated Date	: Thu, 25, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystem.h
*********************************************************************/

#ifndef SatelliteSystem_H
#define SatelliteSystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## class SatelliteSystem
#include "SatelliteDataInterface.h"
//## link itsSMSWTD
class SMSWTD;

//## package SMSTWD_ARCH

//## class SatelliteSystem
class SatelliteSystem : public SatelliteDataInterface {
public :

//#[ ignore
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
        void connectSatelliteSystem(SatelliteSystem* part);
        
        //## auto_generated
        SatelliteDataInterface* getItsSatelliteDataInterface(void);
        
        //## auto_generated
        virtual satelliteData readSatelliteData(void);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event, const IOxfEventGenerationParams& params);
        
        //## auto_generated
        virtual bool send(IOxfEvent* event);
        
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
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSatelliteSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit SatelliteSystem(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~SatelliteSystem(void);
    
    ////    Operations    ////
    
    //## operation readSatelliteData()
    virtual satelliteData readSatelliteData(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_Satellite_C* getPort_Satellite(void) const;
    
    //## auto_generated
    port_Satellite_C* get_port_Satellite(void) const;
    
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

private :

    //## auto_generated
    int const getCloudTopTemperature(void) const;
    
    //## auto_generated
    void setCloudTopTemperature(const int p_cloudTopTemperature);
    
    //## auto_generated
    int const getPrecipitationRate(void) const;
    
    //## auto_generated
    void setPrecipitationRate(const int p_precipitationRate);
    
    //## auto_generated
    double const getStormDiameter(void) const;
    
    //## auto_generated
    void setStormDiameter(const double p_stormDiameter);
    
    //## auto_generated
    double const getWindSpeed(void) const;
    
    //## auto_generated
    void setWindSpeed(const double p_windSpeed);
    
    ////    Attributes    ////
    
    int cloudTopTemperature;		//## attribute cloudTopTemperature
    
    int precipitationRate;		//## attribute precipitationRate
    
    double stormDiameter;		//## attribute stormDiameter
    
    double windSpeed;		//## attribute windSpeed
    
    ////    Relations and components    ////
    
//#[ ignore
    port_Satellite_C port_Satellite;
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
    
    // Sensing:
    //## statechart_method
    inline RhpBoolean Sensing_IN(void) const;
    
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
    enum SatelliteSystem_Enum {
        OMNonState = 0,
        Sensing = 1,
        Idle = 2
    };
//#]

private :

//#[ ignore
    SatelliteSystem_Enum rootState_subState;
    
    SatelliteSystem_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSatelliteSystem : public OMAnimatedSatelliteDataInterface {
    DECLARE_REACTIVE_META(SatelliteSystem, OMAnimatedSatelliteSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Sensing_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Idle_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean SatelliteSystem::rootState_IN(void) const {
    return true;
}

inline RhpBoolean SatelliteSystem::Sensing_IN(void) const {
    return rootState_subState == Sensing;
}

inline RhpBoolean SatelliteSystem::Idle_IN(void) const {
    return rootState_subState == Idle;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystem.h
*********************************************************************/
