// ------------------------------------------------------------------------- //
//
// FILE      : S Y S P E R F C O U N T E R . H
//
// CREATED   : 09/26/00
//
// COPYRIGHT : LithTech Productions Inc.
//
// ------------------------------------------------------------------------- //

#ifndef __SYSPERFCOUNTER_H__
#define __SYSPERFCOUNTER_H__


// This is a redirector to get the system dependent include
#ifdef __PS2
#include "sys/ps2/ps2perfcountermanager.h"
#elif _WIN32
#include "sys/win/ddperfcountermanager.h"
#endif


#endif