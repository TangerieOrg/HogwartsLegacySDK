#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FLandscapeVectorParameterSeason {
    FName ParameterName; // 0x0
    FLinearColor SpringVectorValue; // 0x8
    FLinearColor SummerVectorValue; // 0x18
    FLinearColor FallVectorValue; // 0x28
    FLinearColor WinterVectorValue; // 0x38
}; // Size: 0x48
#pragma pack(pop)
