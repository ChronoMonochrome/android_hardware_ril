/* //device/libs/telephony/ril_unsol_commands.h
**
** Copyright 2006, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
    {RIL_UNSOL_RESPONSE_RADIO_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_CALL_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_VOICE_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS_STATUS_REPORT, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_SMS_ON_SIM, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_ON_USSD, responseStrings, WAKE_PARTIAL},
    {RIL_UNSOL_ON_USSD_REQUEST, responseVoid, DONT_WAKE},
    {RIL_UNSOL_NITZ_TIME_RECEIVED, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_SIGNAL_STRENGTH, responseRilSignalStrength, DONT_WAKE},
    {RIL_UNSOL_DATA_CALL_LIST_CHANGED, responseDataCallList, WAKE_PARTIAL},
    {RIL_UNSOL_SUPP_SVC_NOTIFICATION, responseSsn, WAKE_PARTIAL},
    {RIL_UNSOL_STK_SESSION_END, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_STK_PROACTIVE_COMMAND, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_STK_EVENT_NOTIFY, responseString, WAKE_PARTIAL},
    {RIL_UNSOL_STK_CALL_SETUP, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_SMS_STORAGE_FULL, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_REFRESH, responseSimRefresh, WAKE_PARTIAL},
    {RIL_UNSOL_CALL_RING, responseCallRing, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_SIM_STATUS_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_CDMA_NEW_SMS, responseCdmaSms, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_NEW_BROADCAST_SMS, responseRaw, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_RUIM_SMS_STORAGE_FULL, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RESTRICTED_STATE_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_ENTER_EMERGENCY_CALLBACK_MODE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_CALL_WAITING, responseCdmaCallWaiting, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_OTA_PROVISION_STATUS, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_INFO_REC, responseCdmaInformationRecords, WAKE_PARTIAL},
    {RIL_UNSOL_OEM_HOOK_RAW, responseRaw, WAKE_PARTIAL},
    {RIL_UNSOL_RINGBACK_TONE, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_RESEND_INCALL_MUTE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_SUBSCRIPTION_SOURCE_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_CDMA_PRL_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_EXIT_EMERGENCY_CALLBACK_MODE, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_RIL_CONNECTED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_VOICE_RADIO_TECH_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_CELL_INFO_LIST, responseCellInfoList, WAKE_PARTIAL},
    {RIL_UNSOL_RESPONSE_IMS_NETWORK_STATE_CHANGED, responseVoid, WAKE_PARTIAL},
    {RIL_UNSOL_UICC_SUBSCRIPTION_STATUS_CHANGED, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_SRVCC_STATE_NOTIFY, responseInts, WAKE_PARTIAL},
    {RIL_UNSOL_HARDWARE_CONFIG_CHANGED, responseHardwareConfig, WAKE_PARTIAL},
    {RIL_UNSOL_DC_RT_INFO_CHANGED, responseDcRtInfo, WAKE_PARTIAL},
    {RIL_UNSOL_RADIO_CAPABILITY, responseRadioCapability, WAKE_PARTIAL},
    {RIL_UNSOL_ON_SS, responseSSData, WAKE_PARTIAL},
    {RIL_UNSOL_STK_CC_ALPHA_NOTIFY, responseString, WAKE_PARTIAL},
    //{RIL_UNSOL_LCEDATA_RECV, responseLceData, WAKE_PARTIAL},
    {SAMSUNG_UNSOL_RESPONSE_BASE, NULL, WAKE_PARTIAL},
    {RIL_UNSOL_RELEASE_COMPLETE_MESSAGE, responseVoid, WAKE_PARTIAL}, // 11001
    {RIL_UNSOL_STK_SEND_SMS_RESULT, responseInts, WAKE_PARTIAL}, // 11002
    {RIL_UNSOL_STK_CALL_CONTROL_RESULT, responseVoid, WAKE_PARTIAL}, // 11003
    {RIL_UNSOL_DUN_CALL_STATUS, responseVoid, WAKE_PARTIAL}, // 11004
    {11005, NULL, WAKE_PARTIAL},
    {11006, NULL, WAKE_PARTIAL},
    {RIL_UNSOL_O2_HOME_ZONE_INFO, responseVoid, WAKE_PARTIAL}, // 11007
    {RIL_UNSOL_DEVICE_READY_NOTI, responseVoid, WAKE_PARTIAL}, // 11008
    {RIL_UNSOL_GPS_NOTI, responseVoid, WAKE_PARTIAL}, // 11009
    {RIL_UNSOL_AM, responseString, WAKE_PARTIAL}, // 11010
    {RIL_UNSOL_DUN_PIN_CONTROL_SIGNAL, responseVoid, WAKE_PARTIAL}, // 11011
    {RIL_UNSOL_DATA_SUSPEND_RESUME, responseInts, WAKE_PARTIAL}, // 11012
    {RIL_UNSOL_SAP, responseVoid, WAKE_PARTIAL}, // 11013
    {11014, NULL, WAKE_PARTIAL},
    {RIL_UNSOL_SIM_SMS_STORAGE_AVAILALE, responseVoid, WAKE_PARTIAL}, // 11015
    {RIL_UNSOL_HSDPA_STATE_CHANGED, responseVoid, WAKE_PARTIAL}, // 11016
    {RIL_UNSOL_WB_AMR_STATE, responseInts, WAKE_PARTIAL}, // 11017
    {RIL_UNSOL_TWO_MIC_STATE, responseInts, WAKE_PARTIAL}, // 11018
    {RIL_UNSOL_DHA_STATE, responseVoid, WAKE_PARTIAL}, // 11019
    {RIL_UNSOL_UART, responseVoid, WAKE_PARTIAL}, // 11020
    {RIL_UNSOL_RESPONSE_HANDOVER, responseVoid, WAKE_PARTIAL}, // 11021
    {RIL_UNSOL_IPV6_ADDR, responseVoid, WAKE_PARTIAL}, // 11022
    {RIL_UNSOL_NWK_INIT_DISC_REQUEST, responseVoid, WAKE_PARTIAL}, // 11023
    {RIL_UNSOL_RTS_INDICATION, responseVoid, WAKE_PARTIAL}, // 11024
    {RIL_UNSOL_OMADM_SEND_DATA, responseVoid, WAKE_PARTIAL}, // 11025
    {RIL_UNSOL_DUN, responseVoid, WAKE_PARTIAL}, // 11026
    {RIL_UNSOL_SYSTEM_REBOOT, responseVoid, WAKE_PARTIAL}, // 11027
    {RIL_UNSOL_VOICE_PRIVACY_CHANGED, responseVoid, WAKE_PARTIAL}, // 11028
    {RIL_UNSOL_UTS_GETSMSCOUNT, responseVoid, WAKE_PARTIAL}, // 11029
    {RIL_UNSOL_UTS_GETSMSMSG, responseVoid, WAKE_PARTIAL}, // 11030
    {RIL_UNSOL_UTS_GET_UNREAD_SMS_STATUS, responseVoid, WAKE_PARTIAL}, // 11031
    {RIL_UNSOL_MIP_CONNECT_STATUS, responseVoid, WAKE_PARTIAL}, // 11032
#ifdef RIL_UNSOL_SNDMGR_WB_AMR_REPORT
    {RIL_UNSOL_SNDMGR_WB_AMR_REPORT, responseInts, WAKE_PARTIAL}, // 20017
#endif
#ifdef RIL_UNSOL_SNDMGR_CLOCK_CTRL
    {RIL_UNSOL_SNDMGR_CLOCK_CTRL, responseInts, WAKE_PARTIAL}, // 20022
#endif
