#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FRemoteControlProtocolMapping {
    FGuid ID; // 0x0
    TArray<uint8_t> InterpolationRangePropertyData; // 0x10
    TArray<uint8_t> InterpolationMappingPropertyData; // 0x20
    TArray<uint8_t> InterpolationRangePropertyDataCache; // 0x30
    TArray<uint8_t> InterpolationMappingPropertyDataCache; // 0x40
    int32_t InterpolationMappingPropertyElementNum; // 0x50
    char pad_54[0x24];
}; // Size: 0x78
#pragma pack(pop)
