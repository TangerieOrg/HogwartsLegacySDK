#pragma once
#include <cstdint>
#include "UGlobalLightingBlendable.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableDirectionalLightsOff : public UGlobalLightingBlendable {
public:
    bool bForceVisibilityOff; // 0x28
    char pad_29[0x7];
    static UGlobalLightingBlendableDirectionalLightsOff* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
