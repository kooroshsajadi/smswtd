/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SatelliteSystem
//!	Generated Date	: Tue, 23, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "SatelliteSystem.h"
//## link itsSMSWTD
#include "SMSWTD.h"
//#[ ignore
#define SMSTWD_ARCH_SatelliteSystem_SatelliteSystem_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_SatelliteSystem_readSatelliteData_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class SatelliteSystem
//#[ ignore
SatelliteSystem::port_Satellite_C::port_Satellite_C(void) : SatelliteDataInterface(), _p_(0), itsSatelliteDataInterface(NULL) {
}

SatelliteSystem::port_Satellite_C::~port_Satellite_C(void) {
    cleanUpRelations();
}

void SatelliteSystem::port_Satellite_C::connectSatelliteSystem(SatelliteSystem* part) {
    setItsSatelliteDataInterface(part);
    
}

SatelliteDataInterface* SatelliteSystem::port_Satellite_C::getItsSatelliteDataInterface(void) {
    return this;
}

satelliteData SatelliteSystem::port_Satellite_C::readSatelliteData(void) {
    satelliteData res;
    if (itsSatelliteDataInterface != NULL) {
        res = itsSatelliteDataInterface->readSatelliteData();
    }
    return res;
}

void SatelliteSystem::port_Satellite_C::setItsSatelliteDataInterface(SatelliteDataInterface* const p_SatelliteDataInterface) {
    itsSatelliteDataInterface = p_SatelliteDataInterface;
}

void SatelliteSystem::port_Satellite_C::cleanUpRelations(void) {
    if(itsSatelliteDataInterface != NULL)
        {
            itsSatelliteDataInterface = NULL;
        }
}
//#]

SatelliteSystem::SatelliteSystem(IOxfActive* const theActiveContext) : OMReactive(), SatelliteDataInterface(), itsSMSWTD(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(SatelliteSystem, SatelliteSystem(), 0, SMSTWD_ARCH_SatelliteSystem_SatelliteSystem_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

SatelliteSystem::~SatelliteSystem(void) {
    NOTIFY_DESTRUCTOR(~SatelliteSystem, false);
    cleanUpRelations();
}

satelliteData SatelliteSystem::readSatelliteData(void) {
    NOTIFY_OPERATION(readSatelliteData, readSatelliteData(), 0, SMSTWD_ARCH_SatelliteSystem_readSatelliteData_SERIALIZE);
    //#[ operation readSatelliteData()
    satelliteData newData;
    
    // Cloud top temperature: -83°C to -40°C (190K to 233K)
    // Severe storms have colder tops due to high altitude
    newData.cloudTopTemperature = -(std::rand() % 44 + 40); // -83 to -40°C
    
    // Precipitation rate: 0 to 50 mm/hour
    // Typical range from light rain to heavy thunderstorm
    newData.precipitationRate = std::rand() % 51; // 0-50 mm/hour
    
    // Storm diameter: 50 to 500 km
    // Covers tropical storms to large hurricane systems
    newData.stormDiameter = std::rand() % 451 + 50; // 50-500 km
    
    // Wind speed: 20 to 180 mph
    // From tropical storm threshold (39 mph) to major hurricane
    newData.windSpeed = std::rand() % 161 + 20; // 20-180 mph
    
    this->cloudTopTemperature = newData.cloudTopTemperature;
    this->precipitationRate = newData.precipitationRate;
    this->stormDiameter = newData.stormDiameter;
    this->windSpeed = newData.windSpeed;
    
    return newData;
    //#]
}

SatelliteSystem::port_Satellite_C* SatelliteSystem::getPort_Satellite(void) const {
    return (SatelliteSystem::port_Satellite_C*) &port_Satellite;
}

SatelliteSystem::port_Satellite_C* SatelliteSystem::get_port_Satellite(void) const {
    return (SatelliteSystem::port_Satellite_C*) &port_Satellite;
}

const SMSWTD* SatelliteSystem::getItsSMSWTD(void) const {
    return itsSMSWTD;
}

void SatelliteSystem::setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(p_SMSWTD != NULL)
        {
            p_SMSWTD->_setItsSatelliteSystem(this);
        }
    _setItsSMSWTD(p_SMSWTD);
}

bool SatelliteSystem::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void SatelliteSystem::initRelations(void) {
    if (get_port_Satellite() != NULL) {
        get_port_Satellite()->connectSatelliteSystem(this);
    }
}

void SatelliteSystem::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void SatelliteSystem::cleanUpRelations(void) {
    if(itsSMSWTD != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
            const SatelliteSystem* p_SatelliteSystem = itsSMSWTD->getItsSatelliteSystem();
            if(p_SatelliteSystem != NULL)
                {
                    itsSMSWTD->__setItsSatelliteSystem(NULL);
                }
            itsSMSWTD = NULL;
        }
}

int const SatelliteSystem::getCloudTopTemperature(void) const {
    return cloudTopTemperature;
}

void SatelliteSystem::setCloudTopTemperature(const int p_cloudTopTemperature) {
    cloudTopTemperature = p_cloudTopTemperature;
}

int const SatelliteSystem::getPrecipitationRate(void) const {
    return precipitationRate;
}

void SatelliteSystem::setPrecipitationRate(const int p_precipitationRate) {
    precipitationRate = p_precipitationRate;
}

double const SatelliteSystem::getStormDiameter(void) const {
    return stormDiameter;
}

void SatelliteSystem::setStormDiameter(const double p_stormDiameter) {
    stormDiameter = p_stormDiameter;
}

double const SatelliteSystem::getWindSpeed(void) const {
    return windSpeed;
}

void SatelliteSystem::setWindSpeed(const double p_windSpeed) {
    windSpeed = p_windSpeed;
}

void SatelliteSystem::__setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    itsSMSWTD = p_SMSWTD;
    if(p_SMSWTD != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSMSWTD", p_SMSWTD, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSMSWTD");
        }
}

void SatelliteSystem::_setItsSMSWTD(SMSWTD* const p_SMSWTD) {
    if(itsSMSWTD != NULL)
        {
            itsSMSWTD->__setItsSatelliteSystem(NULL);
        }
    __setItsSMSWTD(p_SMSWTD);
}

void SatelliteSystem::_clearItsSMSWTD(void) {
    NOTIFY_RELATION_CLEARED("itsSMSWTD");
    itsSMSWTD = NULL;
}

void SatelliteSystem::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("2");
        NOTIFY_STATE_ENTERED("ROOT.Idle");
        rootState_subState = Idle;
        rootState_active = Idle;
        //#[ state Idle.(Entry) 
        std::cout << "Satellite sensing is off!" << std::endl;
        //#]
        NOTIFY_TRANSITION_TERMINATED("2");
    }
}

IOxfReactive::TakeEventStatus SatelliteSystem::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Idle
        case Idle:
        {
            if(IS_EVENT_TYPE_OF(startSensing_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Idle");
                    //#[ transition 0 
                    std::cout << "Initiating satellite sensing..." << std::endl;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Sensing");
                    rootState_subState = Sensing;
                    rootState_active = Sensing;
                    //#[ state Sensing.(Entry) 
                    std::cout << "Satellite sensing is on!" << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Sensing
        case Sensing:
        {
            if(IS_EVENT_TYPE_OF(stopSensing_SMSTWD_ARCH_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Sensing");
                    //#[ transition 1 
                    std::cout << "Stopping satellite sensing..." << std::endl;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Idle");
                    rootState_subState = Idle;
                    rootState_active = Idle;
                    //#[ state Idle.(Entry) 
                    std::cout << "Satellite sensing is off!" << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSatelliteSystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("windSpeed", x2String(myReal->windSpeed));
    aomsAttributes->addAttribute("stormDiameter", x2String(myReal->stormDiameter));
    aomsAttributes->addAttribute("precipitationRate", x2String(myReal->precipitationRate));
    aomsAttributes->addAttribute("cloudTopTemperature", x2String(myReal->cloudTopTemperature));
    OMAnimatedSatelliteDataInterface::serializeAttributes(aomsAttributes);
}

void OMAnimatedSatelliteSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSMSWTD", false, true);
    if(myReal->itsSMSWTD)
        {
            aomsRelations->ADD_ITEM(myReal->itsSMSWTD);
        }
    OMAnimatedSatelliteDataInterface::serializeRelations(aomsRelations);
}

void OMAnimatedSatelliteSystem::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case SatelliteSystem::Idle:
        {
            Idle_serializeStates(aomsState);
        }
        break;
        case SatelliteSystem::Sensing:
        {
            Sensing_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSatelliteSystem::Sensing_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Sensing");
}

void OMAnimatedSatelliteSystem::Idle_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Idle");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(SatelliteSystem, SMSTWD_ARCH, false, SatelliteDataInterface, OMAnimatedSatelliteDataInterface, OMAnimatedSatelliteSystem)

OMINIT_SUPERCLASS(SatelliteDataInterface, OMAnimatedSatelliteDataInterface)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SatelliteSystem.cpp
*********************************************************************/
