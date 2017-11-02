/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 10 12:10:09 2004
 */
/* Compiler settings for D:\tom\Projects\Addin Project Framework\ProjectFramework\ProjectFramework.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IProjectFramework = {0x5B185FA1,0xFFCD,0x45E5,{0xAA,0xD0,0x58,0xE3,0x96,0xE5,0xC4,0x44}};


const IID LIBID_ProjectFrameworkLib = {0x6B010AB7,0xBCD0,0x4DA5,{0x85,0xC7,0xE0,0x1B,0x0A,0x8E,0x01,0x41}};


const IID DIID__IProjectFrameworkEvents = {0x752251EA,0xF05F,0x4BE2,{0xBC,0x79,0xB0,0x04,0x4E,0x4C,0x6E,0xC5}};


const IID IID_IProjectFrameworkAddin = {0xDE70B3B4,0x26A9,0x4BCD,{0xB6,0x42,0x40,0x84,0xBF,0xFC,0x25,0x2A}};


const IID IID_IFrameworkAddin1 = {0x275E4F9E,0x3CF5,0x40CA,{0x81,0x9E,0x15,0x26,0x76,0xDD,0xB7,0x2E}};


const CLSID CLSID_ProjectFramework = {0xAC8B0EC6,0xC6D1,0x4E5E,{0x8C,0xBF,0x4C,0x71,0x61,0xE9,0x22,0x31}};


const CLSID CLSID_ProjectFrameworkAddin = {0x9DF9FC32,0x65CF,0x4B49,{0x86,0x0D,0xFC,0x33,0x21,0xF1,0x49,0x15}};


const IID DIID__IFrameworkAddin1Events = {0xE00EC30D,0x2ED8,0x46D6,{0xB7,0xA0,0x5E,0x68,0x5B,0x3E,0x5D,0xC8}};


const CLSID CLSID_FrameworkAddin1 = {0xE1DD5976,0x02FF,0x4316,{0xA0,0x61,0x93,0x88,0x54,0xE4,0x01,0x01}};


#ifdef __cplusplus
}
#endif

