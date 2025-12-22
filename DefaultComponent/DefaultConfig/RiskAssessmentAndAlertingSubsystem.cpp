/********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RiskAssessmentAndAlertingSubsystem
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentAndAlertingSubsystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RiskAssessmentAndAlertingSubsystem.h"
//#[ ignore
#define SMSTWD_ARCH_RiskAssessmentAndAlertingSubsystem_RiskAssessmentAndAlertingSubsystem_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_RiskAssessmentAndAlertingSubsystem_assessRisk_SERIALIZE OM_NO_OP

#define SMSTWD_ARCH_RiskAssessmentAndAlertingSubsystem_sendAlerts_SERIALIZE OM_NO_OP
//#]

//## package SMSTWD_ARCH

//## class RiskAssessmentAndAlertingSubsystem
RiskAssessmentAndAlertingSubsystem::RiskAssessmentAndAlertingSubsystem(void) {
    NOTIFY_CONSTRUCTOR(RiskAssessmentAndAlertingSubsystem, RiskAssessmentAndAlertingSubsystem(), 0, SMSTWD_ARCH_RiskAssessmentAndAlertingSubsystem_RiskAssessmentAndAlertingSubsystem_SERIALIZE);
}

RiskAssessmentAndAlertingSubsystem::~RiskAssessmentAndAlertingSubsystem(void) {
    NOTIFY_DESTRUCTOR(~RiskAssessmentAndAlertingSubsystem, true);
}

void RiskAssessmentAndAlertingSubsystem::assessRisk(void) {
    NOTIFY_OPERATION(assessRisk, assessRisk(), 0, SMSTWD_ARCH_RiskAssessmentAndAlertingSubsystem_assessRisk_SERIALIZE);
    //#[ operation assessRisk()
    
        // TODO: Implement data collection
    
    //#]
}

void RiskAssessmentAndAlertingSubsystem::sendAlerts(void) {
    NOTIFY_OPERATION(sendAlerts, sendAlerts(), 0, SMSTWD_ARCH_RiskAssessmentAndAlertingSubsystem_sendAlerts_SERIALIZE);
    //#[ operation sendAlerts()
    
        // TODO: Implement data collection
    
    
    //#]
}

char* const RiskAssessmentAndAlertingSubsystem::getAlertChannelConfig(void) const {
    return alertChannelConfig;
}

void RiskAssessmentAndAlertingSubsystem::setAlertChannelConfig(char* const p_alertChannelConfig) {
    alertChannelConfig = p_alertChannelConfig;
}

double const RiskAssessmentAndAlertingSubsystem::getRiskThreshold(void) const {
    return riskThreshold;
}

void RiskAssessmentAndAlertingSubsystem::setRiskThreshold(const double p_riskThreshold) {
    riskThreshold = p_riskThreshold;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRiskAssessmentAndAlertingSubsystem::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("riskThreshold", x2String(myReal->riskThreshold));
    aomsAttributes->addAttribute("alertChannelConfig", x2String(myReal->alertChannelConfig));
}
//#]

IMPLEMENT_META_P(RiskAssessmentAndAlertingSubsystem, SMSTWD_ARCH, SMSTWD_ARCH, false, OMAnimatedRiskAssessmentAndAlertingSubsystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentAndAlertingSubsystem.cpp
*********************************************************************/
