#pragma once
#include <cstdint>
#include "AActor.hpp"
class UNetDriver;
#pragma pack(push, 1)
class AOnlineBeacon : public AActor {
public:
    char pad_248[0x8];
    float BeaconConnectionInitialTimeout; // 0x250
    float BeaconConnectionTimeout; // 0x254
    UNetDriver* NetDriver; // 0x258
    char pad_260[0x18];
    static AOnlineBeacon* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
