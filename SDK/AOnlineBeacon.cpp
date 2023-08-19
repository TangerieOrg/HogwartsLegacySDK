#include "AActor.hpp"
#include "AOnlineBeacon.hpp"
#include "UNetDriver.hpp"
AOnlineBeacon* AOnlineBeacon::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.OnlineBeacon");
    return (AOnlineBeacon*)res;
}
