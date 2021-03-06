// -------------------------------------------------------------------------
//    @FileName      :    NFCEventRouteModule.cpp
//    @Author           :    Ark Game Tech
//    @Date             :    2015-01-02
//    @Module           :    NFCEventRouteModule
//
// -------------------------------------------------------------------------

#include "NFCEventRouteModule.h"

bool NFCEventRouteModule::Init()
{


    return true;
}


bool NFCEventRouteModule::Shut()
{
    return true;
}

bool NFCEventRouteModule::Execute(const float fLasFrametime, const float fStartedTime)
{
    //λ����
    return true;
}

bool NFCEventRouteModule::AfterInit()
{
    m_pEventProcessModule = dynamic_cast<NFIEventProcessModule*>(pPluginManager->FindModule("NFCEventProcessModule"));
    m_pKernelModule = dynamic_cast<NFIKernelModule*>(pPluginManager->FindModule("NFCKernelModule"));
    m_pLogModule = dynamic_cast<NFILogModule*>(pPluginManager->FindModule("NFCLogModule"));

    assert(NULL != m_pEventProcessModule);
    assert(NULL != m_pKernelModule);
    assert(NULL != m_pLogModule);


    return true;
}

bool NFCEventRouteModule::StartRouteEvent(const NFIDENTID& self, const NFIDataList& xDataList)
{
    return false;
}

bool NFCEventRouteModule::ReceiveRouteEvent(const NFIDENTID& self, const NFIDataList& xDataList)
{
    return false;
}

