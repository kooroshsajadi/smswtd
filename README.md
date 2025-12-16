# SMSWTD – SysML Requirements Model

This repository contains the SysML requirements model for the **Smart Monitoring System for Weather and Tsunami Detection (SMSWTD)**. The model captures the system’s functional and non‑functional requirements following a V‑Model systems engineering approach. [file:37]

## Current contents

- **Rhapsody project** for SMSWTD  
  - Requirements organized under a top‑level system requirement (REQ‑001) and grouped into:
    - **Functional requirements** (REQ‑010): data collection (REQ‑100/101–104), data processing (REQ‑200/201–204), and risk assessment & early warning (REQ‑300/301–304). [file:37]  
    - **Non‑functional requirements** (REQ‑020): quality attributes including real‑time performance, availability, accuracy, multilingual support, scalability, and security (REQ‑401–406). [file:37]  
  - SysML requirement stereotypes for:
    - System, functional, and non‑functional requirements  
    - Functional subgroups: dataCollectionReq, dataProcessingReq, riskAssessmentReq  
    - Performance‑related NFRs (e.g., latency and scalability)

- **Requirements diagrams**
  - `REQ_Func_SMSWTD`: functional requirements hierarchy and refinement from top‑level functional requirements down to detailed behaviors. [file:37]  
  - `REQ_NonFunc_SMSWTD`: non‑functional requirements and their grouping under the quality requirements node. [file:37]  
  - Cross‑links (trace dependencies) from key functional requirements (e.g., real‑time updates and early warnings) to performance and other quality requirements.
