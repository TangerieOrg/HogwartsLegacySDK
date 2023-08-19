#include "UOnlineEngineInterface.hpp"
#include "UOnlineEngineInterfaceImpl.hpp"
UOnlineEngineInterfaceImpl* UOnlineEngineInterfaceImpl::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
    return (UOnlineEngineInterfaceImpl*)res;
}
