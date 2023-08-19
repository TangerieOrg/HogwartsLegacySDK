#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
class UClass;
#pragma pack(push, 1)
class UFXAdjustments_FindNearbyTarget : public UFXAdjustments {
public:
    UClass* ActorType; // 0x28
    float Range; // 0x30
    bool bFailIfNotFound; // 0x34
    char pad_35[0x3];
    static UFXAdjustments_FindNearbyTarget* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
