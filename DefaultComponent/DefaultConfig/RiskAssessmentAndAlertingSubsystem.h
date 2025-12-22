/*********************************************************************
	Rhapsody	: 10.0.2 
	Login		: kouro
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RiskAssessmentAndAlertingSubsystem
//!	Generated Date	: Sat, 20, Dec 2025  
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentAndAlertingSubsystem.h
*********************************************************************/

#ifndef RiskAssessmentAndAlertingSubsystem_H
#define RiskAssessmentAndAlertingSubsystem_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SMSTWD_ARCH.h"
//## package SMSTWD_ARCH

//## class RiskAssessmentAndAlertingSubsystem
class RiskAssessmentAndAlertingSubsystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRiskAssessmentAndAlertingSubsystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RiskAssessmentAndAlertingSubsystem(void);
    
    //## auto_generated
    virtual ~RiskAssessmentAndAlertingSubsystem(void);
    
    ////    Operations    ////
    
    //## operation assessRisk()
    virtual void assessRisk(void);
    
    //## operation sendAlerts()
    virtual void sendAlerts(void);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    char* const getAlertChannelConfig(void) const;
    
    //## auto_generated
    void setAlertChannelConfig(char* const p_alertChannelConfig);
    
    //## auto_generated
    double const getRiskThreshold(void) const;
    
    //## auto_generated
    void setRiskThreshold(const double p_riskThreshold);
    
    ////    Attributes    ////
    
    char* alertChannelConfig;		//## attribute alertChannelConfig
    
    double riskThreshold;		//## attribute riskThreshold
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRiskAssessmentAndAlertingSubsystem : virtual public AOMInstance {
    DECLARE_META(RiskAssessmentAndAlertingSubsystem, OMAnimatedRiskAssessmentAndAlertingSubsystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RiskAssessmentAndAlertingSubsystem.h
*********************************************************************/
