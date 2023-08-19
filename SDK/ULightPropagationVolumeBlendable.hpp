#pragma once
#include <cstdint>
#include "FLightPropagationVolumeSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULightPropagationVolumeBlendable : public UObject {
public:
    char pad_28[0x8];
    FLightPropagationVolumeSettings Settings; // 0x30
    float BlendWeight; // 0x70
    char pad_74[0x4];
    static ULightPropagationVolumeBlendable* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
