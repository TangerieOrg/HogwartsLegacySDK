#include "UIpConnection.hpp"
#include "UNetConnectionEOS.hpp"
UNetConnectionEOS* UNetConnectionEOS::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemEOS.NetConnectionEOS");
    return (UNetConnectionEOS*)res;
}
