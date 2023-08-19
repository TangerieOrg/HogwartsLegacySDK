#pragma once
#include <cstdint>
#include "ECollisionEnabled\Type.hpp"
#include "FResponseChannel.hpp"
#pragma pack(push, 1)
struct FCollisionResponseTemplate {
    FName Name; // 0x0
    ECollisionEnabled::Type CollisionEnabled; // 0x8
    char pad_9[0x1];
    bool bCanModify; // 0xa
    char pad_b[0x21];
    FName ObjectTypeName; // 0x2c
    char pad_34[0x4];
    TArray<FResponseChannel> CustomResponses; // 0x38
}; // Size: 0x48
#pragma pack(pop)
