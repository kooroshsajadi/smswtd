
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x64$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x64 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files\IBM\Rhapsody\10.0.2\Share"
RHPROOT="C:\Program Files\IBM\Rhapsody\10.0.2"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\10.0.2x64\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  SMSWTD.obj \
  DataCollectionSubsystem.obj \
  DataProcessingAndAnalyticsSubsystem.obj \
  RiskAssessmentAndAlertingSubsystem.obj \
  SystemInfrastructure.obj \
  SecurityAndAccessControl.obj \
  SatelliteSystem.obj \
  AircraftSensorNetwork.obj \
  UnderwaterSeismicSensorNetwork.obj \
  AlertRecipients.obj \
  Administrator.obj \
  SensorDataInterface.obj \
  AnalysisInputInterfaces.obj \
  SatelliteDataInterface.obj \
  AircraftDataInterface.obj \
  SMSTWD_ARCH.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






SMSWTD.obj : SMSWTD.cpp SMSWTD.h    SMSTWD_ARCH.h DataCollectionSubsystem.h DataProcessingAndAnalyticsSubsystem.h RiskAssessmentAndAlertingSubsystem.h SecurityAndAccessControl.h SystemInfrastructure.h SatelliteSystem.h AircraftSensorNetwork.h UnderwaterSeismicSensorNetwork.h AlertRecipients.h SensorDataInterface.h SatelliteDataInterface.h AircraftDataInterface.h AnalysisInputInterfaces.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



DataCollectionSubsystem.obj : DataCollectionSubsystem.cpp DataCollectionSubsystem.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataCollectionSubsystem.obj" "DataCollectionSubsystem.cpp" 



DataProcessingAndAnalyticsSubsystem.obj : DataProcessingAndAnalyticsSubsystem.cpp DataProcessingAndAnalyticsSubsystem.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataProcessingAndAnalyticsSubsystem.obj" "DataProcessingAndAnalyticsSubsystem.cpp" 



RiskAssessmentAndAlertingSubsystem.obj : RiskAssessmentAndAlertingSubsystem.cpp RiskAssessmentAndAlertingSubsystem.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RiskAssessmentAndAlertingSubsystem.obj" "RiskAssessmentAndAlertingSubsystem.cpp" 



SystemInfrastructure.obj : SystemInfrastructure.cpp SystemInfrastructure.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SystemInfrastructure.obj" "SystemInfrastructure.cpp" 



SecurityAndAccessControl.obj : SecurityAndAccessControl.cpp SecurityAndAccessControl.h    SMSTWD_ARCH.h Administrator.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SecurityAndAccessControl.obj" "SecurityAndAccessControl.cpp" 



SatelliteSystem.obj : SatelliteSystem.cpp SatelliteSystem.h    SMSTWD_ARCH.h SMSWTD.h SatelliteDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SatelliteSystem.obj" "SatelliteSystem.cpp" 



AircraftSensorNetwork.obj : AircraftSensorNetwork.cpp AircraftSensorNetwork.h    SMSTWD_ARCH.h SMSWTD.h AircraftDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AircraftSensorNetwork.obj" "AircraftSensorNetwork.cpp" 



UnderwaterSeismicSensorNetwork.obj : UnderwaterSeismicSensorNetwork.cpp UnderwaterSeismicSensorNetwork.h    SMSTWD_ARCH.h SMSWTD.h SensorDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UnderwaterSeismicSensorNetwork.obj" "UnderwaterSeismicSensorNetwork.cpp" 



AlertRecipients.obj : AlertRecipients.cpp AlertRecipients.h    SMSTWD_ARCH.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AlertRecipients.obj" "AlertRecipients.cpp" 



Administrator.obj : Administrator.cpp Administrator.h    SMSTWD_ARCH.h SecurityAndAccessControl.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Administrator.obj" "Administrator.cpp" 



SensorDataInterface.obj : SensorDataInterface.cpp SensorDataInterface.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorDataInterface.obj" "SensorDataInterface.cpp" 



AnalysisInputInterfaces.obj : AnalysisInputInterfaces.cpp AnalysisInputInterfaces.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AnalysisInputInterfaces.obj" "AnalysisInputInterfaces.cpp" 



SatelliteDataInterface.obj : SatelliteDataInterface.cpp SatelliteDataInterface.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SatelliteDataInterface.obj" "SatelliteDataInterface.cpp" 



AircraftDataInterface.obj : AircraftDataInterface.cpp AircraftDataInterface.h    SMSTWD_ARCH.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AircraftDataInterface.obj" "AircraftDataInterface.cpp" 



SMSTWD_ARCH.obj : SMSTWD_ARCH.cpp SMSTWD_ARCH.h    SMSWTD.h DataCollectionSubsystem.h DataProcessingAndAnalyticsSubsystem.h RiskAssessmentAndAlertingSubsystem.h SystemInfrastructure.h SecurityAndAccessControl.h SatelliteSystem.h AircraftSensorNetwork.h UnderwaterSeismicSensorNetwork.h AlertRecipients.h Administrator.h SensorDataInterface.h AnalysisInputInterfaces.h SatelliteDataInterface.h AircraftDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSTWD_ARCH.obj" "SMSTWD_ARCH.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist DataCollectionSubsystem.obj erase DataCollectionSubsystem.obj
	if exist DataProcessingAndAnalyticsSubsystem.obj erase DataProcessingAndAnalyticsSubsystem.obj
	if exist RiskAssessmentAndAlertingSubsystem.obj erase RiskAssessmentAndAlertingSubsystem.obj
	if exist SystemInfrastructure.obj erase SystemInfrastructure.obj
	if exist SecurityAndAccessControl.obj erase SecurityAndAccessControl.obj
	if exist SatelliteSystem.obj erase SatelliteSystem.obj
	if exist AircraftSensorNetwork.obj erase AircraftSensorNetwork.obj
	if exist UnderwaterSeismicSensorNetwork.obj erase UnderwaterSeismicSensorNetwork.obj
	if exist AlertRecipients.obj erase AlertRecipients.obj
	if exist Administrator.obj erase Administrator.obj
	if exist SensorDataInterface.obj erase SensorDataInterface.obj
	if exist AnalysisInputInterfaces.obj erase AnalysisInputInterfaces.obj
	if exist SatelliteDataInterface.obj erase SatelliteDataInterface.obj
	if exist AircraftDataInterface.obj erase AircraftDataInterface.obj
	if exist SMSTWD_ARCH.obj erase SMSTWD_ARCH.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
