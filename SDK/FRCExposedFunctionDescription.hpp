#pragma once
#include <cstdint>
#include "FRCFunctionDescription.hpp"
#include "FRCObjectDescription.hpp"
#pragma pack(push, 1)
struct FRCExposedFunctionDescription {
    FName DisplayName; // 0x0
    FString ID; // 0x8
    FRCFunctionDescription UnderlyingFunction; // 0x18
    TArray<FRCObjectDescription> OwnerObjects; // 0x48
}; // Size: 0x58
#pragma pack(pop)
