/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSTWD_ARCH
//!	Generated Date	: Tue, 30, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSTWD_ARCH.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSTWD_ARCH.h"
//## classInstance itsAircraftSensorNetwork
#include "AircraftSensorNetwork.h"
//## classInstance itsDataProcessingAndAnalyticsSubsystem
#include "DataProcessingAndAnalyticsSubsystem.h"
//## classInstance itsSatelliteSystem
#include "SatelliteSystem.h"
//## classInstance itsSMSWTD
#include "SMSWTD.h"
//## classInstance itsUnderwaterSeismicSensorNetwork
#include "UnderwaterSeismicSensorNetwork.h"
//## auto_generated
#include "Administrator.h"
//## auto_generated
#include "AircraftDataInterface.h"
//## auto_generated
#include "AlertRecipients.h"
//## auto_generated
#include "AnalyticsInterface.h"
//## auto_generated
#include "DataCollectionSubsystem.h"
//## auto_generated
#include "RiskAssessmentAndAlertingSubsystem.h"
//## auto_generated
#include "SatelliteDataInterface.h"
//## auto_generated
#include "SecurityAndAccessControl.h"
//## auto_generated
#include "SensorDataInterface.h"
//## auto_generated
#include "SystemInfrastructure.h"
//#[ ignore
#define evSMSWTDOn_SERIALIZE OM_NO_OP

#define evSMSWTDOn_UNSERIALIZE OM_NO_OP

#define evSMSWTDOn_CONSTRUCTOR evSMSWTDOn()

#define eventSMSWTDOff_SERIALIZE OM_NO_OP

#define eventSMSWTDOff_UNSERIALIZE OM_NO_OP

#define eventSMSWTDOff_CONSTRUCTOR eventSMSWTDOff()

#define startSensing_SERIALIZE OM_NO_OP

#define startSensing_UNSERIALIZE OM_NO_OP

#define startSensing_CONSTRUCTOR startSensing()

#define stopSensing_SERIALIZE OM_NO_OP

#define stopSensing_UNSERIALIZE OM_NO_OP

#define stopSensing_CONSTRUCTOR stopSensing()

#define SMSTD_On_SERIALIZE OM_NO_OP

#define SMSTD_On_UNSERIALIZE OM_NO_OP

#define SMSTD_On_CONSTRUCTOR SMSTD_On()

#define turn_on_SERIALIZE OM_NO_OP

#define turn_on_UNSERIALIZE OM_NO_OP

#define turn_on_CONSTRUCTOR turn_on()

#define start_sensing_SERIALIZE OM_NO_OP

#define start_sensing_UNSERIALIZE OM_NO_OP

#define start_sensing_CONSTRUCTOR start_sensing()

#define redoSensing_SERIALIZE OM_NO_OP

#define redoSensing_UNSERIALIZE OM_NO_OP

#define redoSensing_CONSTRUCTOR redoSensing()

#define startProcessing_SERIALIZE OM_NO_OP

#define startProcessing_UNSERIALIZE OM_NO_OP

#define startProcessing_CONSTRUCTOR startProcessing()

#define processData_SERIALIZE OM_NO_OP

#define processData_UNSERIALIZE OM_NO_OP

#define processData_CONSTRUCTOR processData()

#define chUnderwaterData_SERIALIZE OM_NO_OP

#define chUnderwaterData_UNSERIALIZE OM_NO_OP

#define chUnderwaterData_CONSTRUCTOR chUnderwaterData()

#define chUnderwaterDataFlow_SERIALIZE OM_NO_OP

#define chUnderwaterDataFlow_UNSERIALIZE OM_NO_OP

#define chUnderwaterDataFlow_CONSTRUCTOR chUnderwaterDataFlow()

#define chAircraftsDataFlow_SERIALIZE OM_NO_OP

#define chAircraftsDataFlow_UNSERIALIZE OM_NO_OP

#define chAircraftsDataFlow_CONSTRUCTOR chAircraftsDataFlow()

#define turnOn_SERIALIZE OM_NO_OP

#define turnOn_UNSERIALIZE OM_NO_OP

#define turnOn_CONSTRUCTOR turnOn()
//#]

//## package SMSTWD_ARCH


//## classInstance itsAircraftSensorNetwork
AircraftSensorNetwork itsAircraftSensorNetwork;

//## classInstance itsDataProcessingAndAnalyticsSubsystem
DataProcessingAndAnalyticsSubsystem itsDataProcessingAndAnalyticsSubsystem;

//## classInstance itsDataProcessingAndAnalyticsSubsystem_1
DataProcessingAndAnalyticsSubsystem itsDataProcessingAndAnalyticsSubsystem_1;

//## classInstance itsSMSWTD
SMSWTD itsSMSWTD;

//## classInstance itsSMSWTD_1
SMSWTD itsSMSWTD_1;

//## classInstance itsSatelliteSystem
SatelliteSystem itsSatelliteSystem;

//## classInstance itsUnderwaterSeismicSensorNetwork
UnderwaterSeismicSensorNetwork itsUnderwaterSeismicSensorNetwork;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(SMSTWD_ARCH, SMSTWD_ARCH)
#endif // _OMINSTRUMENT

void SMSTWD_ARCH_initRelations(void) {
    {
        {
            itsSMSWTD.setShouldDelete(false);
        }
        {
            itsUnderwaterSeismicSensorNetwork.setShouldDelete(false);
        }
        {
            itsSatelliteSystem.setShouldDelete(false);
        }
        {
            itsAircraftSensorNetwork.setShouldDelete(false);
        }
        {
            itsSMSWTD_1.setShouldDelete(false);
        }
        {
            itsDataProcessingAndAnalyticsSubsystem.setShouldDelete(false);
        }
        {
            itsDataProcessingAndAnalyticsSubsystem_1.setShouldDelete(false);
        }
    }
    {
        
        itsSMSWTD.get_port_Ocean()->setItsSensorDataInterface(itsUnderwaterSeismicSensorNetwork.get_port_Ocean()->getItsSensorDataInterface());
        
    }
    {
        
        itsSMSWTD.get_port_Satellite()->setItsSatelliteDataInterface(itsSatelliteSystem.get_port_Satellite()->getItsSatelliteDataInterface());
        
    }
    {
        
        itsSMSWTD.get_port_Aircraft()->setItsAircraftDataInterface(itsAircraftSensorNetwork.get_port_Aircraft()->getItsAircraftDataInterface());
        
    }
    {
        
        itsSMSWTD.get_port_Analytics()->setItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface(itsDataProcessingAndAnalyticsSubsystem_1.get_port_Analytics()->getItsUnderwaterSensorData_underwaterDataFlow_ProxyFlowPropertyInterface());
        
        itsSMSWTD.get_port_Analytics()->setItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface(itsDataProcessingAndAnalyticsSubsystem_1.get_port_Analytics()->getItsAircraftData_aircraftsDataFlow_ProxyFlowPropertyInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool SMSTWD_ARCH_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsAircraftSensorNetwork.startBehavior();
        }
    if(done == true)
        {
            done = itsDataProcessingAndAnalyticsSubsystem.startBehavior();
        }
    if(done == true)
        {
            done = itsDataProcessingAndAnalyticsSubsystem_1.startBehavior();
        }
    if(done == true)
        {
            done = itsSMSWTD.startBehavior();
        }
    if(done == true)
        {
            done = itsSMSWTD_1.startBehavior();
        }
    if(done == true)
        {
            done = itsSatelliteSystem.startBehavior();
        }
    if(done == true)
        {
            done = itsUnderwaterSeismicSensorNetwork.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsSMSWTD, SMSWTD, "itsSMSWTD", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsUnderwaterSeismicSensorNetwork, UnderwaterSeismicSensorNetwork, "itsUnderwaterSeismicSensorNetwork", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSatelliteSystem, SatelliteSystem, "itsSatelliteSystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAircraftSensorNetwork, AircraftSensorNetwork, "itsAircraftSensorNetwork", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSMSWTD_1, SMSWTD, "itsSMSWTD_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDataProcessingAndAnalyticsSubsystem, DataProcessingAndAnalyticsSubsystem, "itsDataProcessingAndAnalyticsSubsystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsDataProcessingAndAnalyticsSubsystem_1, DataProcessingAndAnalyticsSubsystem, "itsDataProcessingAndAnalyticsSubsystem_1", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
SMSTWD_ARCH_OMInitializer::SMSTWD_ARCH_OMInitializer(void) {
    SMSTWD_ARCH_initRelations();
    (void) SMSTWD_ARCH_startBehavior();
}

SMSTWD_ARCH_OMInitializer::~SMSTWD_ARCH_OMInitializer(void) {
}
//#]

//## event evSMSWTDOn()
evSMSWTDOn::evSMSWTDOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evSMSWTDOn)
    setId(evSMSWTDOn_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID evSMSWTDOn_SMSTWD_ARCH_id(18601);
//#]

IMPLEMENT_META_EVENT_P(evSMSWTDOn, SMSTWD_ARCH, SMSTWD_ARCH, evSMSWTDOn())

//## event eventSMSWTDOff()
eventSMSWTDOff::eventSMSWTDOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(eventSMSWTDOff)
    setId(eventSMSWTDOff_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID eventSMSWTDOff_SMSTWD_ARCH_id(18602);
//#]

IMPLEMENT_META_EVENT_P(eventSMSWTDOff, SMSTWD_ARCH, SMSTWD_ARCH, eventSMSWTDOff())

//## event startSensing()
startSensing::startSensing(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(startSensing)
    setId(startSensing_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID startSensing_SMSTWD_ARCH_id(18603);
//#]

IMPLEMENT_META_EVENT_P(startSensing, SMSTWD_ARCH, SMSTWD_ARCH, startSensing())

//## event stopSensing()
stopSensing::stopSensing(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(stopSensing)
    setId(stopSensing_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID stopSensing_SMSTWD_ARCH_id(18604);
//#]

IMPLEMENT_META_EVENT_P(stopSensing, SMSTWD_ARCH, SMSTWD_ARCH, stopSensing())

//## event SMSTD_On()
SMSTD_On::SMSTD_On(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(SMSTD_On)
    setId(SMSTD_On_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID SMSTD_On_SMSTWD_ARCH_id(18605);
//#]

IMPLEMENT_META_EVENT_P(SMSTD_On, SMSTWD_ARCH, SMSTWD_ARCH, SMSTD_On())

//## event turn_on()
turn_on::turn_on(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(turn_on)
    setId(turn_on_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID turn_on_SMSTWD_ARCH_id(18606);
//#]

IMPLEMENT_META_EVENT_P(turn_on, SMSTWD_ARCH, SMSTWD_ARCH, turn_on())

//## event start_sensing()
start_sensing::start_sensing(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(start_sensing)
    setId(start_sensing_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID start_sensing_SMSTWD_ARCH_id(18607);
//#]

IMPLEMENT_META_EVENT_P(start_sensing, SMSTWD_ARCH, SMSTWD_ARCH, start_sensing())

//## event redoSensing()
redoSensing::redoSensing(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(redoSensing)
    setId(redoSensing_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID redoSensing_SMSTWD_ARCH_id(18608);
//#]

IMPLEMENT_META_EVENT_P(redoSensing, SMSTWD_ARCH, SMSTWD_ARCH, redoSensing())

//## event startProcessing()
startProcessing::startProcessing(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(startProcessing)
    setId(startProcessing_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID startProcessing_SMSTWD_ARCH_id(18609);
//#]

IMPLEMENT_META_EVENT_P(startProcessing, SMSTWD_ARCH, SMSTWD_ARCH, startProcessing())

//## event processData()
processData::processData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(processData)
    setId(processData_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID processData_SMSTWD_ARCH_id(18610);
//#]

IMPLEMENT_META_EVENT_P(processData, SMSTWD_ARCH, SMSTWD_ARCH, processData())

//## event chUnderwaterData()
chUnderwaterData::chUnderwaterData(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(chUnderwaterData)
    setId(chUnderwaterData_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID chUnderwaterData_SMSTWD_ARCH_id(18611);
//#]

IMPLEMENT_META_EVENT_P(chUnderwaterData, SMSTWD_ARCH, SMSTWD_ARCH, chUnderwaterData())

//## event chUnderwaterDataFlow()
chUnderwaterDataFlow::chUnderwaterDataFlow(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(chUnderwaterDataFlow)
    setId(chUnderwaterDataFlow_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID chUnderwaterDataFlow_SMSTWD_ARCH_id(18612);
//#]

IMPLEMENT_META_EVENT_P(chUnderwaterDataFlow, SMSTWD_ARCH, SMSTWD_ARCH, chUnderwaterDataFlow())

//## event chAircraftsDataFlow()
chAircraftsDataFlow::chAircraftsDataFlow(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(chAircraftsDataFlow)
    setId(chAircraftsDataFlow_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID chAircraftsDataFlow_SMSTWD_ARCH_id(18613);
//#]

IMPLEMENT_META_EVENT_P(chAircraftsDataFlow, SMSTWD_ARCH, SMSTWD_ARCH, chAircraftsDataFlow())

//## event turnOn()
turnOn::turnOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(turnOn)
    setId(turnOn_SMSTWD_ARCH_id);
}

//#[ ignore
const IOxfEvent::ID turnOn_SMSTWD_ARCH_id(18614);
//#]

IMPLEMENT_META_EVENT_P(turnOn, SMSTWD_ARCH, SMSTWD_ARCH, turnOn())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSTWD_ARCH.cpp
*********************************************************************/
