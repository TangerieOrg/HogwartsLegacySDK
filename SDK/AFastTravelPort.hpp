#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AFastTravelPort : public AActor {
public:
    AFastTravelPort* DestinationPort; // 0x248
    float DelayBeforeTeleport; // 0x250
    char pad_254[0x4];
    static AFastTravelPort* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
