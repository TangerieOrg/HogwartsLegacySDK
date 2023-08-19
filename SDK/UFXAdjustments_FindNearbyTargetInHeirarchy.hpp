#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
class UClass;
#pragma pack(push, 1)
class UFXAdjustments_FindNearbyTargetInHeirarchy : public UFXAdjustments {
public:
    UClass* ActorType; // 0x28
    bool bFailIfNotFound; // 0x30
    char pad_31[0x7];
    static UFXAdjustments_FindNearbyTargetInHeirarchy* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
