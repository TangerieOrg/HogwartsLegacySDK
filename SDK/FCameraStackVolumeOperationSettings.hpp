#pragma once
#include <cstdint>
#include "ECameraStackVolumeOperation.hpp"
class UCameraStackBehavior;
class UClass;
#pragma pack(push, 1)
struct FCameraStackVolumeOperationSettings {
    UCameraStackBehavior* BehaviorToAdd; // 0x0
    ECameraStackVolumeOperation Operation; // 0x8
    char pad_9[0x7];
    UClass* ExistingBehaviorClass; // 0x10
}; // Size: 0x18
#pragma pack(pop)
