#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnvironmentalGlobalsUnsetExtraVariables {
    TArray<FName> UnsetScalars; // 0x0
    TArray<FName> UnsetColors; // 0x10
    TArray<FName> UnsetVectors; // 0x20
}; // Size: 0x30
#pragma pack(pop)
