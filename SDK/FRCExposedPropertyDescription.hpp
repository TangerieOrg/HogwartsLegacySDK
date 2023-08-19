#pragma once
#include <cstdint>
#include "FRCObjectDescription.hpp"
#include "FRCPropertyDescription.hpp"
#pragma pack(push, 1)
struct FRCExposedPropertyDescription {
    FName DisplayName; // 0x0
    FString ID; // 0x8
    FRCPropertyDescription UnderlyingProperty; // 0x18
    char pad_b8[0x50];
    TArray<FRCObjectDescription> OwnerObjects; // 0x108
}; // Size: 0x118
#pragma pack(pop)
