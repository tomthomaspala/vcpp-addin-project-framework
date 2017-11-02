/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Nov 16 17:36:40 2004
 */
/* Compiler settings for D:\tom\Projects\Addin Project Framework\Addin2\Addin2.idl:
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

const IID IID_IFramworkObject2 = {0xA6F55852,0x9E39,0x4CB3,{0xA5,0x81,0x3D,0x90,0x5F,0x51,0x84,0x99}};


const IID LIBID_ADDIN2Lib = {0x4E44416A,0xFB80,0x4318,{0xB1,0xAC,0xE4,0xEE,0x10,0xCD,0x37,0x2C}};


const IID DIID__IFramworkObject2Events = {0x2F1ACFB5,0x514F,0x4188,{0x9F,0xD8,0x20,0xE2,0x42,0x81,0x78,0xF6}};


const CLSID CLSID_FramworkObject2 = {0x76E278FD,0xDCDF,0x497E,{0x86,0x02,0xE7,0x29,0x5F,0x26,0xAC,0x99}};


#ifdef __cplusplus
}
#endif

