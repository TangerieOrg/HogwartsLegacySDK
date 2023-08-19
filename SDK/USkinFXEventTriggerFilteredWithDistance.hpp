#pragma once
#include <cstdint>
#include "USkinFXEventTriggerFiltered.hpp"
#pragma pack(push, 1)
class USkinFXEventTriggerFilteredWithDistance : public USkinFXEventTriggerFiltered {
public:
    float MaxDistanceFromCameraMeters; // 0x30
    bool bUseMaxDistanceFromCamera; // 0x34
    char pad_35[0x3];
    static USkinFXEventTriggerFilteredWithDistance* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
