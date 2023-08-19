#pragma once
#include <cstdint>
#include "FChromaSDKGuid.hpp"
#pragma pack(push, 1)
struct FChromaSDKEffectResult {
    int32_t Result; // 0x0
    FChromaSDKGuid EffectId; // 0x4
}; // Size: 0x14
#pragma pack(pop)
