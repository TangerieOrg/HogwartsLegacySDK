#include "AOnlineBeaconHostObject.hpp"
#include "APartyBeaconHost.hpp"
#include "UPartyBeaconState.hpp"
APartyBeaconHost* APartyBeaconHost::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.PartyBeaconHost");
    return (APartyBeaconHost*)res;
}
