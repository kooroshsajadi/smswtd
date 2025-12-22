/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SMSTWD_ARCH
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\SMSTWD_ARCH.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SMSTWD_ARCH.h"
//## classInstance itsSMSWTD
#include "SMSWTD.h"
//## classInstance itsUnderwaterSeismicSensorNetwork
#include "UnderwaterSeismicSensorNetwork.h"
//## auto_generated
#include "Administrator.h"
//## auto_generated
#include "AircraftSensorNetwork.h"
//## auto_generated
#include "AlertRecipients.h"
//## auto_generated
#include "AnalysisInputInterface.h"
//## auto_generated
#include "AnalysisInputInterfaces.h"
//## auto_generated
#include "DataCollectionSubsystem.h"
//## auto_generated
#include "DataProcessingAndAnalyticsSubsystem.h"
//## auto_generated
#include "HumanMachineInterface.h"
//## auto_generated
#include "RiskAssessmentAndAlertingSubsystem.h"
//## auto_generated
#include "SatelliteSystem.h"
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
//#]

//## package SMSTWD_ARCH


//## classInstance itsSMSWTD
SMSWTD itsSMSWTD;

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
    }
    {
        
        itsSMSWTD.get_port_Ocean()->setItsSensorDataInterface(itsUnderwaterSeismicSensorNetwork.get_port_Ocean()->getItsSensorDataInterface());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool SMSTWD_ARCH_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsSMSWTD.startBehavior();
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SMSTWD_ARCH.cpp
*********************************************************************/
