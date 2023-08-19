#include "UIpNetDriver.hpp"
#include "UNetDriver.hpp"
UIpNetDriver* UIpNetDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.IpNetDriver");
    return (UIpNetDriver*)res;
}
