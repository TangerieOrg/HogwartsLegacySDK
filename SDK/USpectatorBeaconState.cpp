#include "FSpectatorReservation.hpp"
#include "UObject.hpp"
#include "USpectatorBeaconState.hpp"
USpectatorBeaconState* USpectatorBeaconState::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.SpectatorBeaconState");
    return (USpectatorBeaconState*)res;
}
