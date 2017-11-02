/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Nov 19 16:31:39 2004
 */
/* Compiler settings for D:\tom\Projects\Addin Project Framework\Addin1\Addin1.idl:
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

const IID IID_IFramworkObject1 = {0xE888C30D,0xBEDE,0x41B0,{0xB9,0x94,0xE9,0xF6,0x0A,0x14,0xD1,0x47}};


const IID LIBID_ADDIN1Lib = {0xCE1D7733,0x0AA5,0x4F97,{0x8A,0x5A,0x9C,0x22,0x5E,0x40,0x41,0xDF}};


const IID DIID__IFramworkObject1Events = {0x21025DA6,0x316C,0x4105,{0x99,0x9E,0xB2,0xD0,0xBA,0xE7,0x3E,0xE1}};


const CLSID CLSID_FramworkObject1 = {0x7D551674,0x7F84,0x477E,{0x85,0xF3,0xE1,0x6B,0x48,0xAE,0xC2,0x0F}};


#ifdef __cplusplus
}
#endif

