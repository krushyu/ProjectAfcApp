#ifndef _INCLUDE_LIB_HANDANCORE_H_
#define _INCLUDE_LIB_HANDANCORE_H_

#include "DllDef.h"

#define LEN_DEV_ID	9

typedef struct {
	unsigned char isGJOk;
	unsigned char isDDOk;
	unsigned char devId[LEN_DEV_ID];
	int task;
	int linkStatus;
	int uploadRec;
	int lineId;
	int version;
	int modVer;
}stUIData;

#ifdef __cplusplus
extern "C" {
#endif

	extern AFC_CORE__API stUIData *GetStatusData(void);

	extern AFC_CORE__API void* StartApp(void *argv);
	

#ifdef __cplusplus
}
#endif

#endif