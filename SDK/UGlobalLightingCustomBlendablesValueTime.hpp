#pragma once
#include <cstdint>
#include "FGlobalLightingCustomBlendableNameTime.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
#pragma pack(push, 1)
class UGlobalLightingCustomBlendablesValueTime : public UGlobalLightingCustomBlendablesValueAllowDefaults {
public:
    FGlobalLightingCustomBlendableNameTime Name; // 0x28
    int32_t Hours; // 0x38
    int32_t Minutes; // 0x3c
    int32_t Seconds; // 0x40
    char pad_44[0x4];
    static UGlobalLightingCustomBlendablesValueTime* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
