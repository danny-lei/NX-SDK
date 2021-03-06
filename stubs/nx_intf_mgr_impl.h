/** **********************************************************************
    * This file is auto-generated by nxsdk_remote_stub_gen.py 
    * at 2018-09-26 21:31:54.686514
    * 
    * Copyright (c) 2017 by cisco Systems, Inc.
    *
    * All rights reserved.
************************************************************************/
#ifndef __nx_intf_mgr_impl_H__
#define __nx_intf_mgr_impl_H__

#include "nx_intf_mgr.h" 
   
using namespace nxos;

   
namespace nxos {

class NxIntfImpl : public NxIntf {
public:
    NxIntfImpl();
    virtual ~NxIntfImpl();
    std::string getName();
    std::string getLayer();
    nxos::intf_type_e getType();
    std::string getVrf();
    std::string getVlan();
    std::string getDescription();
    std::string getL3PrAddr(af_e af);
    std::string getL3ScAddr(af_e af, bool fromFirst = false);
    std::string getL2Address();
    std::string getL2AddressHW();
    nxos::state_type_e getAdminState();
    nxos::state_type_e getOperState();
    uint32_t getMtu();
    uint32_t getSpeed();
    unsigned int getMemberCount();
    std::string getMembers(bool fromFirst = false);
    nxos::event_type_e getEvent();
    std::string getLastMod();
    bool setLayer(const std::string &layer);
    bool setVrf(const std::string &vrf);
    bool setVlan(unsigned int vlan_id);
    bool setDescription(const std::string &desc);
    bool setL3Address(const std::string &addr, af_e type,bool primary);
    bool setL2Address(const std::string &mac);
    bool setAdminState(nxos::state_type_e state);
    bool setMtu(uint32_t mtu);
    bool setSpeed(uint32_t speed);
    bool addMember(const std::string &intf_name);
    bool delMember(const std::string &intf_name);
    bool operator==(NxIntf const &intf_obj) const;
    bool operator!=(NxIntf const &intf_obj) const;
    bool equal(NxIntf const &intf_obj) const;
};

class NxIntfMgrImpl : public NxIntfMgr {
public:
    NxIntfMgrImpl();
    virtual ~NxIntfMgrImpl();
    NxIntf* iterateIntf(bool fromFirst = false);
    NxIntf* getIntf(std::string name);
    bool getIntfAll();
    bool closeIntfAll();
    NxIntf* addIntf(std::string name);
    bool removeIntf(std::string name, bool del_sdk = false);
    bool watchIntf(std::string name);
    bool unWatchIntf(std::string name);
    void setIntfHandler(NxIntfMgrHandler *handler);
    NxIntfMgrHandler* getIntfHandler();
};
}
#endif // __nx_intf_mgr_impl_H__ 