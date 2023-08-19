#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLayerInfoWeight {
    FString Name; // 0x0
    float weight; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
