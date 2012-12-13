/*
 * This program is free software: you BUSMASTER redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      ConstString.h
 * \brief     Interface file for standard definitions
 * \author    Amit Ranjan
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * Interface file for standard definitions
 */
#pragma once

//#include "../FormatConverterApp/GettextBusmaster.h"
#include "../../Utility/MultiLanguageSupport.h"

#define COPYWRITE_INFORMATION _T("/* This file is generated by BUSMASTER */")
#define C_FILE_VERSION          _T("\n/* VERSION [1.1] */")
#define BUSMASTER_VERSION           _T("\n/* BUSMASTER VERSION [1.7.1] */")
#define PROTOCOL                _T("\n/* PROTOCOL [CAN] */")


#define defSTR_StartIncludeHeader "/* Start BUSMASTER include header */\n"
#define defSTR_EndIncludeHeader "/* End BUSMASTER include header */\n"

#define defSTR_UnSupportedFunctionStart    "/* Stat of BUSMASTER Unsupported Function */\n"
#define defSTR_UnSupportedFunctionEnd    "/* End of BUSMASTER Unsupported Function */\n"

#define defSTR_GlobalVarHeader "\n/* Start BUSMASTER global variable */\n"
#define defSTR_TypedefByte " typedef unsigned char byte ;\n"
#define defSTR_TypedefWord " typedef long word ;\n"
#define defSTR_TypedefDword "typedef DWORD dword;\n"
#define defSTR_DefRx "#define\tRx\t1\n"
#define defSTR_ForTrace "char %s[1000];  /*using for Trace*/"
#define defSTR_TraceBufferName " GlobalTrace "
#define defSTR_GlobalVarEnd "\n/* End BUSMASTER global variable */\n"
#define defSTR_HeaderFormat " */\n"



#define defSTR_FuncProHeader "/* Start BUSMASTER Function Prototype  */\n"
#define defSTR_FuncProFooter "/* End BUSMASTER Function Prototype  */"

#define defSTR_RXMessageDec     "\n\tINT\tRX\t=\t1;\n"
#define defSTR_TXMessageDec     "\n\tINT\tTX\t=\t0;\n"
#define defSSTR_TYPEDEFFOR      "\n\t#define\tFOR\tfor"
#define defSSTR_TYPEDEFSWITCH   "\n\t#define\tSWITCH\tswitch"
#define defSSTR_TYPEDEFIF       "\n\t#define\tIF\tif"

#define defSTR_SetTimerVal "SetTimerVal(\"OnTimer_%s_100\","
#define defSTR_1000 "*1000"
#define defSTR_StartTimer "StartTimer(\"OnTimer_%s_100\",0)"
#define defSTR_TimerFormat "_100 */\n"
#define defSTR_OnTimer "OnTimer_"
#define defSTR_TimerStart "void OnTimer_%s()\n{\n"

#define defSTR_StcanTypecase    "*((STCAN_MSG*)&(%s))"
#define defSTR_Header "\n/* Start BUSMASTER generated function - "
#define defSTR_Footer "}/* End BUSMASTER generated function - "
#define defSTR_EndComment "/* End BUSMASTER generated function - "


#define defSTR_MsgIniFormat "%s  %s = {0x%x,%d,0,%d, 0};\n"
#define defSTR_STCANMsgFormat "STCAN_MSG %s = {0x%x,%d,0,0,0};\n"
//#define defSTR_STCANMsgFormat "STCAN_MSG %s ={ 0x%x,%d,0,8,1,{0,0,0,0,0,0,0,0}};\n"
//#define defSTR_MsgFormat "%s  %s = { 0x%x,%d,%d,%d,%d,{0,0,0,0,0,0,0,0}};\n"
//venkatcomment #define defSTR_MsgFormat "%s  %s(0x%x,%d,%d,%d,%d);\n"
#define defSTR_MsgFormat "%s  %s = {0x%x,%d,%d,%d,%d};\n"
//venkatcomment #define defSTR_RepeatedMsgFormat "%s_7016A3A052554b2dA5526D504AA2CE1A  %s(0x%x,%d,%d,%d,%d);\n"
#define defSTR_RepeatedMsgFormat "%s_7016A3A052554b2dA5526D504AA2CE1A %s = {0x%x,%d,%d,%d,%d};\n"

#define defSTR_ChanelSpecificMsg "ChannelSpecificMsg  %s;\n"
#define defSTR_SpecialMsgFormat "%s  %s;\n"
#define defSTR_MsgAll "OnMsg_All */"
#define defSTR_OnMsgAllHeader "OnMsg_All */\n"
#define defSTR_OnMsgAllStart "void OnMsg_All(STCAN_MSG RxMsg)\n{\n"
#define defSTR_MsgIdRangeHeader "OnMsgIDRange_"
#define defSTR_MsgIdRangeStart "void OnMsgIDRange_%s(STCAN_MSG RxMsg)\n{\n"
#define defSTR_MsgIdListHeader  "OnMsgIDList_"
#define defSTR_MsgIdListStart   "void OnMsgIDList_%s(STCAN_MSG RxMsg)\n{\n"
#define defSTR_MsgIdUs "OnMsgID_"
#define defSTR_MsgIdUsStart "void OnMsgID_"
#define defSTR_StcanMsg "(STCAN_MSG RxMsg)\n{\n"
#define defSTR_MsgNameHeader "OnMsgName_"
#define defSTR_MsgNameStart "void OnMsgName_%s(%s_7016A3A052554b2dA5526D504AA2CE1A RxMsg )\n{\n"
#define defSTR_MsgIdStart "void OnMsgID_%s(STCAN_MSG RxMsg)\n{\n"
#define defSTR_ChannelFilter "\tif( RxMsg.m_ucChannel != %d )\n \t{\n\t\treturn;\n\t}"
#define defSTR_KeyAllHeader "OnKey_All */\n"
#define defSTR_KeyAllStart "void OnKey_All(unsigned char chBMKeyValue)\n{\n"
#define defSTR_KeyCharHeader "OnKey_"
#define defSTR_KeyCharStart "void OnKey_%c(unsigned char KeyValue)\n{\n"
#define defSTR_KeyCharStartAlt "/*Alt:%s*/void OnKey_%c(unsigned char KeyValue)\n{\n"
#define defSTR_FunctionDefinition  "\n{\n"

#define defSTF_Extern               "GCC_EXTERN "
#define defSTF_Export               " GCC_EXPORT"

#define defSTF_ExternDecl           "#define GCC_EXTERN __cdecl extern \"C\" "
#define defSTF_ExportDecl           "#define GCC_EXTERN __declspec(dllexport)"
#define defSTR_DllLoadHeader        "OnDLL_Load */\n"
#define defSTR_DllLoadStart         "void OnDLL_Load()\n{\n"
#define defSTR_OnBusConnectHeder    "OnBus_Connect */\n"
#define defSTR_OnBusConnect         "void OnBus_Connect()\n{\n"

#define defSTR_DllUnLoadHeader "OnDLL_Unload */\n"
#define defSTR_DllUnLoadStart "void OnDLL_Unload()\n{\n"

#define defSTR_OnBusDisConnectHeder    "OnBus_Disconnect*/\n"
#define defSTR_OnBusDisConnect         "void OnBus_Disconnect()\n{\n"

#define defSTR_BusOffHeader "OnError_Bus_Off */\n"
#define defSTR_BusOffStart "void OnError_Bus_Off(SCAN_ERR ErrorMsg)\n{\n"

#define defSTR_ErrorFrameHeader "OnError_Frame */\n"
#define defSTR_ErrorFrameStart "void OnError_Frame(SCAN_ERR ErrorMsg)\n{\n"


#define defSTR_ErrorActiveHeader "OnError_Active */\n"
#define defSTR_ErrorActiveStart "void OnError_Active(SCAN_ERR ErrorMsg)\n{\n"



#define defSTR_ErrorPassiveHeader "OnError_Passive */\n"
#define defSTR_ErrorPassiveStart "void OnError_Passive(SCAN_ERR ErrorMsg)\n{\n"


#define defSTR_WarningLimitHeader "OnError_Warning_Limit */\n"
#define defSTR_WarningLimitStart "void OnError_Warning_Limit(SCAN_ERR ErrorMsg)\n{\n"

#define defSTR_GoOnline "GoOnline()"
#define defSTR_GoOffline "GoOffline()"
#define defSTR_EnableLogging "EnableLogging()"
#define defSTR_ResetController "ResetController()"
#define defSTR_Disconnect "Disconnect()"

#define defSTR_ThisVal       "thisVal"
#define defSTR_ChannelVar    "m_ucChannel"
#define defSTR_TxErrorVar    "m_ucTxError"
#define defSTR_RxErrorVar    "m_ucRxError"
#define defSTR_Utils "Utils_"
#define defSTR_AucData "m_aucData["
#define defSTR_FormSpcfr "( %s )\n{\n"
#define defSTR_StopTimer "StopTimer(\"OnTimer_%s_100\")"
#define defSTR_WriteToLog "WriteToLogFile(%s%s"
#define defSTR_RxMsg "RxMsg"
#define defSTR_ErrorMsg "ErrorMsg"
#define defSTR_KeyValue "KeyValue"
#define defSTR_Trace "Trace(%s%s "
#define defSTR_MuId ".m_unMsgID"
#define defSTR_MuDlc ".m_ucDLC"
#define defSTR_MuTime ".m_ulTimeStamp"
#define defSTR_MuChannel ".m_ucChannel"
#define defSTR_MWBit "%s.m_sWhichBit.%s"
#define defSTR_MWBitAlias "%s.m_sWhichBit/*MUX:%s*/.%s"
#define defSTR_LogName "log.txt"
#define defSTR_SendMessage "SendMsg( %s )"
#define defSTR_CAPLWrapperToken "_CAPL"
#define defUtils_PrestartDef    "void Utils_PreStart()\n{\n"
#define defUtils_PrestartDec    "void Utils_PreStart();\n"
#define defUtils_StartComment   "\n/* Start BUSMASTER generated function - Utils_PreStart */\n"
#define defUtils_EndComment     "\n/* End BUSMASTER generated function - Utils_PreStart */\n"

#define defSTR_UnSptdFuncLogInfo "Unsupported Function : %s @ Line No. %d\n"
#define defSTR_Warning1 _("Invalid Output File"),("Warning")
#define defSTR_Warning2 _("This file does not exist"),_("Warning")
#define defSTR_Warning3 _("Output file is in read mode"),_("Warning")
#define defSTR_InputFileInfo _("Input File : %s\n")
#define defSTR_OutputFileInfo _("Output File : %s\n")
#define defSTR_CnvrInfo "%s%f\n",_("Percentage of File Converted =")
#define defSTR_Warning4 _("Log file is in read mode"),_("Warning")
#define defSTR_Warning5 _("Invalid input file"),_("Warning")
#define defSTR_Warning6 _("Default combination will be used for rest of the keys"),_("Warning")
#define defSTR_Warning7 _("(Unsupported Key Handler) :%s has not been converted")
#define defSTR_Warning8 _("Load DBC Converter is Failed.\nConversion will continue with out using Database Files"),_("Warning")
#define defSTR_Warning9 _("No DBC Files are Added.If the CAPL File have any DBC messages converted file cpp may not compile.\n\nDo you want to continue?"),_("Warning")
#define defSTR_EnvVarLogEntry _("Environment handler : @ Line No. %d has been replaced with Key Handler\n")
#define defSTR_UnSptdKeyNotChanged _("Unsupported Key : @ Line No. %d has not been changed.\n")
#define defSTR_ConvertedkeyInfo _("(Unsupported Key Handler) :'%s' has been replaced with '%c'")

#define defSTR_MaxSizeBreadth 80
#define defSTR_MaxSizeLength 255
#define defINT_SizeofacAltKeyArray  62

#define defSTR_BMUnsupported "/*BM Unsupported code*/"
#define defSTR_key "key"
#define defSTR_envvar "envVar"
#define defSTR_timer "timer"
#define defSTR_startstart "startStart"
#define defSTR_busoff "busOff"
#define defSTR_caplfunc "caplFunc"
#define defSTR_errorframe "errorFrameErrorFrame"
#define defSTR_erroractive "errorActive"
#define defSTR_errorpassive "errorPassive"
#define defSTR_warninglimit "warningLimit"
#define defSTR_msg "msg"
#define defSTR_this "this"
#define defSTR_byte "byte"
#define defSTR_long "long"
#define defSTR_word "word"
#define defSTR_LongCnvrt "*long_CAPL((STCAN_MSG*)&%s, %s)"
#define defSTR_ByteCnvrt "*byte_CAPL((STCAN_MSG*)&%s, %s)"
#define defSTR_WordCnvrt "*word_CAPL((STCAN_MSG*)&%s, %s)"

#define defSTR_START_BRAC "["
#define defSTR_END_BRAC "]"
#define defSTR_DB_VER       defSTR_START_BRAC"DATABASE_VERSION"defSTR_END_BRAC
#define defSTR_VER_NO       "1.1"











