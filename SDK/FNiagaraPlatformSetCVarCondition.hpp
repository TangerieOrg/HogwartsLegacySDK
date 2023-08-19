#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraPlatformSetCVarCondition {
    FName CVarName; // 0x0
    bool Value; // 0x8
    char pad_9[0x3];
    int32_t MinInt; // 0xc
    int32_t MaxInt; // 0x10
    float MinFloat; // 0x14
    float MaxFloat; // 0x18
    uint8_t bUseMinInt : 1; // 0x1c
    uint8_t bUseMaxInt : 1; // 0x1c
    uint8_t bUseMinFloat : 1; // 0x1c
    uint8_t bUseMaxFloat : 1; // 0x1c
    uint8_t pad_bitfield_1c_4 : 4;
    char pad_1d[0xb];
}; // Size: 0x28
#pragma pack(pop)
