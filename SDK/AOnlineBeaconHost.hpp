#pragma once
#include <cstdint>
#include "AOnlineBeacon.hpp"
class AOnlineBeaconClient;
#pragma pack(push, 1)
class AOnlineBeaconHost : public AOnlineBeacon {
public:
    int32_t ListenPort; // 0x278
    char pad_27c[0x4];
    TArray<AOnlineBeaconClient*> ClientActors; // 0x280
    char pad_290[0xa0];
    static AOnlineBeaconHost* StaticClass();
}; // Size: 0x330
#pragma pack(pop)
