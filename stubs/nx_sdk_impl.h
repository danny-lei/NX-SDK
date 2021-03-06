/** **********************************************************************
    * This file is auto-generated by nxsdk_remote_stub_gen.py 
    * at 2018-09-26 21:31:54.741537
    * 
    * Copyright (c) 2017 by cisco Systems, Inc.
    *
    * All rights reserved.
************************************************************************/
#ifndef __nx_sdk_impl_H__
#define __nx_sdk_impl_H__

#include "nx_sdk.h" 
   
using namespace nxos;

   
namespace nxos {

class NxSdkImpl : public NxSdk {
public:
    NxSdkImpl();
    virtual ~NxSdkImpl();
    void setAppDesc(std::string desc);
    const char* getAppName();
    const char* getAppDesc();
    int getAppId();
    NxCliParser* getCliParser();
    NxTrace* getTracer();
    void startEventLoop();
    void stopEventLoop();
    NxRibMgr* getRibMgr();
    void setAppPriority(nxos::prio_e prio);
    NxIntfMgr* getIntfMgr();
    NxAdjMgr* getAdjMgr();
    NxMacMgr* getMacMgr();
    NxDmeMgr* getDmeMgr();
    bool isInEventLoop() const;
    nxos::running_env_e getRunningEnv() const;
};
}
#endif // __nx_sdk_impl_H__ 