#pragma once
#include <cstdint>
#include "AOnlineBeaconHostObject.hpp"
class USpectatorBeaconState;
#pragma pack(push, 1)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject {
public:
    USpectatorBeaconState* State; // 0x270
    char pad_278[0x60];
    bool bLogoutOnSessionTimeout; // 0x2d8
    char pad_2d9[0x3];
    float SessionTimeoutSecs; // 0x2dc
    float TravelSessionTimeoutSecs; // 0x2e0
    char pad_2e4[0x4];
    static ASpectatorBeaconHost* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
