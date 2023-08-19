#include "AOnlineBeacon.hpp"
#include "AOnlineBeaconClient.hpp"
#include "AOnlineBeaconHost.hpp"
AOnlineBeaconHost* AOnlineBeaconHost::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.OnlineBeaconHost");
    return (AOnlineBeaconHost*)res;
}
