#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ARenderSettingsViewpointVolumeBase : public AVolume {
public:
    float Priority; // 0x280
    float BlendRadius; // 0x284
    float BlendWeight; // 0x288
    bool bUnbounded; // 0x28c
    bool bEnabled; // 0x28d
    char pad_28e[0x2];
    static ARenderSettingsViewpointVolumeBase* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
