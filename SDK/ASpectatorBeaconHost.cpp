#include "AOnlineBeaconHostObject.hpp"
#include "ASpectatorBeaconHost.hpp"
#include "USpectatorBeaconState.hpp"
ASpectatorBeaconHost* ASpectatorBeaconHost::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost");
    return (ASpectatorBeaconHost*)res;
}
