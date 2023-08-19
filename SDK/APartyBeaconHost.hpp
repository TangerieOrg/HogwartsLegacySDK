#pragma once
#include <cstdint>
#include "AOnlineBeaconHostObject.hpp"
class UPartyBeaconState;
#pragma pack(push, 1)
class APartyBeaconHost : public AOnlineBeaconHostObject {
public:
    UPartyBeaconState* State; // 0x270
    char pad_278[0x60];
    bool bLogoutOnSessionTimeout; // 0x2d8
    char pad_2d9[0x3];
    float SessionTimeoutSecs; // 0x2dc
    float TravelSessionTimeoutSecs; // 0x2e0
    char pad_2e4[0x4];
    static APartyBeaconHost* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
