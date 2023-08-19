#include "FPartyBeaconCrossplayPlatformMapping.hpp"
#include "FPartyReservation.hpp"
#include "UObject.hpp"
#include "UPartyBeaconState.hpp"
UPartyBeaconState* UPartyBeaconState::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.PartyBeaconState");
    return (UPartyBeaconState*)res;
}
