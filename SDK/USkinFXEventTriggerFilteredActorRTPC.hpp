#pragma once
#include <cstdint>
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
#pragma pack(push, 1)
class USkinFXEventTriggerFilteredActorRTPC : public USkinFXEventTriggerFilteredWithDistance {
public:
    FName RTPC; // 0x38
    float Value; // 0x40
    int32_t InterpolationTime; // 0x44
    static USkinFXEventTriggerFilteredActorRTPC* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
