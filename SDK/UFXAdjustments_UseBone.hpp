#pragma once
#include <cstdint>
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_UseBone : public UFXAdjustments {
public:
    TArray<FName> BoneNames; // 0x28
    bool bLocation; // 0x38
    bool bRotation; // 0x39
    bool bFailIfNotFound; // 0x3a
    char pad_3b[0x5];
    static UFXAdjustments_UseBone* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
