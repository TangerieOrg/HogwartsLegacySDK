#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMerSettings : public UObject {
public:
    float DebugLengthScale; // 0x28
    float NumVoxelsPerSide; // 0x2c
    FVector NumVoxelsEachSide; // 0x30
    bool bAlwaysShowErrors; // 0x3c
    char pad_3d[0x3];
    float CellSize; // 0x40
    int32_t MinPawnRadius; // 0x44
    int32_t MaxPawnRadius; // 0x48
    bool bAutoLinkNavVolumesWithOctrees; // 0x4c
    bool bAllowOctreeMerging; // 0x4d
    char pad_4e[0x2];
    TArray<FName> ModifierUsageTypes; // 0x50
    static UMerSettings* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
