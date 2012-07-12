#include "global.h"
#include "entry.h"
#include "queue.h"

#ifndef WDM_H
#define WDM_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// ----------------------------------------------------------
// Global variables
// ----------------------------------------------------------

VALUE mWDM;

// ---------------------------------------------------------
// Prototypes
// ---------------------------------------------------------

void Init_wdm();

// ---------------------------------------------------------

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // WDM_H