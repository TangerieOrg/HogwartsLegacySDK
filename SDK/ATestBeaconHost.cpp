#include "AOnlineBeaconHostObject.hpp"
#include "ATestBeaconHost.hpp"
ATestBeaconHost* ATestBeaconHost::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.TestBeaconHost");
    return (ATestBeaconHost*)res;
}
